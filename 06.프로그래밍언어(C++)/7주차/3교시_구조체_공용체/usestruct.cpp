#include <iostream>
#include <cstring>
using namespace std;

struct Student{
	char hakbun[10]; // 학번 
	char name[20];  // 이름 
	int c;     // C교과 점수 
	int cpp;   // C++교과점수 
	int web;   // Web 교과점수 
};

int main(){
	struct Student park;
	strcpy( park.hakbun , "2020620038");  // MS 비주얼 스튜디오에서 사용하는 경우  strcpy_s()를 사용해야 한다. 
	strcpy( park.name   , "김진남");
	park.c = 88;
	park.cpp = 99;
	park.web = 95; 
	
	cout << "학번 : "<< park.hakbun << endl; 
	cout << "이름 : "<< park.name << endl;
	cout << "C    : "<< park.c << endl;
	cout << "C++  : "<< park.cpp << endl;
	cout << "WEB  : "<< park.web << endl;
	
	return 0;
}
