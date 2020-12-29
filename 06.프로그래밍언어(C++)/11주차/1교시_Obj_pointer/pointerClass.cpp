#include <iostream> 
#include <cstring>
using namespace std;

class Dog{
	public :
		Dog();
		Dog(char name[] , int age , int weight);
		void showData();
	private :
		char Name[20];	
		unsigned int Age;
		unsigned int Weight;
};

Dog::Dog(){
	strcpy(Name , "jong"); // include <cstring> �ʿ� 
	Age = 3;
	Weight = 4; 
}

Dog::Dog(char name[] , int age , int weight){
	strcpy(Name , name);
	Age = age;
	Weight = weight; 
}

void Dog::showData(){
	cout << "���̴� "<< Age << "�� �Դϴ�."<< endl; 
	cout << "������� "<< Weight << "Kg �Դϴ�."<< endl;
}


int main(){
	Dog happy;
	Dog *pt; // ��ü ������ ���� 
	
	Dog marry("marry", 5 , 6);
	pt = &marry;
	
	pt->showData(); // ��ü�����͸� ����Ͽ� ����Լ� ���� 
	
	return 0;
}
