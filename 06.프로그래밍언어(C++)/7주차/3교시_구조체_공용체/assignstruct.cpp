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
	struct Student park  = {"2020620038" , "박진남" , 88 , 99 , 95 }; 
    struct Student kim;  
    
    kim = park;
    
    cout << setw(11) << kim.hakbun; 
	cout << setw(8) << kim.name;
	cout << setw(6) << kim.c;
	cout << setw(6) << kim.cpp;
	cout << setw(6) << kim.web << endl;
    
	return 0;
}
