#include <iostream>

using namespace std;
void main()
{
	/*int a, b;
	cout << "첫번째 숫자를 입력하세요 : ";
	cin >> a;
	cout << "두번째 숫자를 입력하세요 : ";
	cin >> b;
	cout << "a = " << a << "b = " << b << endl;
	cout << "Large Number = ";
	a > b ? cout << a << "이(가) 더 크다" << endl : cout << b << "이(가) 더 크다" << endl;*/

	/*int i, j, k, MAX, MIN;
	cout << "숫자 3개를 입력하세요 : ";
	cin >> i >> j >> k;
	cout << "MAX = ";
	i > j ? cout << i << "이(가) 가장크다" << endl : cout << j << "이(가) 가장크다" << endl;
	j > k ? cout << i << "이(가) 가장크다" << endl : cout << k << "이(가) 가장크다" << endl;
	cout << "MIN = ";
	i < j ? cout << i << "이(가) 가장 작다" << endl : cout << j << "이(가) 가장 작다" << endl;
	j < k ? cout << j << "이(가) 가장 작다" << endl : cout << k << "이(가) 가장 작다" << endl;*/

	/*int i, j, k, MAX, MIN;
	cout << "숫자 3개를 입력하세요 : ";
	cin >> i >> j >> k;
	MAX = (i > j) ? ((i > k) ? i : k) : ((j > k) ? j : k);
	MIN = (i < j) ? ((i < k) ? i : k) : ((j < k) ? j : k);
	cout << "MAX= " << MAX << endl;
	cout << "MIN= " << MIN << endl;*/

	int n, n1, n2, n3, n4, n5, n6, n7;
	cout << "다섯자리 수를 입력하세요 : ";
	cin >> n;
	cout << n << "은" << endl;
	n1 = n / 10000;
	/*printf("만원짜리 : %d\n개", n1);*/
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
	cout << "만원짜리 : " << n1 << "개" << endl;
	cout << "오천원짜리 : " << n2 << "개" << endl;
	cout << "천원짜리 : " << n3 << "개" << endl;
	cout << "오백원짜리 : " << n4 << "개" << endl;
	cout << "백원 : " << n5 << "개" << endl;
	cout << "오십원 : " << n6 << "개" << endl;
	cout << "십원 : " << n7 << "개" << endl;
	
}