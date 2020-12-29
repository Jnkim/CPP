#include <iostream> 
using namespace std;

// main 함수보다  max 함수가 우선되면 함수의 시그니처선언을 하지 않아도 된다. 
// int max(int , int );  

int max(int a , int b){  // 함수의 정의 , a 와 b는 가인수
	return a > b ? a : b;   
}

int main(){
	int ret = max(3, 5);
	cout << "최대값 : "<< ret << endl; // 함수호출 3,5 는 실인수 
	
	return 0;
}
