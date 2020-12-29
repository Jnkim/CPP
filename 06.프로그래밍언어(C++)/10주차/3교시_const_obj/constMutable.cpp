#include <iostream>
using namespace std;

/*
	 const ��ü ������ mutable ��������� �����ϸ� ���������ϴ�. 
*/
class Dog { 
	public : 
		mutable unsigned int Age;     // mutable ��� ���� ���� 
		mutable unsigned int Weight;  // mutable ��� ���� ���� 	
		Dog(unsigned int age , unsigned int weight);
		void getData() const;  // const ����Լ��� ����   
		
};

Dog::Dog(unsigned int age , unsigned int weight ){ 
         Age = age;
         Weight = weight;
}
  
void Dog::getData() const{ // const ��ü�� ����Լ� ���� 
	cout << "���̴� " << Age << "�� �Դϴ�." << endl; 
	cout << "������� " << Weight << "Kg �Դϴ�." << endl;
} 
 

int main(){ 
  
  	const Dog happy( 13 , 15 ); // const ��� ��ü   
  	happy.Age = 3;      // mutable������ �����Ǿ� ������ �߻����Ѵ�. 
  	happy.Weight = 5;
	happy.getData();  
	
	return 0;
}
