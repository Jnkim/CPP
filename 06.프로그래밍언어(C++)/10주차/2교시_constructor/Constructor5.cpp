#include <iostream>
#include <cstring> 
#include <iomanip>

using namespace std;

class Student {
	private :
		string hakbun;   // �й� 
		char name[20];   // �̸� 
		int c;           // c���� 
		int cpp;         // C++���� 
		int web;         // Web���� 
	public :
		Student(string num, char *n , int c1 , int cpp1 , int web1 );	// �Ű������� �ִ� ������ 
		void showData(); // ����Լ� 
}; 

Student::Student(string num , char *n , int c1 , int cpp1 , int web1 ){  // n�� pointer 
	hakbun = num ; 
	strcpy(name   , n );
	c = c1;
	cpp = cpp1;
	web = web1;
}

void Student::showData(){
	cout << "�й� : " << hakbun << endl;
	cout << "�̸� : " << name   << endl; 
	cout << "c    : " << c      << endl;
	cout << "cpp  : " << cpp    << endl;
	cout << "web  : " << web    << endl;
}

int main(){
	Student	kang = Student("2020036620","������",88,88,97); // ��ü ������ �Ű� ���������� �ѱ� 
	kang.showData(); // �ع��Լ� showData�� �ѱ� 
	cout << "====================================================="<< endl;
	Student	kim("2020036620","������",88,88,97); // ��ü ������ �Ű� ���������� �ѱ� 
	kim.showData(); // �ع��Լ� showData�� �ѱ�  
	 
	return 0;
}


