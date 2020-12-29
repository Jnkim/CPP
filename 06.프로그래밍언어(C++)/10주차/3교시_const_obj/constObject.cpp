#include <iostream>
using namespace std;

class Dog { 
	public :
		unsigned int Age;
		unsigned int Weight; 
		Dog(unsigned int age , unsigned int weight);
		void DataShow() const;  // const��� �Լ��� �Լ� �ڿ� "const"�� ����ȴ�. 
};

Dog::Dog(unsigned int age , unsigned int weight ){ 
         Age = age;
         Weight = weight;
}

void Dog::DataShow() const {
	cout << "���̴� " << Age << "�� �Դϴ�." << endl; 
	cout << "������� " << Weight << "Kg �Դϴ�." << endl;
}

int main(){ 
	const Dog happy( 3 , 5 ); // const ��� ��ü 
	happy.DataShow();  // const �����ü�� �Լ��� ���� const ��� �Լ��� �����ؾ� �Ѵ�. 
	
	return 0;
}
