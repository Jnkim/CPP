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
	
	struct Student student[] = { 
	        {"2020620038" , "������" , 88 , 99 , 95 }
	       ,{"2020620039" , "������" , 89 , 98 , 96 }
	       ,{"2020620040" , "������" , 90 , 97 , 97 }
	};
	
	for( int i = 0 ; i < 3; i++ ){ 
		cout << setw(11) << student[i].hakbun; 
		cout << setw(8) << student[i].name;
		cout << setw(6) << student[i].c;
		cout << setw(6) << student[i].cpp;
		cout << setw(6) << student[i].web << endl;	 
	}; 
    
    
    
	return 0;
}
