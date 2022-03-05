#ifndef __CS205_ASSIGN_1_MAT_H__
#define __CS205_ASSIGN_1_MAT_H__

#include <stddef.h>

typedef struct matrix {
    int m_col;
    int m_row;
    size_t m_data_size;
    void *m_data;
} matrix;


matrix create_matrix_all_zero(int row, int col);


void delete_matrix(matrix mat);


matrix copy_matrix(matrix mat);


void set_by_index(matrix mat, int row, int col, int val);


int get_by_index(matrix mat, int row, int col);


int scalar_multiplication(matrix mat_a, int x, matrix mat_res);

#endif  // __CS205_ASSIGN_1_MAT_H__
