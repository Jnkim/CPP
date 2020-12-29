#include <iostream>
#include <cstring> 

using namespace std;


class Student { 
	private :
		char hakbun[11]; // 학번(실제 입력될 학번 길이보다 1byte더 늘려야 개행문자까지 입력 받을수 있다. 
		char name[20];   // 이름 
		int c;           // c점수 
		int cpp;         // C++점수 
		int web;         // Web점수 
	public : 
		Student();  // 기본 생성자 , 생성자 이름은 클래스 이름과 같다.
		void showData(); // 멤버함수	
};

Student::Student(){
	strcpy( hakbun , "2020036620"); // "2020036620\n"을 입력 받을수 있게 11자리로 선언 할것.. 
	strcpy( name   , "김진남");
	c = 88;
	cpp = 99;
	web = 95;
}

void Student::showData(){
	cout << "학번 : " << hakbun << endl;
	cout << "이름 : " << name   << endl; 
	cout << "c    : " << c      << endl;
	cout << "cpp  : " << cpp    << endl;
	cout << "web  : " << web    << endl;
}

int main(){
	Student park;
	park.showData();
	
	return 0;
}
