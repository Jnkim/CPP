#include <iostream>
using namespace std;

void data();  // �Լ��� ���� 
int x = 7;
 
int main(){
	x = 3;
	cout << "main �Լ� ���� �������� x = "<< x << endl;
	
	data();
	cout << "main �Լ� ���� �������� x = "<< x << endl;
	
	return 0;
}

void data(){
	int x = 567;  // �������� x����
	//���������� ���������� ���� �̸��� ��� ���������� �ش� ���� ������ �켱����ȴ�. 
	
	cout << " ȣ��� data()�Լ� ���� �������� x ="<< x << endl;
	x = 100; 
}
