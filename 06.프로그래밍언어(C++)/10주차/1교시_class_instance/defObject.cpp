#include <iostream>
#include <cstring>

using namespace std;

class Student { 
	public :
		char hakbun[10];
		char name[20];
		int c;
		int cpp;
		int web;
		void showData();
		
};

void Student::showData(){
	cout << "�й� : " << hakbun << endl;
	cout << "�̸� : " << name   << endl; 
	cout << "c    : " << c      << endl;
	cout << "cpp  : " << cpp    << endl;
	cout << "web  : " << web    << endl;
}

int main(){
	Student park;
	strcpy(park.hakbun , "2020038620");
	strcpy(park.name   , "�ڱ浿"); 
	park.c = 88;
	park.cpp = 99;
	park.web = 95;
	park.showData();
	
	return 0;
}

