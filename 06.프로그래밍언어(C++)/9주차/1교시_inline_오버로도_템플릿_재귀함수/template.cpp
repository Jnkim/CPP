#include <iostream> 
using namespace std;

/*  ���ø� �Լ���... 
	����ϴ� ������ Ÿ�Կ� �°� �Լ��� ���� Ÿ���̳� , ���μ��� ������ Ÿ���� �ڵ������� �ٲ�� ���ǵ� �Լ� 
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

