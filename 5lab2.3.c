#include <stdio.h>
#include <math.h>

int main() {
  double a, b, c;

  printf("Введіть коефіцієнт при x^2 (a): ");
  scanf("%lf", &a);

  printf("Введіть коефіцієнт при x (b): ");
  scanf("%lf", &b);

  printf("Введіть вільний член (c): ");
  scanf("%lf", &c);

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

