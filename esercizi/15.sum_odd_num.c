#include <stdio.h>

int main() {
  int num, sum = 0;
  printf("Scrivi un numero: ");
  scanf("%d", &num);
  for (int i = 0; i < num; i++) {
    if ((i % 2) == 0) {
      sum += i;
    }
  }
  printf("La somma dei numeri pari fino al numero %d è: %d\n", num, sum);
}
