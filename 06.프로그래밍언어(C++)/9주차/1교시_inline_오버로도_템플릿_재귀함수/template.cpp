#include <iostream> 
using namespace std;

/*  템플릿 함수란... 
	사용하는 데이터 타입에 맞게 함수의 리턴 타입이나 , 가인수의 데이터 타입이 자동적으로 바뀌도록 정의된 함수 
*/

template <class T>
T square(T x);

int main(){
	cout << "square( int ) 11 call  "<< endl;
	int ir = square(8);
	
	
	cout << "square( double ) 11 call  "<< endl;
	double dr = square(6.5);
	
	cout << "square(8) = " << ir << endl;
	cout << "square(6.5) = " << dr << endl;
}

template <class T> 
T square (T x){
	cout << "template square(class T) :  T = "<< x << endl;
	return x * x;
}

