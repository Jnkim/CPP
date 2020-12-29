#include <iostream>
using namespace std;

int add (int x , int y); 
int mult (int x , int y);
void fn( int (*fp)(int x , int y)); // 함수 원형을 선언하고 매개 변수는 함수포인터 변수이다.

int main(){
	
	fn(add); // add()함수를 호출하여 실행한다.  
	//cout << "&add = "<< &add << endl;
	
	fn(mult); // mult()함수를 호출하여 실행한다.  
	//cout << "&mult = "<< &mult << endl;
	return 0;
} 

void fn( int (*fp)(int x , int y)){
	int a = 3 , b = 7 , rtnVal;
	rtnVal = fp(a , b) ;
	//cout << "&fp = "<< &fp << endl;
	cout << "결과 = "<< rtnVal << endl;
}

int add(int x , int y){
	return x + y;
}

int mult(int x , int y){
	return x * y;
}
