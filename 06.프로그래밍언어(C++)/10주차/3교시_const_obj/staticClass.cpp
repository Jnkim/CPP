#include <iostream>
using namespace std;

/*
	 static ��� ����
	     1) ������ Ŭ�������� �������� �� Ŭ������ ��ü���� �������� ���� �������
		 2) static���� ������ ��� ������ ��ü���� �ϳ��� ������ ������ �ִ°��� �ƴ϶�. 
		    Ŭ�������� �ϳ��� ���� �ǹǷ� Ŭ���� ���ο� ���� �Ѱ��� �����Ѵ�. 
			�� Ŭ������ ���� ������ ��� ��ü���� �������� �����ؼ� ����ϴ� �������
		 3) ���α׷��� ���������� ��� ��ü�� ���� �������� ����� �ʿ䰡 �ִ� ��������� ��� static��� ������ �����Ѵ�.	 
*/
class Dog { 
	public : 
	    static int mari;  // static��� ���� ���� 
		Dog(int age ,int weight);
		void dataShow();  // const ����Լ��� ����   
	private :
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
	cout << "�� " << mari << "���� �Դϴ�." << endl;
} 
 

int main(){ 
  
  	Dog happy( 13 , 15 );  
	happy.dataShow();  
	
	Dog marry( 3 , 5 ); 
	marry.dataShow();  
	
	Dog nuri( 6 , 8 ); 
	nuri.dataShow();
	
	return 0;
}
