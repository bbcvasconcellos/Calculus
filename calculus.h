/*
Author: Bruno Vasconcellos
Definition: header file
*/

#ifndef CALCULUS_H
#define CALCULUS_H

#define PI 3.1415926

double integration(double *(f) (double), double a, double b); //a = lower bound, b = upper bound
double derivative(double *(f)(double), double x);


#endif


