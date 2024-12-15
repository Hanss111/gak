#include <stdio.h>

int main() {
  double x, y;

  printf("Введіть координату x точки A: ");
  scanf("%lf", &x);

  printf("Введіть координату y точки A: ");
  scanf("%lf", &y);

  int квадрант;

  if (x > 0 && y > 0) {
    квадрант = 1;
  } else if (x > 0 && y < 0) {
    квадрант = 2;
  } else if (x < 0 && y < 0) {
    квадрант = 3;
  } else if (x < 0 && y > 0) {
    квадрант = 4;
  } else if (x == 0 && y == 0) {
    printf("Точка A знаходиться в центрі координатної системи.\n");
    return 0;
  } else if (x == 0 && y != 0) {
    printf("Точка A знаходиться на осі y.\n");
    return 0;
  } else if (y == 0 && x != 0) {
    printf("Точка A знаходиться на осі x.\n");
    return 0;
  }

  printf("Точка A знаходиться в квадранті %d.\n", квадрант);

  return 0;
}
