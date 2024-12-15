#include <stdio.h>

int main() {
  int monthNumber;

  printf("Введіть номер місяця (1-12): ");
  scanf("%d", &monthNumber);

  if (monthNumber < 1 || monthNumber > 12) {
    printf("Невідомий номер місяця.\n");
    return 0;
  }

  char *monthNames[] = {"Січень", "Лютий", "Березень", "Квітень", "Травень", "Червень",
                        "Липень", "Серпень", "Вересень", "Жовтень", "Листопад", "Грудень"};

  printf("Місяць: %s\n", monthNames[monthNumber - 1]);

  return 0;
}
