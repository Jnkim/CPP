#include <iostream>
using namespace std;

void data();  // �Լ��� ���� 
void data2();  // �Լ��� ���� 
  
int main(){
	int x = 0; // �������� "X"�� ���� 
	cout << "main �Լ� ���� �������� x = "<< x << "\n\n";
	
	data();
	cout << "main �Լ� ���� �������� x = "<< x << "\n\n";
	
	data2();
	cout << "main2 �Լ� ���� �������� x = "<< x << endl;
	
	return 0;
}

int x = 7; // �������� x ���� 

void data(){
  	cout << " ȣ��� data()�Լ� ���� �������� x ="<< x << endl;
	x = 200; // 
}

void data2(){
	cout << " ȣ��� data2()�Լ� ���� �������� x ="<< x << endl;
	x = 600; 
}
