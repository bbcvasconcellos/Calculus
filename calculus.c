/*
Author: Bruno Vasconcellos
Description: This is the source file.
1. The integrate function: will calculate the integral of any user given function,
the code will make use of Riemann's sum; it will use a step size of 0.01 (feel free to change this value accordingly to your needs) for each
rectangle's base and the user function to determine the high, then it will add all the
rectangle areas in a value that will be returned once the loop is over.

2. The derivative function: will calculate the derivative of any user input function.
The code makes use of the derivative definition formula: f'(x) = ((x+h) - f(x-h)) / (2*h)
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
