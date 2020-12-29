#include <iostream>
#include <cstring> 

using namespace std;


class Dog { 
	public :  // �������� 
		Dog(char name[] , unsigned int age ,unsigned  int weight); // �⺻ ������ ���� 
		void showData(); // ����Լ�	
	private :  // ����� ��� 
	    char Name[20];
		unsigned int Age;
		unsigned int Weight;
		
};

Dog::Dog(char name[] , unsigned int age ,unsigned  int weight ){ 
	strcpy(Name , name);
	Age = age;
	Weight = weight;
}

void Dog::showData(){
	cout << Name <<"�� ���̴�  " << Age << "�� �Դϴ�." << endl;
	cout << Name <<"�� �����Դ� " << Weight  << "Kg �Դϴ�."  << endl; 
}

int main(){
	Dog happy = Dog("happy", 5 , 6 );
	happy.showData();
	cout << "===========================================" << endl; 
	Dog jjong("jjong", 7 , 8 );
	jjong.showData();
	
	return 0;
}
