#include <iostream>
using namespace std;

int add (int x , int y);

int main(){
	
	int (*fp)(int x , int y);  // 함수 포인터 변수 선언 
	int a = 3 , b = 7 , rtnVal;
	fp = add;              // 함수명을 함수 포인터 변수에 저장 
	rtnVal = fp(a , b);    // 함수 포인터 변수를 함수를 호 
	cout << "3 + 7 = "<< rtnVal << endl;
	return 0;
}

int add (int x , int y){
	return x + y;출 
}
