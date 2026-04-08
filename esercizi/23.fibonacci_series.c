#include <stdio.h>

int fibonacci_series(int num);

int main() {
  int num;
  printf("Inserisci il numero della successione di fibonacci: ");
  scanf("%i", &num);
  printf("\n");
  for (int i = 0; i < num; i++) {
    printf("%i\n", fibonacci_series(i));
  }
  return 0;
}

int fibonacci_series(int num) {
  if (num == 1 || num == 0) {
    return num;
  } else {
    return (fibonacci_series(num - 1) + fibonacci_series(num - 2));
  }
}
