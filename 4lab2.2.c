#include <stdio.h>
#include <math.h>

int main() {
  double a = 5;
  double b = -2;
  double c = 3;

  double дискримінант = b * b - 4 * a * c;

  if (дискримінант < 0) {
    printf("Рівняння не має дійсних коренів.\n");
    return 0;
  }

  double корінь1 = (-b + sqrt(дискримінант)) / (2 * a);
  double корінь2 = (-b - sqrt(дискримінант)) / (2 * a);

  printf("Корені рівняння:\n");
  printf("x1 = %.2f\n", корінь1);
  printf("x2 = %.2f\n", корінь2);

  return 0;
}
