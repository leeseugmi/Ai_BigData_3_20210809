//#include <stdio.h>

// ���迬����
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
// ��������
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
// �޸� ������
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

	printf("���� �Է��Ͻÿ� \n"); //ù��°����
	printf("���� one :");
	scanf_s("%d", &num1);
	printf("���� two :");
	scanf_s("%d", &num2);

	result = num1 + num2;
	printf("%d+%d=%d \n", num1, num2, result);
	return 0;
}


int main(void)
{
	int result;
	int num1, num2, num3;

	printf("�� ���� ���� �Է� : ");
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
//	printf("�� ���� �Է� : ");
//	scanf_s("%d %d", &num1, &num2);
//	printf("%d-%d = %d \n", num1, num2, num1 - num2);
//	printf("%d��%d = %d", num1, num2, num1 * num2);
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
//	printf("%d��%d+%d = %d \n", num1,num2,num3, result);
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
//	printf("%d % d�� ��= %d \n", num1, num2, num1 / num2);
//	printf("%d��%d�� ������= %d", num1, num2, num1 % num2);
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