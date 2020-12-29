#include <iostream> 
using namespace std;

int x = 100; // 전역변수 "x"

int main(){ 
	cout << " main 함수 내의 전역변수 x = "<< x << endl;
	x = 200;  // 전역변수 "x"의 값을 변경
	cout << "x = "<< x << endl; 
	return 0; 
} 
