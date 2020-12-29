#include <iostream>
using namespace std;

class Dog{
	public :
		void DataShow();
	private : // 멤버변수 age와 weight는 비공개(private)서 선언됨 
		unsigned int Age;	
		unsigned int Weight;
};

void Dog::DataShow(){
	cout << "happy의 나이는 " << Age << "살 입니다." << endl; 
	cout << "happy의 몸무게는 " << Weight << "Kg 입니다." << endl;
}

int main(){
	Dog happy = { 3 , 4 }; // compile시 오류발생 (private 멤버변수 선언했기때문에 장애발생 
	happy.DataShow();
	
	return 0;
}
