#include <iostream> 
#include <iomanip>
#include <cstring>
using namespace std;

void chongedata ( struct Student *pst); // ������ ������ ��õ���� ���� 


struct Student{
	char hakbun[11]; // �й� 
	char name[20];  // �̸� 
	int c;     // C���� ���� 
	int cpp;   // C++�������� 
	int web;   // Web �������� 
};

int main(){
	
	struct Student lee  = {"2020620038" , "�̼���" , 88 , 99 , 95 }; 
	struct Student *pst;  // ����ü ������ 
     
    pst = &lee;
    chongedata(&lee);  
    chongedata(&lee);
    chongedata(pst); 
	//chongedata(lee);
	  
	return 0;
}

void chongedata ( struct Student *pst){
	
	//strcpy(st.name , "�̱���" );
	  
	cout << setw(11) << pst->hakbun; 
	cout << setw(8) << pst->name;
	cout << setw(6) << pst->c;
	cout << setw(6) << pst->cpp;
	cout << setw(6) << pst->web << endl;
	strcpy(pst->name , "�̱���" );   
	pst->cpp = 100;
}
