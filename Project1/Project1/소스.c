#include<stdio.h>

/* int main(void)
{
	double num1 = 0; //실수일 경우 정수int 대신 double or float
	num1= 3.8;
	int num2 = 4;
	double result = num1 + num2;

	printf("%f",result);
}
*/

/*int main(void)
{
	float  num1 = 2.46;
	float num2 = 3.47;
	float result = num1 + num2;
	printf("덧셈 결과: %.2f \n", result);
	printf("%.2f+%.2f=%.2f \n", num1, num2, result);
	printf("%.2f와 %.2f의 합은%.2f입니다.\n", num1, num2, result);
	return 0;
}*/

/*int main(void)
{
	//int num1 = 9, num2 = 2;
	int num1, num2;
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	printf("%d+%d=%d \n", num1, num2, num1 + num2);
	printf("%d-%d=%d \n", num1, num2, num1 - num2);
	printf("%d×%d=%d \n", num1, num2, num1 * num2);
	printf("%d÷%d의 몫=%d \n", num1, num2, num1 / 2);
	printf("%d÷%d의 나머지=%d \n", num1, num2, num1 % num2);
	return 0;
}*/

/*int main(void)
{
	int num1 = 2, num2 = 4, num3 = 6;
	num1 += 3; >> num1 = num1 + 3;
	num2 *= 4;
	num3 %= 5;
	printf("result: %d, %d, %d \n", num1, num2, num3);
	return 0;
}*/


/*int main(void)
{
	int num1 = +2;
	int num2 = -4;

	num1 = -num1;
	printf("num1: %d \n", num1);
	num2 = -num2;
	printf("num2: %d \n", num2);
	return 0;
}*/

/*int main(void)
{
	int num1 = 12;
	int num2 = 12;

	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++);
	printf("num1: %d \n\n", num1);

	printf("num2: %d \n", num2);
	printf("++num2: %d \n", ++num2);
	printf("num2:%d \n", num2);
	return 0;
}*/

int main(void)
{
	int num1 = 10;
	int num2 = (num1--) + 2;

	printf("num1:%d \n", num1);
	printf("num2:%d \n", num2);
	return 0;
}