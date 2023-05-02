#include<stdio.h>

int main() {
	
	int num1, num2, add, sub, mul, div, rem; 
	printf("두 수를 입력하세요 : ");
	scanf("%d %d", &num1, &num2);
	add = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	div = num1 / num2;
	rem = num1 % num2;
	printf("%d + %d = %d\n", num1, num2, add);
	printf("%d - %d = %d\n", num1, num2, sub);
	printf("%d * %d = %d\n", num1, num2, mul);
	printf("%d / %d = %d\n", num1, num2, div);
	printf("%d %% %d = %d\n", num1, num2, rem);
	return 0;
}