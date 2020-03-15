#include <stdio.h>

#define PI 3.14f

int main(void) {
  float r, v;

  printf("구의 반지름: ");
  scanf("%f", &r);

  v = (4.0f / 3.0f) * PI * r * r * r;

  printf("구의 부피: %.1f\n", v);

  return 0;
}
