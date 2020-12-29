#include <iostream>
using namespace std;

class Dog { 
	public : 
		Dog(unsigned int age , unsigned int weight);
	    void setData(unsigned int age , unsigned int weight);
		void getData() const;  // const 멤버함수로 선언  
	private :
		unsigned int Age;
		unsigned int Weight; 	
};

Dog::Dog(unsigned int age , unsigned int weight ){ 
         Age = age;
         Weight = weight;
}

void Dog::setData(unsigned int age , unsigned int weight){
	Age = age;
	Weight	= weight;
}

void Dog::getData() const{ // const 객체의 멤버함수 정의 
	cout << "나이는 " << Age << "살 입니다." << endl; 
	cout << "몸무계는 " << Weight << "Kg 입니다." << endl;
} 
 

int main(){ 
	Dog happy( 3 , 5 ); // const 상수 객체 
	happy.getData();  // const 상수객체의 함수도 역시 const 멤버 함수로 선언해야 한다. 
	
	
	const Dog marry( 13 , 15 ); // const 상수 객체  
	marry.setData(8,9); // compile 오류발생 -- marry는 const객체 
	marry.getData();  
	
	return 0;
}
