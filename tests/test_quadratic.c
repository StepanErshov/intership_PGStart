#include "../src/quadratic_equation.h"
#include <assert.h>
#include <stdio.h>

void test_solve() {
  assert(solve_equation(1, -3, 2) == 2); // true
  assert(solve_equation(1, 0, -1) == 1); // true
  assert(solve_equation(1, 2, 3) ==
         0.5); // false, assert will give an error,
               // incorrect value of the quadratic equation
               // true meaning(-1)
}

int main() {
  test_solve();
  printf("All tests pass.\n");
  return 0;
}