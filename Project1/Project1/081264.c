//#include <stdio.h>

// 관계연산자
/*int main(void)
{
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == num2);
	result2 = (num1 <= num2);
	result3 = (num1 > num2);

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);
	return 0;
}
// 논리연산자
int main(void)
{
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == 10 && num2 == 12);
	result2 = (num1 < 12 || num2>12);
	result3 = (!num1);

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);
	return 0;
}
// 콤마 연산자
int main(void)
{
	int num1 = 1, num2 = 2;
	printf("Hello"), printf("World! \n");
	num1++, num2++;
	printf("%d ", num1), printf("%d", num2), printf("\n");
	return 0;
}
// scanf , printf &OX
int main()
{
	int num = 0;
	scanf_s("%d", &num);
	printf("%d\n", num);
	printf("%d\n", &num);
	return 0;
}

int main(void)
{
	int result;
	int num1, num2;

	printf("값을 입력하시오 \n"); //첫번째문장
	printf("정수 one :");
	scanf_s("%d", &num1);
	printf("정수 two :");
	scanf_s("%d", &num2);

	result = num1 + num2;
	printf("%d+%d=%d \n", num1, num2, result);
	return 0;
}


int main(void)
{
	int result;
	int num1, num2, num3;

	printf("세 개의 정수 입력 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d \n", num1, num2, num3, result);
	return 0; 
}*/

//#include <stdio.h>

//int main(void)
//{
//	int num1, num2;
//
//	printf("두 정수 입력 : ");
//	scanf_s("%d %d", &num1, &num2);
//	printf("%d-%d = %d \n", num1, num2, num1 - num2);
//	printf("%d×%d = %d", num1, num2, num1 * num2);
//	return 0;
//}	

//int main(void)
//{
//	int result;
//	int num1, num2, num3;
//
//	
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//	result = num1*num2+num3;
//	printf("%d×%d+%d = %d \n", num1,num2,num3, result);
//	return 0;
//}

//int main(void)
//{
//	int num1;
//	
//	scanf_s("%d", &num1);
//	printf("%d", num1 * num1);
//	return 0;
//}

//int main(void)
//{
//	int num1, num2;
//
//	scanf_s("%d %d", &num1, &num2);
//	printf("%d % d의 몫= %d \n", num1, num2, num1 / num2);
//	printf("%d÷%d의 나머지= %d", num1, num2, num1 % num2);
//	return 0;
//}
//
//int main(void)
//{
//	int num1, num2, num3;
//
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//	printf("%d", (num1 - num2) * (num2 + num3) * (num3 % num1));
//	return
//	0;
//}