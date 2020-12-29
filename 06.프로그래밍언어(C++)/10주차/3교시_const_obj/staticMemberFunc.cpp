#include <iostream>
#include <iomanip>
using namespace std;

/*
	 static ��� �Լ� 
	     1) Ŭ�������� ������ static��� ������ �����ϴ� �Լ��̴�. 
		 2) Ư���� ��ü���� ȣ���Ҽ� �ִ»Ӹ� �ƴ϶� ��� ��ü���� ȣ���Ҽ��ֵ��� �ۼ��� �Լ� 
		 3) static��� �Լ��� ����Լ� �տ� static�� �ٿ��� �����Ѵ�. 
*/
class Dog { 
	public :  
		Dog(int age ,int weight);
		void dataShow();  // const ����Լ��� ����   
		static void showMari(); // static��� �Լ� ���� 
	private :
		static int mari; // satic��� ���� ���� 
		unsigned int Age;
		unsigned int Weight;
			
};


int Dog::mari = 0; // �Լ� �ܺο��� static ��� ���� ��� 

Dog::Dog(int age , int weight ){ 
         Age = age;
         Weight = weight;
         
         mari++;  // static��� ���� -- ������ 
}
  
void Dog::dataShow(){ 
	cout << "=======================================" << endl; 
	cout << "���̴� " << Age << "�� �Դϴ�." << endl; 
	cout << "������� " << Weight << "Kg �Դϴ�." << endl; 
} 

void Dog::showMari(){ // ���� ����Լ� �� 
	cout << "=======================================" << endl; 
	cout << "�� " << mari << "���� �Դϴ�." << endl;
} 

int main(){ 
  
  	Dog happy( 13 , 15 );  
	happy.dataShow();  
	happy.showMari();
	
	Dog marry( 3 , 5 ); 
	marry.dataShow();
	marry.showMari();  
	
	Dog nuri( 6 , 8 ); 
	nuri.dataShow();
	nuri.showMari();  
	
	return 0;
}
