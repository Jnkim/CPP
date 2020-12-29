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
	strcpy(Name , "jong"); // include <cstring> 필요 
	Age = 3;
	Weight = 4; 
}

Dog::Dog(char name[] , int age , int weight){
	strcpy(Name , name);
	Age = age;
	Weight = weight; 
}

void Dog::showData(){
	cout << "나이는 "<< Age << "살 입니다."<< endl; 
	cout << "몸무계는 "<< Weight << "Kg 입니다."<< endl;
}


int main(){
	Dog happy;
	Dog *pt; // 객체 포인터 선언 
	
	Dog marry("marry", 5 , 6);
	pt = &marry;
	
	pt->showData(); // 객체포인터를 사용하여 멤버함수 접근 
	
	return 0;
}
