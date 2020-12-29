#include <iostream>
using namespace std;

/* 함수의 이름(square)은 같으되 , 인자값의 구조(int or double)가 다른형태의 함수들을 overload라 한다. 
   반환형 Data Type 명 , 가인수의 명은 overload의 체크 대상이 아니다.  
 */

int    square(int x);
double square(double d);

int main(){
	
	cout << "square( int ) 11 call  "<< endl;
	int ir = square(8);
	
	cout << "square( double ) 11 call  "<< endl;
	double dr = square(6.5);
	
	cout << "square(8) = " << ir << endl;
	cout << "square(6.5) = " << dr << endl;
	return 0;
}

int square(int x){ 
	cout << "square( int ) 22 call  "<< endl;
	return x * x;
}

double square(double d){ 
	cout << "square( double ) 22 call  "<< endl;
	return d * d;
}

