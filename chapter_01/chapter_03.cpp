#include <stdio.h>	// C 언어의 표준 입출력
#include <iostream>	// C++ 언어의 표준 입출력
#include <iomanip>  // 입출력 기본 form
#include <conio.h>
#include <string>	// 문자열
#include <sstream>	// 클래스형 객체를 만듦.

using namespace std;	// 매크로 


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
//	// C 출력
//	printf("********************* c 언어 출력 함수 **********************");
//	printf("	name	kor	eng	mat	tot	avg\n");
//	printf("%8s %4d %4d %4d %5d 61f\" ,name,kor,eng,mat,tot,avg);
//
//	// C 의 출력 방식
//	//std::cout << "Hello C++" <<std::endl;  // endl 끝내고 라인하나 생성 / 매크로 사용하지 않을시 실행구문 (접두어 삽입)
//	//cout << "Hello C++" << endl;	// 매크로 사용시 실행구문 (접두어 생략가능)
//
//
//
//	// C++ 출력
//	cout << endl << "******************** c++ 언어 출력 함수 **********************" << endl;
//	cout << "	name	kor	eng	mat	tot	avg\n" << endl;
//	cout << setw(10) << name << setw(4) << kor << setw(4) << eng << setw(4)		// 모두 자리수를 나타내는 숫자
//		<< mat << setw(5) << tot << setw(5)<<setprecision(3)<<avg<<endl; //setprecision (소수점 자리표현)
//}

// 2.
//void main()
//{
//	int number;
//	cout << "숫자 입력받기 : ";
//	cin >> number;
//	cout << "출력 : " << number << endl;
//
//	char dan[15];
//	cout << "문자 입력받기 :";
//	cin >> dan;
//	cout << "출력 :" << dan << endl;
//	cout << "멈추려면 0을 누르세요! ";
//	_getch();		//include <conio.h> 추가
//	cout << endl;
//
//
//
//
//}

// 3.  
//#include <string>		// 문자열
//#include <sstream>    // 클래스형 객체를 만듦.
//추가

//int main()
//{
//	int n;
//	stringstream siba; // sstream 이 끌고오는 클래스. 
//	siba.str("12 345 6789 0 -12 뭔 개소리야");
//
//	//안따라적으셔도되는데 왜하냐
//	for (int i = 0; i < 5; i++) {
//	siba >> n;		// int로 형변환 없이도 찍어주는 아주 편리한 친구ㅡ
//	cout << n << endl;
//	}
//
//	return 0;
//}

// 4.
//void main()
//{
//	cout << setw(10) << "753-9510" << "|" << endl;	// 기본은 오른쪽정렬
//	cout << setiosflags(ios::left);	// 왼쪽 정렬 설정
//	cout << 3.14 << endl;
//	cout << setprecision(6);	// 소수점 포함 6자리 >> 소수점 뒤에 5자리가 찍힘.
//	cout << setw(10) << setiosflags(ios::showpoint) << 3.14 << endl;	// 소수점에 비어있는 공백은 0으로 채워줌.(showpoint)
//	cout << resetiosflags(ios::left);	// 왼쪽 정렬 해제
//	cout << setw(10) << "World" << "|" << endl;
//	cout << setiosflags(ios::left) << setw(10) << "World" << "|" << endl;	// 왼쪽 정렬 설정
//	
//
//}


// 5.
//void main()
//{
//	char Name[15];
//	char address[20];
//	cout << "이름을 입력하세요 : ";
//	cin.get(Name, 15);
//	cin.ignore();// 주석처리시 오류(enter를 무시하여 연속 입력이
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
	printf("두 값을 입력하세요 : ");
	scanf_s("%d,%d", &a, &b);
	c = a > b;
	printf("C결과 : %d\n", c);
	printf("a>b결과 : %d\n", a > b);
	a++;
	printf("a와 b가 같다 : %d\n", a == b);
	printf("a와 b가 같지 않다 : %d\n", a != b);*/

	int a = 3, b = 2, c;
	c = a == ++b;
	printf("결과 : %d\n", (a == b) && (--b == c));
	printf("결과 : %d\n", (a != b) || (b == c));
	printf("결과 : %d\n", !((a != b) || (b == c)));
}