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
	
	struct Student lee  = {"2020620038" , "�̼���" , 88 , 99 , 95 }; 
	struct Student *pt;  // ����ü ������ 
     
    pt = &lee; 
    
    cout << setw(11) << pt->hakbun; // ����ü �������� ������� ���� ����� "-> " ���� �����Ѵ�. 
	cout << setw(8)  << pt->name;
	cout << setw(6)  << pt->c;
	cout << setw(6)  << pt->cpp;
	cout << setw(6)  << pt->web << endl;	 
    
	return 0;
}
