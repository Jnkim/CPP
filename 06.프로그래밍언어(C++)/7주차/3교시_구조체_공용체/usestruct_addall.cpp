#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct Student{
	char hakbun[11]; // �й� 
	char name[20];  // �̸� 
	int c;     // C���� ���� 
	int cpp;   // C++�������� 
	int web;   // Web �������� 
};

int main(){
	struct Student kim  = {"2020620038" , "������" , 88 , 99 , 95 }; 
	struct Student park = {"2020620039" , "������" , 87 , 98 , 94 }; 
	//cout << "�й� |  �̸�  |  C  || C++  || Web || \n "; 
	cout << setw(11) << kim.hakbun; 
	cout << setw(8) << kim.name;
	cout << setw(6) << kim.c;
	cout << setw(6) << kim.cpp;
	cout << setw(6) << kim.web << endl;
	
	cout << setw(11) << park.hakbun; 
	cout << setw(8) << park.name;
	cout << setw(6) << park.c;
	cout << setw(6) << park.cpp;
	cout << setw(6) << park.web << endl;  
	return 0;
}
