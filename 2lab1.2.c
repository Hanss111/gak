#include <stdio.h>

int main() {
  int N;
  printf("Введіть кількість секунд (N): ");
  scanf("%d", &N);

  int m = N / 60;

  printf("Кількість повних хвилин, що минули: %d\n", m);

  return 0;
}
