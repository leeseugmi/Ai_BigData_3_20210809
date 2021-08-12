//85

#include<stdio.h>

/*int main(void)
{
	int num1 = 0xA7, num2 = 0x43;
	int num3 = 032, num4 = 024;

	printf("0xA7의 10진수 정수 값: %d \n", num1);
	printf("0x43의 10진수 정수 값: %d \n", num2);
	printf(" 032의 10진수 정수 값: %d \n", num3);
	printf(" 024의 10진수 정수 값: %d \n", num4);

	printf("%d-%d=%d \n", num1, num2, num1 - num2);
	printf("%d+%d=%d \n", num3, num4, num3 + num4);
	return 0;
}*/

//93 (비트연산자)

/*int main(void)
{
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 & num2;
	printf("AND 연산의 결과: %d \n", num3);
	return 0;
}
*/

/*int main(void)
{
	int num1 = 15;
	int num2 = ~num1;
	printf("NOT 연산의 결과: %d \n", num2);
	return 0;
}*/

/*int main(void)
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("변수 ch의 크기: %d \n", sizeof(ch));
	printf("변수 inum의 크기: %d \n", sizeof(inum));
	printf("변수 dnum의 크기: %d \n", sizeof(dnum));

	printf("char의 크기: %d \n", sizeof(char));
	printf("int의 크기: %d \n", sizeof(int));
	printf("long의 크기: %d \n", sizeof(long));
	printf("long long의 크기: %d \n", sizeof(long long));
	printf("float의 크기: %d \n", sizeof(float));
	printf("double의 크기: %d \n", sizeof(double));
	return 0;
}*/

/*int main(void)
{
	double rad;
	double area;
	printf("원의 반지름 입력: ");
	scanf_s("%lf", & rad);

	area = rad * rad * 3.1415;
	printf("원의 넓이: %f \n", area);
	return 0;
}*/

//int main(void)
//{
//	char ch1 = 'A', ch2 = 65;
//	int ch3 = 'Z', ch4 = 90;
//
//	printf("%c %d \n", ch1, ch1);
//	printf("%c %d \n", ch2, ch2);
//	printf("%c %d \n", ch3, ch3);
//	printf("%c %d \n", ch4, ch4);
//	return 0;
//}

//#include<stdio.h>
//
//int main(void)
//{
//	printf("%c%c%c %c%c%c%c%c %c%c \n", 76, 101,101,83,101,117,110,103,109,105);
//	return 0;
//}

#include<stdio.h>

//int main(void)
//{
//	printf("literal int size: %d \n", sizeof(7));
//	printf("literal double size: %d \n", sizeof(7.14));
//	printf("literal char size: %d \n", sizeof('A'));
//	return 0;
//}

//int main(void)
//{
//	double num1 = 245;
//	int num2 = 3.1415;
//	int num3 = 129;
//	char ch = num3;
//
//	printf("정수 245를 실수로: %f \n", num1);
//	printf("실수 3.1415를 정수로: %d \n",num2);
//	printf("큰 정수 129를 작은 정수로: %d \n", ch);
//	return 0;
//}

int main(void)
{
	int num1 = 3, num2 = 4;
	double divResult;
	divResult = (double) num1 / num2;
	printf("나눗셈 결과: %f \n", divResult);
	return 0;
}