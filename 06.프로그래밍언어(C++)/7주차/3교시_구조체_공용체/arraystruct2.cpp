#include <iostream> 
#include <iomanip>

using namespace std;

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
    
    cout << setw(11) << pt->hakbun; // 구조체 포인터의 멤버변수 참조 방법은 "-> " 으로 접근한다. 
	cout << setw(8)  << pt->name;
	cout << setw(6)  << pt->c;
	cout << setw(6)  << pt->cpp;
	cout << setw(6)  << pt->web << endl;	 
    
	return 0;
}
