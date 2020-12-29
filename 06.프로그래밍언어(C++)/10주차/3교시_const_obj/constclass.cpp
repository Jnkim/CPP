#include <iostream>
using namespace std;

class Dog { 
	public :
		unsigned int Age;
		unsigned int Weight;
		void DataShow();
};

void Dog::DataShow(){
	cout << "나이는 " << Age << "살 입니다." << endl; 
	cout << "몸무계는 " << Weight << "Kg 입니다." << endl;
}

int main(){
	// Dog happy;
	const Dog happy; // const 상수 객체 
	happy.Age =3;    // 오류 happy는 상수객체 이므로 멤버변수값을 변경할수없다.  ( Dog happy 는 가능) 
	happy.Weight =5;
	happy.DataShow();
	
	return 0;
}
