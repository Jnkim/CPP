#include <iostream>
#include <cstring>
using namespace std;

struct Student{
	char hakbun[10]; // �й� 
	char name[20];  // �̸� 
	int c;     // C���� ���� 
	int cpp;   // C++�������� 
	int web;   // Web �������� 
};

int main(){
	struct Student park;
	strcpy( park.hakbun , "2020620038");  // MS ���־� ��Ʃ������� ����ϴ� ���  strcpy_s()�� ����ؾ� �Ѵ�. 
	strcpy( park.name   , "������");
	park.c = 88;
	park.cpp = 99;
	park.web = 95; 
	
	cout << "�й� : "<< park.hakbun << endl; 
	cout << "�̸� : "<< park.name << endl;
	cout << "C    : "<< park.c << endl;
	cout << "C++  : "<< park.cpp << endl;
	cout << "WEB  : "<< park.web << endl;
	
	return 0;
}
