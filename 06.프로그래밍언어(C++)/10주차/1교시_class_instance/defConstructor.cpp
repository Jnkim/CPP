#include <iostream>

using namespace std;

class Dog{
	public :
		void DataShow(); // ��� ������ Age�� Weight�� ������ ����� 
		unsigned int Age;
		unsigned int Weight;
		char name[10];
		
};  

void Dog::DataShow(){
	cout << "happy�� ���̴� " << Age << "�� �Դϴ�." << endl; 
	cout << "happy�� �����Դ� " << Weight << "Kg �Դϴ�." << endl;
	cout << "happy�� �̸��� " << name << " �Դϴ�." << endl;
}

int main(){
	Dog happy = { 3 , 4 , "����" }; // ��� �Լ�(DataShow)�� ������ ��� ������ ������� set�ȴ�.  
	happy.DataShow();
	
	return 0;
}
