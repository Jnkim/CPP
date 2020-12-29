#include <iostream>
using namespace std;

class Dog { 
	public :
		unsigned int Age;
		unsigned int Weight; 
		Dog(unsigned int age , unsigned int weight);
		void DataShow() const;  // const멤버 함수는 함수 뒤에 "const"가 선언된다. 
};

Dog::Dog(unsigned int age , unsigned int weight ){ 
         Age = age;
         Weight = weight;
}

void Dog::DataShow() const {
	cout << "나이는 " << Age << "살 입니다." << endl; 
	cout << "몸무계는 " << Weight << "Kg 입니다." << endl;
}

int main(){ 
	const Dog happy( 3 , 5 ); // const 상수 객체 
	happy.DataShow();  // const 상수객체의 함수도 역시 const 멤버 함수로 선언해야 한다. 
	
	return 0;
}
