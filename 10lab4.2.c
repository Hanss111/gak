#include <stdio.h>

int main() {
  int sum = 0;

  int count = 0;

  for (int i = 1; i <= 100; i++) {
    if (i % 2 == 0) {
      sum += i;

      count++;
    }
  }

  double average = (double)sum / count;

  printf("Середнє арифметичне парних чисел у діапазоні [1;100]: %.2f\n", average);

  return 0;
}
