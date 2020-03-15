#include <stdio.h>

int main(void) {
  int x, answer;

  printf("x 값: ");
  scanf("%d", &x);

  answer = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

  printf("답: %d\n", answer);

  return 0;
}
