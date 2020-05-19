#include <iostream>
using namespace std;

void main() 
{
	/*int kor, eng, tot, mok;
	double avg;

	cout << "국어점수 : ";
	cin >> kor;
	cout << "영어점수 : ";
	cin >> eng;
	
	tot = kor + eng;
	avg = tot / 2.0;
	mok = avg / 10;
	switch (mok)
	{
	case 10:  
		cout << "A학점입니다" << endl;
		break;
	case 9:
		cout << "B학점입니다" << endl;
		break;
	case 8:
		cout << "C학점입니다" << endl;
		break;
	case 7:
		cout << "D학점입니다" << endl;
		break;
	case 6:
		cout << "E학점입니다" << endl;
		break;
	default:
		cout << "F학점입니다" << endl;
		break;
	}*/

	int a, b;
	char op;
	cout << "두 수를 입력하세요.";
	cin >> a >> b;
	cout << "연산자를 입력하세요(+,-,*,/,%)" << endl;
	cin >> op;
	switch (op)
	{
	case '+':
		cout << "두수의 합은 " << a + b << "입니다." << endl;
		break;
	case '-':
		cout << "두수의 차는 " << a - b << "입니다." << endl;
		break;
	case '*':
		cout << "두수의 곱은 " << a * b << "입니다." << endl;
		break;
	case '/':
		cout << "두수의 나누기는 " << a / b << "입니다." << endl;
		break;
	case '%':
		cout << "두수의 나머지는 " << a % b << "입니다." << endl;
		break;
	default:
		cout << "숫자 혹은 연산자를 입력해주세요" << endl;
		break;
	}
}