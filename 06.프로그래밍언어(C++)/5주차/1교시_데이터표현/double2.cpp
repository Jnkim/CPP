#include <iostream>
using namespace std;
#include <iomanip>

int main(){
	
	double d = 1234.56789;
	cout << d<< endl; // 잘못된 결과 출력 , 1234.57로 반올림된 수를 출력 
	
	
	//cout << setw(15) << setiosflags(ios::scientific) << d << endl; //지수형태로 표기하기 
	cout << setiosflags(ios::scientific) << d << endl; //지수형태로 표기하기 
	
	
	cout.setf(ios_base::fixed , ios_base::floatfield); // 부동 소수점 실수를 고정소수점 자리 수를 가지는 형태로 표기하기 
	cout.precision(5); // 소수점 이하 표시할 자리수 고정	
	cout << d << endl;
	
	return 0; 
	
}
