#include <iostream>
using namespace std;
#include <iomanip>

int main(){
	
	double d = 357.89321;
	cout.setf(ios::fixed, ios::floatfield); // �ε��Ҽ��� ǥ��
	cout.precision(3); // �Ҽ��� ���� ǥ���� �ڸ��� ����
	
	cout << d << endl;
	
	return 0; 
	
}
