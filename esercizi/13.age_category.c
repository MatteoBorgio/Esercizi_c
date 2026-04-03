#include <stdio.h>

int main() {
  int age;
  printf("Inserisci la tua età: ");
  scanf("%d", &age);
  if (age < 13) {
    printf("\nChild.\n");
  } else if (age < 20) {
    printf("\nTeen.\n");
  } else if (age < 60) {
    printf("\nAdult.\n");
  } else {
    printf("\nSenior.\n");
  }
  return 0;
}
