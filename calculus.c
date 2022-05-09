/*
Author: Bruno Vasconcellos
Description: This is the source file.
*/


#include "calculus.h"

#include <stdio.h>
#include <math.h>


double integrate(double (*f)(double), double a, double b){
    double integral = 0.0, step_size = 0.01, x;

    for(x = a + step_size; x <= b; x += step_size){
        integral += step_size * f(x);
    }

    return integral;
}


double derivate(double (*f)(double), double x){
    double step_size = 0.01, derivative;

    return derivative = (f(x + step_size) - f(x - step_size)) / (2 * step_size);

}
