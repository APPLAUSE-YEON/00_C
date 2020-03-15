#include <stdio.h>

#define PI 3.14f

int main(void) {
  float r = 10.0f, v;

  v = (4.0f / 3.0f) * PI * r * r * r;

  printf("구의 부피: %.1f\n", v);

  return 0;
}
