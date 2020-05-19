// chapter_01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>  // C++ 기본 입출력
#include <stdio.h>	/* C 기본 입출력 */

// 단축키
/* 콘솔 실행 : ctrl + F5
   주석달기 : ctrl + K + C
   주석해지 : ctrl + K + U */

/*	%d : 정수형 출력
	%c : 문자형 출력
	\n : 들여쓰기
	%f : 실수형

	*/

//int main()
//{
//    std::cout << "Hello World!\n";
//}



//void main()
//{
//	char m, n;
//	m = 'b';
//	n = 'e';
//	printf("%c\n", m);
//	printf("%c\n", n);
//}


//
void main()
{
	//char H,S;
	//H = 65;
	//S = 97;
	//printf("%c\n", H);
	//printf("%c\n", S);
	//H = 'z';
	//S = 'Z';
	//printf("%c\n", H);
	//printf("%c\n", S);


	//float S, W;
	//S = 32.4;
	//W = 213748565.5;
	//printf("%f\n%f\n", S, W);

	//float circum, area;
	//const float PI = 3.141592;   // 상수값
	//float radius = 25;
	//area = PI * radius*radius;
	//circum = 2 * PI*radius;
	//printf("Area of circle is %f\n", area);
	//printf("Circum of curcle is %f\n", circum);


	//int i, j; 
	//float k; 
	//char ch;
	//i = 100;
	//j = 200;
	//k = 12.345;
	//ch = 'A';
	//printf("%d %d\n", i, i + j);
	//printf("%f\n". k);
	//printf("%c %d\n",ch, ch);

	//char k, b, s;
	//k = 'k';
	//b = 66;
	//s = 's';
	//printf("%c, %c,%c\n", k, b, s);
	//printf("%d, %d,%d\n", k, b, s);

	//printf("%15f=n", 3.141592);		 // 앞에 5자리 띄우고 출력
	//printf("%-15f\n", 3.141592);	 // 앞에 출력후 남은자리만큼 빈칸
	//printf("%15.3f\n", 3.141592);	 // 15자리 출력 소수점(#.3) 3째 자리까지만 출력

	//char ch = 'A';
	//printf("character = %c, ASCII = %d\n\n", ch, ch);
	//printf("%12d\n", 123456789);
	//printf("%-3d%-3d%-3d\n", 12, 34, 56);
	//printf("%3d%3d\n", 12, 34);
	//printf("%03d%3d\n", 3, 160);	// 앞자리를(빈칸) 0으로 패딩 
	//printf("the " "end \n");
/*
	int java, c, tot;

	/// scanf_s = double(lf), foart = f, int = d 문자열 = s  ///

	printf("java : ");
	scanf_s("%d", &java);
	*/
	//const int java=70, c=10, tot=50;	// 변수 <> 상수(const)
	//printf("JAVA : ");
	//scanf_s("%d", &java);		// 표준 입력 & : 메모리에 접근

	/*int java, c, tot;
	printf("java : ");
	scanf_s("%d", &java);		
	printf("C : ");
	scanf_s("%d", &c);
	tot = java + c;
	printf("총점은 %d 입니다\n", tot);*/

	//int width, height;
	//float total;
	//printf("사각형의 가로, 세로 길이를 입력하세요 : ");
	//scanf_s("%d", &width);
	//scanf_s("%d", &height);
	//scanf_s("%d %d", &width, &height);
	//total = width * height;
	////printf("사각형의 %d 넓이 : " "%d -2f",total);
	//printf("사각형의 넓이 : %.2f\n", total);

	//int width, height;
	//float area;
	//printf("사각형의 가로, 세로 길이를 입력하세요 : ");
	//scanf_s("%d %d", &width, &height);
	//area = width * height;
	//printf("사각형의 넓이 = %.2\n", area);


	/*int width, height, circum, whathe;
	printf("밑변을 입력 하세요 : ");
	scanf_s("%d", &width);
	printf("높이를 입력 하세요 : ");
	scanf_s("%d", &height);
	circum: (width*height) / 2 ;
	printf("삼각형의 넓이는 : ", "%d", circum,"입니다.");
	whate: width * 3;
	printf("삼각형의 둘레는 : ", "%d",whathe , "입니다.");*/


	float mit, no, dot;		 /* 타입을 같게 맞춰줘야함. */
	double s;

	printf("밑변을 입력 하시오 : ");
	scanf_s("%f", &mit);
	printf("높이를 입력 하시오 : ");
	scanf_s("%f", &no);

	//s = (mit*no) / 2;
	/* scanf_s = double(lf), foart = f, int = d 문자열 = s */
	s = (sqrt(3) / 4) * mit
	dot = mit * 3;

	printf("정삼각형의 넓이는 %6.2f입니다.\n", s);
	printf("정삼각형의 둘레는 %d 입니다.\n", dot);

	printf("이름을 입력하세요.");
	char irum[10];
	scanf_s("%s\n", irum, sizeof(irum));
	printf("성명 : %s\n", irum);



 }




// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

