#include <iostream>
#include <cstring> 
#include <iomanip>

using namespace std;

class Student {
	private :
		string hakbun;   // 학번 
		char name[20];   // 이름 
		int c;           // c점수 
		int cpp;         // C++점수 
		int web;         // Web점수 
	public :
		Student(string num, char *n , int c1 , int cpp1 , int web1 );	// 매개변수가 있는 생성자 
		void showData(); // 멤버함수 
}; 

Student::Student(string num , char *n , int c1 , int cpp1 , int web1 ){  // n은 pointer 
	hakbun = num ; 
	strcpy(name   , n );
	c = c1;
	cpp = cpp1;
	web = web1;
}

void Student::showData(){
	cout << "학번 : " << hakbun << endl;
	cout << "이름 : " << name   << endl; 
	cout << "c    : " << c      << endl;
	cout << "cpp  : " << cpp    << endl;
	cout << "web  : " << web    << endl;
}

int main(){
	Student	kang = Student("2020036620","강진남",88,88,97); // 객체 생성시 매개 변수정보를 넘김 
	kang.showData(); // 멈버함수 showData를 넘김 
	cout << "====================================================="<< endl;
	Student	kim("2020036620","김진남",88,88,97); // 객체 생성시 매개 변수정보를 넘김 
	kim.showData(); // 멈버함수 showData를 넘김  
	 
	return 0;
}


