#include <stdio.h>

int main() {
  int mark;
  char grade;
  printf("Inserisci il tuo punteggio: ");
  scanf("%d", &mark);
  if (mark > 100 || mark < 0) {
    printf("\nPunteggio non valido");
    return 1;
  }
  int percentage = 100 - mark;
  if (percentage <= 10) {
    grade = 'A';
  } else if (percentage <= 25) {
    grade = 'B';
  } else if (percentage <= 40) {
    grade = 'C';
  } else if (percentage <= 70) {
    grade = 'D';
  } else {
    grade = 'F';
  }

  printf("Il tuo voto è: %c\n", grade);

  return 0;
}
