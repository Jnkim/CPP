#include <iostream> 
#include <iomanip>
#include <cstring>
using namespace std;

void chongedata ( struct Student st); // ������ ������ ��õ���� ���� 


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
    chongedata(lee);  
    chongedata(*pt); 
	//chongedata(lee);
	  
	return 0;
}

void chongedata ( struct Student st){
	
	//strcpy(st.name , "�̱���" );
	  
	cout << setw(11) << st.hakbun; 
	cout << setw(8) << st.name;
	cout << setw(6) << st.c;
	cout << setw(6) << st.cpp;
	cout << setw(6) << st.web << endl;
	strcpy(st.name , "�̱���" );   
	st.cpp = 100;
}
