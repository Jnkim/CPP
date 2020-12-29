#include <iostream> 
#include <iomanip>
#include <cstring>
using namespace std;

void chongedata ( struct Student *pst); // 값전달 형식은 추천하지 않음 


struct Student{
	char hakbun[11]; // 학번 
	char name[20];  // 이름 
	int c;     // C교과 점수 
	int cpp;   // C++교과점수 
	int web;   // Web 교과점수 
};

int main(){
	
	struct Student lee  = {"2020620038" , "이순신" , 88 , 99 , 95 }; 
	struct Student *pst;  // 구조체 포인터 
     
    pst = &lee;
    chongedata(&lee);  
    chongedata(&lee);
    chongedata(pst); 
	//chongedata(lee);
	  
	return 0;
}

void chongedata ( struct Student *pst){
	
	//strcpy(st.name , "이기자" );
	  
	cout << setw(11) << pst->hakbun; 
	cout << setw(8) << pst->name;
	cout << setw(6) << pst->c;
	cout << setw(6) << pst->cpp;
	cout << setw(6) << pst->web << endl;
	strcpy(pst->name , "이기자" );   
	pst->cpp = 100;
}
