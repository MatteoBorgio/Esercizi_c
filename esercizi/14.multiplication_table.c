#include <stdio.h>

int main() {
  int num;
  printf("Scrivi un numero: ");
  scanf("%d", &num);
  printf("\nMultiplication table:\n");
  for (int i = 1; i < 11; i++) {
    printf("%d\n", num * i);
  }
  return 0;
}
