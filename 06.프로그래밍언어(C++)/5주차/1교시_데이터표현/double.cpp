#include <iostream>
using namespace std;
#include <iomanip>

int main(){
	
	double d = 357.89321;
	cout.setf(ios::fixed, ios::floatfield); // 부동소수점 표기
	cout.precision(3); // 소수점 이하 표시할 자리수 고정
	
	cout << d << endl;
	
	return 0; 
	
}
