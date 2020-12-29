#include <iostream>
using namespace std;

class Dog { 
	public : 
		Dog(unsigned int age , unsigned int weight);
	    void setData(unsigned int age , unsigned int weight);
		void getData() const;  // const ����Լ��� ����  
	private :
		unsigned int Age;
		unsigned int Weight; 	
};

Dog::Dog(unsigned int age , unsigned int weight ){ 
         Age = age;
         Weight = weight;
}

void Dog::setData(unsigned int age , unsigned int weight){
	Age = age;
	Weight	= weight;
}

void Dog::getData() const{ // const ��ü�� ����Լ� ���� 
	cout << "���̴� " << Age << "�� �Դϴ�." << endl; 
	cout << "������� " << Weight << "Kg �Դϴ�." << endl;
} 
 

int main(){ 
	Dog happy( 3 , 5 ); // const ��� ��ü 
	happy.getData();  // const �����ü�� �Լ��� ���� const ��� �Լ��� �����ؾ� �Ѵ�. 
	
	
	const Dog marry( 13 , 15 ); // const ��� ��ü  
	marry.setData(8,9); // compile �����߻� -- marry�� const��ü 
	marry.getData();  
	
	return 0;
}
