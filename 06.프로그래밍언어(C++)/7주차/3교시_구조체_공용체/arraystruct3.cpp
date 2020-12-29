#include <iostream> 
#include <iomanip>
#include <cstring>
using namespace std;

void chongedata ( struct Student st); // 값전달 형식은 추천하지 않음 


struct Student{
	char hakbun[11]; // 학번 
	char name[20];  // 이름 
	int c;     // C교과 점수 
	int cpp;   // C++교과점수 
	int web;   // Web 교과점수 
};

int main(){
	
	struct Student lee  = {"2020620038" , "이순신" , 88 , 99 , 95 }; 
	struct Student *pt;  // 구조체 포인터 
     
    pt = &lee;
    chongedata(lee);  
    chongedata(*pt); 
	//chongedata(lee);
	  
	return 0;
}

void chongedata ( struct Student st){
	
	//strcpy(st.name , "이기자" );
	  
	cout << setw(11) << st.hakbun; 
	cout << setw(8) << st.name;
	cout << setw(6) << st.c;
	cout << setw(6) << st.cpp;
	cout << setw(6) << st.web << endl;
	strcpy(st.name , "이기자" );   
	st.cpp = 100;
}
