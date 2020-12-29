#include <iostream>

using namespace std;

class Dog{
	public :
		void DataShow(); // 멤버 변수인 Age와 Weight가 공개로 선언됨 
		unsigned int Age;
		unsigned int Weight;
		char name[10];
		
};  

void Dog::DataShow(){
	cout << "happy의 나이는 " << Age << "살 입니다." << endl; 
	cout << "happy의 몸무게는 " << Weight << "Kg 입니다." << endl;
	cout << "happy의 이름은 " << name << " 입니다." << endl;
}

int main(){
	Dog happy = { 3 , 4 , "해피" }; // 멤버 함수(DataShow)를 제외한 멤버 변수의 순서대로 set된다.  
	happy.DataShow();
	
	return 0;
}
