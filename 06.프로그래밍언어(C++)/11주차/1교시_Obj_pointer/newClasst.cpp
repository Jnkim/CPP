#include <iostream>
#include <cstring>
using namespace std;

/*  ��ü�� �������� �Ҵ��Ͽ� ����ϴ� ��� 
	 1) ��ü ������ ���
	 	 ex) Ŭ������ *��ü_�����͸�
	 	 
	 2) new �����ڿ� �����ڸ� ����� heap������ �����Ǵ� ��ü�� ���� �ּҸ� �տ��� ������ ��ü_�����Ϳ� �Ҵ��Ѵ�. 
	     ex) ��ü_�����͸� = new �����ڸ�();
		     ��ü_�����͸� = new �����ڸ�(�Ű����� ����Ʈ); 
		     
	 3) ����� �����ϱ� ���� ��ü�����Ϳ� ������ ->�� ����Ѵ�.
	     ex)  ��ü_�����͸�->�����;  	     
	     
	 4) ��ü�����͸� ��� ��������� delete �����ڷ� heap������ �����Ѵ�. 
	     ex) delete ��ü_�����͸� 
*/

class Dog{
	public :
		Dog(char name[] , int age , int weight);  // �����ڼ��� 
		~Dog();                                   // �Ҹ��� ���� 
		void showData();	
	private :	
		char Name[20];
		unsigned int Age;
		unsigned int Weight;
};  // Class ������ �ݵ�� ; ��� �ؾ� �Ѵ�. 

Dog::Dog(char name[] , int age , int weight){
	cout << "===   ������ȣ��   ===" << endl;
	strcpy(Name , name); // include <cstring> �ʿ� 
	Age = age;
	Weight = weight; 
}

Dog::~Dog(){
	cout << "===   �Ҹ���ȣ��   ===" << endl; 
}

void Dog::showData(){
	// cout << "�̸��� "<< Name << " �Դϴ�."<< endl;
	cout << "���̴� "<< Age << "�� �Դϴ�."<< endl; 
	cout << "������� "<< Weight << "Kg �Դϴ�."<< endl;
} 

int main(){
	Dog *pt;  // ��ü ������ ���� 
	pt = new Dog("happy" , 5 , 6 );  // ���� �޸� �Ҵ� 
	
	pt->showData(); // ��ü �����͸� ����Ͽ� ����Լ��� ���� 
	delete pt; // �������� �Ҵ���� �޸� ���� ���� 
	
	return 0; 
}
