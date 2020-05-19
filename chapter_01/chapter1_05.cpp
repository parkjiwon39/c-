#include <iostream>

using namespace std;

void main()
{
	////짝수
	//int n;
	//cout << "숫자를 입력하세요 : ";
	//cin >> n;
	//if (n % 2 == 0)
	//cout << n << "은 짝수입니다." << endl;
	//else
	//	cout << n << "은 홀수입니다." << endl;

	////10의 배수
	//int dat;
	//cout << "숫자를 입력하세요 : ";
	//cin >> dat;
	//if (dat % 10 == 0)
	//cout << dat << "은 10의 배수입니다." << endl;
	//else
	//	cout << dat << "은 10의 배수가 아닙니다." << endl;

	//int a;
	//cout << "숫자를 입력하세요 : ";
	//cin >> a;
	//if (a > 10)
	//	cout << a << "은 10보다 큰 수 입니다." << endl;
	//else
	//	cout << a << "은 10보다 작은 수 입니다." << endl;

	/*int num1, num2;
	cout << "첫번째 수를 입력 : ";
	cin >> num1;
	cout << "두번째 수를 입력 : ";
	cin >> num2;
	cout << "두 수의 비교 분석 결과는 : ";

	if (num1 >= num2)
	{
		if (num1 == num2)
			cout << num1 << "과 " << num2 << " 은(는) 같은 수 입니다.";
		else
			cout << num1 << "은(는) " << num2 << " 보다 큰 수 입니다.";
	}
	else
		cout << num1 << "은(는) " << num2 << " 보다 작은 수 입니다.";*/
	/*int a;
	cout << "숫자를 입력하세요 : ";
	cin >> a;
	if (a % 5 >= 0)
	{
		if (a % 5 == 0)
			cout << a << " 은(는) 5의 배수입니다.";
		else
			cout << a << " 는(이) 5의 배수가 되기 위해서 "<< 5 - a%5 << " 필요!" <<endl;
	}
	int num1, num2;
	cout << "분석할 숫자를 입력 : ";
	cin >> num1;
	cout << "배수 숫자를 입력 : ";
	cin >> num2;
	if (num1%num2 == 0)
		cout << "숫자 " << num1 << " 은" << num2 << "의 배수입니다. " << endl;
	else
		cout << num1 << " 는(이)" << num1 << " 의 배수가 되기 위해서 " << num1 - num1 % num2 << endl;
	int num1, num2, d;
	cout << "분석할 숫자를 입력 : ";
	cin >> num1;
	num2 = 5 - (num1 % 5);
	d = num1 % 5;
	if (num1%num2 == 0)
		cout << "숫자 " << num1 << " 은" << num2 << "의 배수입니다." << endl;
	else
	{
		cout << num1 << " 의 배수가 되기 위해서 " << num2 << " 필요!" << endl;
		cout << num1 << " 의 배수가 되기 위해서 " << d << " 만큼 버려야 합니다!" << endl;
	}*/

	/*int num, num2, num3;
	cout << "숫자를 입력하세요 : ";
	cin >> num;
	num2 = 5 - (num % 5);
	num3 = num % 5;

	if (num % 5 == 0) {
		cout << "5의 배수입니다.";
	}
	else {
		cout << num << "는(이) 5의 배수가 되려면" << num2 << " 만큼 필요!!"<< endl;
		cout << " 또는" << num3 << " 만큼 버려야 합니다!!" << endl;
	}*/

	//char ch;
	//cout << "문자를 입력하세요 : ";
	//cin >> ch;
	//if (ch >= 'A' && ch <= 'Z')//65에서94사이
	//	cout << "Upper case" << endl;
	//else if (ch >= 'a' && ch <= 'z')
	//	cout << "Lower case" << endl;
	//else
	//	cout << "No Good" << endl;

	int kor, eng, tot;
	double avg;
	cout << "국어 점수 : ";
	cin >> kor;
	cout << "영어 점수 : ";
	cin >> eng;
	tot = kor + eng;
	avg = tot / 2.0;
	if (avg >= 90 && avg <= 100)
		cout << "수" << endl;
	else if (avg >= 80 && avg < 90)
		cout << "우" << endl;
	else
		cout << "미" << endl;

}