#include <iostream>
using namespace std;

// inline �Լ� - �Լ��� ���� ������ ���� �Լ��� �����Ѵ�. 
inline int calc(int x){ 
	return 2 * x;
}

int main(){
	int x = 5 , y = 7;
	cout << "2 * " << x << " = " << calc(x) << endl; 
	cout << "2 * " << y << " = " << calc(y) << endl;
	return 0;
}
