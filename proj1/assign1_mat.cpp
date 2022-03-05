/**
 * @file assign1_mat.c
 * @brief Provided struct and functions for SUSTech CS205 (s22) assignment 1
 * @details You NEED NOT modify this file, and DON'T submit this to Blackboard. But you can learn the code by yourself.
 * @author gdjs2
 * @date 2022-03-01
 */


#include <memory.h>
#include <stdlib.h>

#include "assign1_mat.h"

matrix create_matrix_all_zero(int row, int col) {
    matrix mat;
    mat.m_col = col;
    mat.m_row = row;
    mat.m_data_size = row * col * sizeof(int);
    mat.m_data = malloc(mat.m_data_size);
    memset(mat.m_data, 0, mat.m_data_size);
    return mat;
}


void delete_matrix(matrix mat) {
    free(mat.m_data);
}


matrix copy_matrix(matrix mat) {
    matrix _mat = mat;
    _mat.m_data = malloc(_mat.m_data_size);
    memcpy(_mat.m_data, mat.m_data, _mat.m_data_size);
    return _mat;
}


void set_by_index(matrix mat, int row, int col, int val) {
    if (row >= mat.m_row || col >= mat.m_col) return ;
    *(((int *) mat.m_data) + row * mat.m_col + col) = val;
}


int get_by_index(matrix mat, int row, int col) {
    if (row >= mat.m_row || col >= mat.m_col) return 0xdeadbeef;
    return *(((int *) mat.m_data) + row * mat.m_col + col);
}

const int MODULO = 1e9 + 7;

int scalar_multiplication(matrix mat_a, int x, matrix mat_res) {
    if (mat_res.m_row != mat_a.m_row ||
        mat_res.m_col != mat_a.m_col) {
        return 1;
    }
    for (int i = 0; i < mat_res.m_row; ++i)
        for (int j = 0; j < mat_res.m_col; ++j) {
            int val = ((long long) get_by_index(mat_a, i, j)) * x % MODULO;
            set_by_index(mat_res, i, j, val);
        }
    return 0;
}