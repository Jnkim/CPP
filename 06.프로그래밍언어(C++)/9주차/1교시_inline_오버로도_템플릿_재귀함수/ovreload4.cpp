#include <iostream>
using namespace std;

/* �Լ��� �̸�(square)�� ������ , ���ڰ��� ����(int or double)�� �ٸ������� �Լ����� overload�� �Ѵ�. 
   ��ȯ�� Data Type �� , ���μ��� ���� overload�� üũ ����� �ƴϴ�.  
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

