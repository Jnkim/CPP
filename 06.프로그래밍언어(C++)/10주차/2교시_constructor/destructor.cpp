#include<iostream> 
#include <cstring>
using namespace std; 

class Dog { 
	public :  // 공개선언 
	    Dog(); // 기본 생성자 선언 
	    ~Dog(); // 소멸자 선언  
		void showData(); // 멤버함수	
	private :  // 비공개 언언 
	    char Name[20];
		unsigned int Age;
		unsigned int Weight;
		
};

Dog::Dog(){
	cout << " =======   생성자 호출============== " << endl; 
	strcpy(Name , "기본생성자");
	Age = 100;
	Weight = 200;
}

Dog::~Dog(){ 
	 cout << " =======   소멸자 호출============== " << endl; 
}

void Dog::showData(){
	cout << Name <<"의 나이는  " << Age << "살 입니다." << endl;
	cout << Name <<"의 몸무게는 " << Weight  << "Kg 입니다."  << endl; 
}

int main(){
	Dog happy;
	happy.showData();
	
	return 0; // 소멸자가 수행되는 시점 (return되는 순간 소멸자가 호출된다.) 
} 
