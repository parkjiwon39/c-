#include <stdio.h>	// C ����� ǥ�� �����
#include <iostream>	// C++ ����� ǥ�� �����
#include <iomanip>  // ����� �⺻ form
#include <conio.h>
#include <string>	// ���ڿ�
#include <sstream>	// Ŭ������ ��ü�� ����.

using namespace std;	// ��ũ�� 


// 1.
//void main()
//{
//	char name[] = "yeom joo young";
//	int kor, eng, mat, tot;
//	double avg;
//	kor = 90;
//	eng = 85;
//	mat = 70;
//	tot = kor + eng + mat;
//	avg = tot / 3.0;
//
//	// C ���
//	printf("********************* c ��� ��� �Լ� **********************");
//	printf("	name	kor	eng	mat	tot	avg\n");
//	printf("%8s %4d %4d %4d %5d 61f\" ,name,kor,eng,mat,tot,avg);
//
//	// C �� ��� ���
//	//std::cout << "Hello C++" <<std::endl;  // endl ������ �����ϳ� ���� / ��ũ�� ������� ������ ���౸�� (���ξ� ����)
//	//cout << "Hello C++" << endl;	// ��ũ�� ���� ���౸�� (���ξ� ��������)
//
//
//
//	// C++ ���
//	cout << endl << "******************** c++ ��� ��� �Լ� **********************" << endl;
//	cout << "	name	kor	eng	mat	tot	avg\n" << endl;
//	cout << setw(10) << name << setw(4) << kor << setw(4) << eng << setw(4)		// ��� �ڸ����� ��Ÿ���� ����
//		<< mat << setw(5) << tot << setw(5)<<setprecision(3)<<avg<<endl; //setprecision (�Ҽ��� �ڸ�ǥ��)
//}

// 2.
//void main()
//{
//	int number;
//	cout << "���� �Է¹ޱ� : ";
//	cin >> number;
//	cout << "��� : " << number << endl;
//
//	char dan[15];
//	cout << "���� �Է¹ޱ� :";
//	cin >> dan;
//	cout << "��� :" << dan << endl;
//	cout << "���߷��� 0�� ��������! ";
//	_getch();		//include <conio.h> �߰�
//	cout << endl;
//
//
//
//
//}

// 3.  
//#include <string>		// ���ڿ�
//#include <sstream>    // Ŭ������ ��ü�� ����.
//�߰�

//int main()
//{
//	int n;
//	stringstream siba; // sstream �� ������� Ŭ����. 
//	siba.str("12 345 6789 0 -12 �� ���Ҹ���");
//
//	//�ȵ��������ŵ��Ǵµ� ���ϳ�
//	for (int i = 0; i < 5; i++) {
//	siba >> n;		// int�� ����ȯ ���̵� ����ִ� ���� ���� ģ����
//	cout << n << endl;
//	}
//
//	return 0;
//}

// 4.
//void main()
//{
//	cout << setw(10) << "753-9510" << "|" << endl;	// �⺻�� ����������
//	cout << setiosflags(ios::left);	// ���� ���� ����
//	cout << 3.14 << endl;
//	cout << setprecision(6);	// �Ҽ��� ���� 6�ڸ� >> �Ҽ��� �ڿ� 5�ڸ��� ����.
//	cout << setw(10) << setiosflags(ios::showpoint) << 3.14 << endl;	// �Ҽ����� ����ִ� ������ 0���� ä����.(showpoint)
//	cout << resetiosflags(ios::left);	// ���� ���� ����
//	cout << setw(10) << "World" << "|" << endl;
//	cout << setiosflags(ios::left) << setw(10) << "World" << "|" << endl;	// ���� ���� ����
//	
//
//}


// 5.
//void main()
//{
//	char Name[15];
//	char address[20];
//	cout << "�̸��� �Է��ϼ��� : ";
//	cin.get(Name, 15);
//	cin.ignore();// �ּ�ó���� ����(enter�� �����Ͽ� ���� �Է���
//	cout << "address : ";
//	cin.get(address, 20);
//	cout << "\nName : " << Name << endl;
//	cout << "address : " << address << endl;
//}

//void main()
//{
//	char name[15];
//	char address[20];
//	cout << "what's your name ? ";
//	cin.getline(name, 15);
//	cout << "address ? ";
//	cin.getline(address, 20);
//	cout << "\nName : " << name << endl;
//	cout << "Address : " << address << endl;
//}

//void main()
//{
//	int a = 10, b = 5, c, d, e;
//	printf("a= %d b=%d\n", a++, b); // 10, 5
//	printf("a= %d b=%d\n", a++, --b); // 11, 4
//	printf("a= %d b=%d\n", ++a, b); // 13, 4
//	c = a;
//	printf("c= %d\n", c);
//	d = a % b;
//	printf("d= %d\n", d);
//}

//void main()
//{
//	int a, b, c, h, s;
//	a = b = h = 5;
//	c = ++a + b--;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//	s = ++h + ++h;
//	cout << "h = " << h << endl;
//	cout << "s = " << s << endl;
//}

void main()
{
	/*int h, s;
	h = 3;
	s = h > 2;
	cout << s << endl;
	s = h < 2;
	cout << s << endl;
	s = 2 == 3;
	cout << s << endl;*/

	/*int h, s;
	h = 2 != 4 && 5 > 3;
	s = !1 || !0;
	cout << h << endl;
	cout << s << endl;*/

	/*int a, b, c;
	printf("�� ���� �Է��ϼ��� : ");
	scanf_s("%d,%d", &a, &b);
	c = a > b;
	printf("C��� : %d\n", c);
	printf("a>b��� : %d\n", a > b);
	a++;
	printf("a�� b�� ���� : %d\n", a == b);
	printf("a�� b�� ���� �ʴ� : %d\n", a != b);*/

	int a = 3, b = 2, c;
	c = a == ++b;
	printf("��� : %d\n", (a == b) && (--b == c));
	printf("��� : %d\n", (a != b) || (b == c));
	printf("��� : %d\n", !((a != b) || (b == c)));
}