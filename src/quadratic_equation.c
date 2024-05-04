#include <complex.h>
#include <math.h>
#include <stdio.h>

double solve_equation(double a, double b, double c) {

  double discriminant = b * b - 4 * a * c;

  if (discriminant > 0) {
    return (-b + sqrt(discriminant)) / (2 * a);
  } else if (discriminant == 0) {
    return -b / (2 * a);
  } else {
    return -b / (2 * a) + I * sqrt(-discriminant) / (2 * a);
  }
}