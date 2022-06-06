#include <iostream>

using namespace std;


int main1() {
	// 컴퓨터는 문자도 아스키코드로 변환한 숫자를 사용한다
	// char : 작은(아스키코드) 문자

	int a = 77;
	char b = a; // a출력됨 (아스키코드)

	// c++에선 char형 변수 내 문자들은 '을 쑬수 있지만 "로 문자열을 감싸지는 못한다 string형 변수에서만 " 사용가능.
	// char b = "안녕하세요" char형은 한국어를 대입할수 없다(한국어는 아스키코드에 명시되있지 않기 때문)
	

	//Bool 자료형 : boll 타입의 변수는  0 과 1만 저장한다 즉, true(참), false(거짓)만 저장가능
	return 0;
}
