#include <iostream>
using namespace std;

void data();  // 함수의 원형 
int x = 7;
 
int main(){
	x = 3;
	cout << "main 함수 내의 전역변수 x = "<< x << endl;
	
	data();
	cout << "main 함수 내의 전역변수 x = "<< x << endl;
	
	return 0;
}

void data(){
	int x = 567;  // 지역변수 x선언
	//지역변수와 전역변수가 같은 이름일 경우 지역변수가 해당 지역 내에서 우선적용된다. 
	
	cout << " 호출된 data()함수 내의 지역변수 x ="<< x << endl;
	x = 100; 
}
