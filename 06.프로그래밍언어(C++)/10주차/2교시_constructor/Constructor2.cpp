#include <iostream>
#include <cstring> 

using namespace std;


class Dog { 
	public :  // 공개선언 
		Dog(char name[] , unsigned int age ,unsigned  int weight); // 기본 생성자 선언 
		void showData(); // 멤버함수	
	private :  // 비공개 언언 
	    char Name[20];
		unsigned int Age;
		unsigned int Weight;
		
};

Dog::Dog(char name[] , unsigned int age ,unsigned  int weight ){ 
	strcpy(Name , name);
	Age = age;
	Weight = weight;
}

void Dog::showData(){
	cout << Name <<"의 나이는  " << Age << "살 입니다." << endl;
	cout << Name <<"의 몸무게는 " << Weight  << "Kg 입니다."  << endl; 
}

int main(){
	Dog happy = Dog("happy", 5 , 6 );
	happy.showData();
	cout << "===========================================" << endl; 
	Dog jjong("jjong", 7 , 8 );
	jjong.showData();
	
	return 0;
}
