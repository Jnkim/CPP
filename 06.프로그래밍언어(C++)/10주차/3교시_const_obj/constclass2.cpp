#include <iostream>
using namespace std;

class Dog { 
	public : 
	    void getData() const;  // const 멤버함수로 선언 
	    void setData(unsigned int age , unsigned int weight);  
	private :
		unsigned int Age;
		unsigned int Weight; 	
};

void Dog::setData(unsigned int age , unsigned int weight){
	Age = age;
	Weight	= weight;
}

void Dog::getData() const{ // const 객체의 멤버함수 정의 
	cout << "나이는 " << Age << "살 입니다." << endl; 
	cout << "몸무계는 " << Weight << "Kg 입니다." << endl;
} 
 

int main(){ 
	Dog happy; // const 상수 객체 
	happy.setData( 3 , 5 );
	happy.getData();  // const 상수객체의 함수도 역시 const 멤버 함수로 선언해야 한다. 
	
	return 0;
}
