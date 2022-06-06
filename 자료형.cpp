#include <iostream>
#include <climits>
using namespace std;


int main() {
	// 정수형 : 소수부가 없는 수
	// 음의 정수, 0, 양의 정수
	// 저장가능 크기 short < int < int < long < long long
	

	// INT_MAX: int가 담을수 있는 최대값, SHRT_MAX: short가 담을수 있는 최대값, LONG_MAX: long이 담을수 있는 최대값, LLONG_MAX: long long이 담을수 있는 최대값
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int는 " << sizeof n_int << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_int << " 이다." << endl; // 이 바이트의 최대값은 21471483647

	cout << "short은 " << sizeof n_short << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_short << " 이다." << endl; // 이 바이트의 최대값은 32767

	cout << "long은 " << sizeof n_long << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_long << " 이다." << endl; // 이 바이트의 최대값은 2147483647

	cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_llong << " 이다." << endl; // 이 바이트의 최대값은 9223372036854775807 ㄷㄷ;


	// 실수형 : 소수가 있는 수

	float a = 3.141592;
	int b = 3.14; // float은 실수형 이지만 int는 그렇지 않기 때문에 3.14에서 소숫점이 버려진후(3) 3이 출력된다
	return 0;
}
