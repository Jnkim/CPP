#include <iostream>
using namespace std;

class Dog { 
	public : 
	    void getData() const;  // const ����Լ��� ���� 
	    void setData(unsigned int age , unsigned int weight);  
	private :
		unsigned int Age;
		unsigned int Weight; 	
};

void Dog::setData(unsigned int age , unsigned int weight){
	Age = age;
	Weight	= weight;
}

void Dog::getData() const{ // const ��ü�� ����Լ� ���� 
	cout << "���̴� " << Age << "�� �Դϴ�." << endl; 
	cout << "������� " << Weight << "Kg �Դϴ�." << endl;
} 
 

int main(){ 
	Dog happy; // const ��� ��ü 
	happy.setData( 3 , 5 );
	happy.getData();  // const �����ü�� �Լ��� ���� const ��� �Լ��� �����ؾ� �Ѵ�. 
	
	return 0;
}
