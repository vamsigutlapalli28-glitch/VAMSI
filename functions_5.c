#include <stdio.h>
void calculateSum(int x, int y) {
  int sum = x + y;
  printf("The sum of %d + %d is: %d\n", x, y, sum);
}

int main() {
	int a,b;
	scanf("%d %d",&a,&b);
  calculateSum(a,b);
  return 0;
}
