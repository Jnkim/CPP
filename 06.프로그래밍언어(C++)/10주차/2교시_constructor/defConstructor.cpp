#include <iostream>
#include <cstring> 

using namespace std;


class Student { 
	private :
		char hakbun[11]; // �й�(���� �Էµ� �й� ���̺��� 1byte�� �÷��� ���๮�ڱ��� �Է� ������ �ִ�. 
		char name[20];   // �̸� 
		int c;           // c���� 
		int cpp;         // C++���� 
		int web;         // Web���� 
	public : 
		Student();  // �⺻ ������ , ������ �̸��� Ŭ���� �̸��� ����.
		void showData(); // ����Լ�	
};

Student::Student(){
	strcpy( hakbun , "2020036620"); // "2020036620\n"�� �Է� ������ �ְ� 11�ڸ��� ���� �Ұ�.. 
	strcpy( name   , "������");
	c = 88;
	cpp = 99;
	web = 95;
}

void Student::showData(){
	cout << "�й� : " << hakbun << endl;
	cout << "�̸� : " << name   << endl; 
	cout << "c    : " << c      << endl;
	cout << "cpp  : " << cpp    << endl;
	cout << "web  : " << web    << endl;
}

int main(){
	Student park;
	park.showData();
	
	return 0;
}
