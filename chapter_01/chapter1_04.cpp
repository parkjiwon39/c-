#include <iostream>

using namespace std;
void main()
{
	/*int a, b;
	cout << "ù��° ���ڸ� �Է��ϼ��� : ";
	cin >> a;
	cout << "�ι�° ���ڸ� �Է��ϼ��� : ";
	cin >> b;
	cout << "a = " << a << "b = " << b << endl;
	cout << "Large Number = ";
	a > b ? cout << a << "��(��) �� ũ��" << endl : cout << b << "��(��) �� ũ��" << endl;*/

	/*int i, j, k, MAX, MIN;
	cout << "���� 3���� �Է��ϼ��� : ";
	cin >> i >> j >> k;
	cout << "MAX = ";
	i > j ? cout << i << "��(��) ����ũ��" << endl : cout << j << "��(��) ����ũ��" << endl;
	j > k ? cout << i << "��(��) ����ũ��" << endl : cout << k << "��(��) ����ũ��" << endl;
	cout << "MIN = ";
	i < j ? cout << i << "��(��) ���� �۴�" << endl : cout << j << "��(��) ���� �۴�" << endl;
	j < k ? cout << j << "��(��) ���� �۴�" << endl : cout << k << "��(��) ���� �۴�" << endl;*/

	/*int i, j, k, MAX, MIN;
	cout << "���� 3���� �Է��ϼ��� : ";
	cin >> i >> j >> k;
	MAX = (i > j) ? ((i > k) ? i : k) : ((j > k) ? j : k);
	MIN = (i < j) ? ((i < k) ? i : k) : ((j < k) ? j : k);
	cout << "MAX= " << MAX << endl;
	cout << "MIN= " << MIN << endl;*/

	int n, n1, n2, n3, n4, n5, n6, n7;
	cout << "�ټ��ڸ� ���� �Է��ϼ��� : ";
	cin >> n;
	cout << n << "��" << endl;
	n1 = n / 10000;
	/*printf("����¥�� : %d\n��", n1);*/
	n = n - n1 * 10000;
	n2 = n / 5000;
	n = n - n2 * 5000;
	n3 = n / 1000;
	n = n - n3 * 1000;
	n4 = n / 500;
	n = n - n4 * 500;
	n5 = n / 100;
	n = n - n5 * 100;
	n6 = n / 50;
	n = n - n6 * 50;
	n7 = n / 10;
	n = n - n7 * 10;
	cout << "����¥�� : " << n1 << "��" << endl;
	cout << "��õ��¥�� : " << n2 << "��" << endl;
	cout << "õ��¥�� : " << n3 << "��" << endl;
	cout << "�����¥�� : " << n4 << "��" << endl;
	cout << "��� : " << n5 << "��" << endl;
	cout << "���ʿ� : " << n6 << "��" << endl;
	cout << "�ʿ� : " << n7 << "��" << endl;
	
}