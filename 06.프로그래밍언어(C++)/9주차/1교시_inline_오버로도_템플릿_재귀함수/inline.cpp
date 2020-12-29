#include <iostream>
using namespace std;

// inline 함수 - 함수의 원형 사용없이 직접 함수를 정의한다. 
inline int calc(int x){ 
	return 2 * x;
}

int main(){
	int x = 5 , y = 7;
	cout << "2 * " << x << " = " << calc(x) << endl; 
	cout << "2 * " << y << " = " << calc(y) << endl;
	return 0;
}
