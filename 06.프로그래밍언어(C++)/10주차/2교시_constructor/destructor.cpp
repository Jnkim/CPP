#include<iostream> 
#include <cstring>
using namespace std; 

class Dog { 
	public :  // �������� 
	    Dog(); // �⺻ ������ ���� 
	    ~Dog(); // �Ҹ��� ����  
		void showData(); // ����Լ�	
	private :  // ����� ��� 
	    char Name[20];
		unsigned int Age;
		unsigned int Weight;
		
};

Dog::Dog(){
	cout << " =======   ������ ȣ��============== " << endl; 
	strcpy(Name , "�⺻������");
	Age = 100;
	Weight = 200;
}

Dog::~Dog(){ 
	 cout << " =======   �Ҹ��� ȣ��============== " << endl; 
}

void Dog::showData(){
	cout << Name <<"�� ���̴�  " << Age << "�� �Դϴ�." << endl;
	cout << Name <<"�� �����Դ� " << Weight  << "Kg �Դϴ�."  << endl; 
}

int main(){
	Dog happy;
	happy.showData();
	
	return 0; // �Ҹ��ڰ� ����Ǵ� ���� (return�Ǵ� ���� �Ҹ��ڰ� ȣ��ȴ�.) 
} 
