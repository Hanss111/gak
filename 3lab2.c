#include <stdio.h>

int main() {
  int число1, число2;
  printf("Введіть перше ціле число: ");
  scanf("%d", &число1);
  printf("Введіть друге ціле число: ");
  scanf("%d", &число2);

  int залишок = число1 % число2;

  int різниця = число2 - число1;

  int сумаКвадратів = число1 * число1 + число2 * число2;

  printf("Залишок: %d\n", залишок);
  printf("Різниця: %d\n", різниця);
  printf("Сума квадратів: %d\n", сумаКвадратів);

  return 0;
}
