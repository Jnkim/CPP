#include <iostream>
#include <cstring> 

using namespace std;


class Dog { 
	public :  // �������� 
	    Dog(); // �⺻ ������ ���� 
		Dog(char name[] , unsigned int age ,unsigned  int weight); // �Ű��������� �ִ�  ������  ���� 
		void showData(); // ����Լ�	
	private :  // ����� ��� 
	    char Name[20];
		unsigned int Age;
		unsigned int Weight;
		
};

Dog::Dog(){
	strcpy(Name , "�⺻������");
	Age = 100;
	Weight = 200;
}

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
	
	cout << "===========================================" << endl; 
	//Dog basic(); // �ȵ� 
	Dog basic = Dog();
	basic.showData();
	
	return 0;
}
