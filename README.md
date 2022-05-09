# Calculus
Project develop to calculate integrals and derivatives. 

## Stack:
* [C Programming language](https://devdocs.io/c/)

## Running this program
1. Make sure you have gcc installed in your PC
2. `git clone` this repo
3. Run the code

## How does it work?

### Integration Function
The integrate function: will calculate the integral of any user given function,
the code will make use of [Riemann's sum](https://en.wikipedia.org/wiki/Riemann_sum); it uses a **step size of 0.01** (feel free to change this value accordingly to your needs) for each
rectangle's base and the user function to determine the high, then it will add all the
rectangle areas in a value that will be returned once the loop is over.

### Derivative Function
The derivative function: will calculate the derivative of any user input function.
The code makes use of the [derivative definition formula](https://en.wikipedia.org/wiki/Derivative#Definition): f'(x) = ((x+h) - f(x-h)) / (2*h)
