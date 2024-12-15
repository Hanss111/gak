#include <stdio.h>
#include <math.h>

int main() {
  float x, y;
  printf("Введіть координати точки (x, y): ");
  scanf("%f %f", &x, &y);

  float radius;
  printf("Введіть радіус кола: ");
  scanf("%f", &radius);

  float distance = sqrt(pow(x - 1, 2) + pow(y - 0, 2));

  if (distance > radius) {
    printf("Точка (%f, %f) лежить за межами кола.\n", x, y);
  } else {
    printf("Точка (%f, %f) лежить всередині або на колі.\n", x, y);
  }

  return 0;
}
