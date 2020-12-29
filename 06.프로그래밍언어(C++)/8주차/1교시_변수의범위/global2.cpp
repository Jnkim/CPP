#include <iostream>
using namespace std;

void data();  // 함수의 원형 
void data2();  // 함수의 원형 
  
int main(){
	int x = 0; // 지역변수 "X"를 선언 
	cout << "main 함수 내의 전역변수 x = "<< x << "\n\n";
	
	data();
	cout << "main 함수 내의 전역변수 x = "<< x << "\n\n";
	
	data2();
	cout << "main2 함수 내의 전역변수 x = "<< x << endl;
	
	return 0;
}

int x = 7; // 전역변수 x 선언 

void data(){
  	cout << " 호출된 data()함수 내의 지역변수 x ="<< x << endl;
	x = 200; // 
}

void data2(){
	cout << " 호출된 data2()함수 내의 지역변수 x ="<< x << endl;
	x = 600; 
}
