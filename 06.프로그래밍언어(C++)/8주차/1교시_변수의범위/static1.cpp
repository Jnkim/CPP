#include <iostream> 
using namespace std;


/* 함수외부 에서 사용한 static  */

void data();  
static int x = 7;   // 전역변수 "X" 
// static int x;   // 전역변수 "X"   기본값 = 0 

int main(){ 
	cout << " main 함수 내의 x = "<< x <<endl;
	data();
	
	cout<<"data 함수 호출후 x ="<<x<<endl; 
	  
	return 0;
}

void data(){ 
	x = 100;  // 정적(static) 전역변수 "X"  
	cout << "호출된 data함수의 x = "<< x << endl;
	x = 200;  // 정적(static) 전역변수 "X"   
}
