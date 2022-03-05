
#ifndef __CS205_ASSIGN_1_H__
#define __CS205_ASSIGN_1_H__

#include "assign1_mat.h"

extern const int MODULO;

int quick_power(int x, int n);

int matrix_addition(matrix mat_a, matrix mat_b, matrix mat_res);

int matrix_multiplication(matrix mat_a, matrix mat_b, matrix mat_res);

int naive_matrix_exp(matrix mat_a, int exp, matrix mat_res);

int fast_matrix_exp(matrix mat_a, long long exp, matrix mat_res);

int fast_cal_fib(long long n);

#endif  // __CS205_ASSIGN_1_H__
