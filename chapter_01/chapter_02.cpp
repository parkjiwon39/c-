#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int a = 5;
	double b = 5.5;
	char str[10] = "1000";
	char tmp[10] = {0, };
	printf("a+str = %d\n", a + atoi(str));	 // ���ڿ� > ������ ��ȯ
	printf("b+str = %.2f\n", b + atof(str));	// ���ڿ� > �Ǽ��� ��ȯ
	printf("%s\n", str); return 0;



	// �� ��ȯ //
	int a, b;
	printf("ù��° ���� �Է��ϼ��� : %d");
	scanf_s("%d", &a);
	printf("�ι�° ���� �Է��ϼ��� : %d");
	scanf_s("%d", &b);
	printf("������� = %d\n", a + b);
	printf("��������� = %d\n", a % b);
	printf("����������� = %d\n", -a + b);
	printf("a�� ������ = %d\n", a + 1);
}