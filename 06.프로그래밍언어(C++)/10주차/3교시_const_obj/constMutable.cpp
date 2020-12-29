#include <iostream>
using namespace std;

/*
	 const 객체 일지라도 mutable 멤버변수로 선언하면 수정가능하다. 
*/
class Dog { 
	public : 
		mutable unsigned int Age;     // mutable 멤버 변수 선언 
		mutable unsigned int Weight;  // mutable 멤버 변수 선언 	
		Dog(unsigned int age , unsigned int weight);
		void getData() const;  // const 멤버함수로 선언   
		
};

Dog::Dog(unsigned int age , unsigned int weight ){ 
         Age = age;
         Weight = weight;
}
  
void Dog::getData() const{ // const 객체의 멤버함수 정의 
	cout << "나이는 " << Age << "살 입니다." << endl; 
	cout << "몸무계는 " << Weight << "Kg 입니다." << endl;
} 
 

int main(){ 
  
  	const Dog happy( 13 , 15 ); // const 상수 객체   
  	happy.Age = 3;      // mutable변수로 지정되어 오류가 발생안한다. 
  	happy.Weight = 5;
	happy.getData();  
	
	return 0;
}
