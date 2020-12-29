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
	
	struct Student student[] = { 
	        {"2020620038" , "김진남" , 88 , 99 , 95 }
	       ,{"2020620039" , "박진남" , 89 , 98 , 96 }
	       ,{"2020620040" , "최진남" , 90 , 97 , 97 }
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
