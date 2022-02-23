//AUTHOR:Xavier Lopez
//ASSIGNMENT TITLE:Program 24
//ASSIGNMENT DESCRIPTION:Matrix Arithmetic and Objects
//DUE DATE:11/12/2021
//DATE CREATED:11/12/2021
//DATE LAST MODIFIED:11/12/2021
#include "matrix.h"

matrix_t::matrix_t() {
    row = MAX_SIZE;
    col = MAX_SIZE;
}

matrix_t::matrix_t(int x, int y) {
    row = x;
    col = y;
}


void matrix_t::setRow(int x) {
    row = x;
}

void matrix_t::setCol(int y) {
    col = y;
}

void matrix_t::setValue(int x, int y, double a) {
    data[x][y] = a;
}


int matrix_t::getRow() const {
    return row;
}

int matrix_t::getCol() const {
    return col;
}

double matrix_t::getValue(int x, int y) const {
    return data[x][y];
}


void matrix_t::display(ostream& out) const {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            out << setw(WIDTH) << data[i][j];
        }
        out << endl;
    }
}

double matrix_t::determinant() const {
    double det = 0;
    int subi, subj;
    matrix_t submatrix(row-1,col-1);
    if (row == 2)
        return ((data[0][0] * data[1][1]) - (data[1][0] * data[0][1]));
    else {
        for (int n = 0; n < row; n++) {
            subi = 0;
            for (int i = 1; i < row; i++) {
                subj = 0;
                for (int j = 0; j < col; j++) {
                    if (j != n){
                        submatrix[subi][subj] = data[i][j];
                        subj++;
                    }
                }
                subi++;
            }
            det += (pow(-1, n) * data[0][n] * submatrix.determinant());
        }
    }
    return det;
}


matrix_t matrix_t::add(const matrix_t& m) const {
    matrix_t ans(this->row, this->col);
    for (int i = 0; i < this->row; i++) {
        for (int j = 0; j < this->col; j++) {
            ans.data[i][j] = this->data[i][j] + m.data[i][j];
        }
    }
    return ans;
}

matrix_t matrix_t::subtract(const matrix_t& m) const {
    matrix_t ans(this->row, this->col);
    for (int i = 0; i < this->row; i++) {
        for (int j = 0; j < this->col; j++) {
            ans.data[i][j] = this->data[i][j] - m.data[i][j];
        }
    }
    return ans;
}

matrix_t matrix_t::multiply(const matrix_t& m) const {
    matrix_t ans(this->row, m.col);
    double product;
    if (this->col == m.row) {
        for (int r = 0; r < this->row; r++) {
            for (int c = 0; c < m.col; c++) {
                product = 0;
                for (int k = 0; k < this->col; k++) {
                    product += this->data[r][k] * m.data[k][c];
                }
                ans[r][c] = product;
            }
        }
    }
    return ans;
}


matrix_t matrix_t::operator+(const matrix_t& m) const {
    return add(m);
}

matrix_t matrix_t::operator-(const matrix_t& m) const {
    return subtract(m);
}

matrix_t matrix_t::operator*(const matrix_t& m) const {
    return multiply(m);
}

double* matrix_t::operator[](int n) {
    return data[n];
}
