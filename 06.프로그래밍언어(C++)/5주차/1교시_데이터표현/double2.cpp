#include <iostream>
using namespace std;
#include <iomanip>

int main(){
	
	double d = 1234.56789;
	cout << d<< endl; // �߸��� ��� ��� , 1234.57�� �ݿø��� ���� ��� 
	
	
	//cout << setw(15) << setiosflags(ios::scientific) << d << endl; //�������·� ǥ���ϱ� 
	cout << setiosflags(ios::scientific) << d << endl; //�������·� ǥ���ϱ� 
	
	
	cout.setf(ios_base::fixed , ios_base::floatfield); // �ε� �Ҽ��� �Ǽ��� �����Ҽ��� �ڸ� ���� ������ ���·� ǥ���ϱ� 
	cout.precision(5); // �Ҽ��� ���� ǥ���� �ڸ��� ����	
	cout << d << endl;
	
	return 0; 
	
}
