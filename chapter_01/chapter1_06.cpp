#include <iostream>
using namespace std;

void main() 
{
	/*int kor, eng, tot, mok;
	double avg;

	cout << "�������� : ";
	cin >> kor;
	cout << "�������� : ";
	cin >> eng;
	
	tot = kor + eng;
	avg = tot / 2.0;
	mok = avg / 10;
	switch (mok)
	{
	case 10:  
		cout << "A�����Դϴ�" << endl;
		break;
	case 9:
		cout << "B�����Դϴ�" << endl;
		break;
	case 8:
		cout << "C�����Դϴ�" << endl;
		break;
	case 7:
		cout << "D�����Դϴ�" << endl;
		break;
	case 6:
		cout << "E�����Դϴ�" << endl;
		break;
	default:
		cout << "F�����Դϴ�" << endl;
		break;
	}*/

	int a, b;
	char op;
	cout << "�� ���� �Է��ϼ���.";
	cin >> a >> b;
	cout << "�����ڸ� �Է��ϼ���(+,-,*,/,%)" << endl;
	cin >> op;
	switch (op)
	{
	case '+':
		cout << "�μ��� ���� " << a + b << "�Դϴ�." << endl;
		break;
	case '-':
		cout << "�μ��� ���� " << a - b << "�Դϴ�." << endl;
		break;
	case '*':
		cout << "�μ��� ���� " << a * b << "�Դϴ�." << endl;
		break;
	case '/':
		cout << "�μ��� ������� " << a / b << "�Դϴ�." << endl;
		break;
	case '%':
		cout << "�μ��� �������� " << a % b << "�Դϴ�." << endl;
		break;
	default:
		cout << "���� Ȥ�� �����ڸ� �Է����ּ���" << endl;
		break;
	}
}