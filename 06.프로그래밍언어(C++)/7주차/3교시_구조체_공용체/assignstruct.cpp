#include <iostream> 
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
	struct Student park  = {"2020620038" , "������" , 88 , 99 , 95 }; 
    struct Student kim;  
    
    kim = park;
    
    cout << setw(11) << kim.hakbun; 
	cout << setw(8) << kim.name;
	cout << setw(6) << kim.c;
	cout << setw(6) << kim.cpp;
	cout << setw(6) << kim.web << endl;
    
	return 0;
}
