#include <iostream>
using namespace std;

//int add(int x, int y); // 함수의 원형 선언 ( 함수의 시그니처 )
//int add(int a, int b); // 함수의 원형 선언 ( 함수의 시그니처: 변수명이 실제와 달라도 된다.)
int add(int , int ); // 함수의 원형 선언 ( 함수의 시그니처 : 변수명을 생략해도 된다. )
 

int main(){
	int a = 3, b = 7 , dap;
	dap = add(a , b); // 함수호출 , a와 b는 "실인수" 	
	cout << "3 + 7 = "<< dap << endl;
	return 0;
}

int add(int x , int y){ // 함수정의 , x와 y는 "가인수" 
	int result = x + y;
	return result; 
}

