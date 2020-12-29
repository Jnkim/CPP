#include <iostream>
#include <iomanip>
using namespace std;

/*
	 static 멤버 함수 
	     1) 클래스에서 정의한 static멤버 변수에 접근하는 함수이다. 
		 2) 특정한 객체에서 호출할수 있는뿐만 아니라 모든 객체에서 호출할수있도록 작성한 함수 
		 3) static멤버 함수는 멤버함수 앞에 static를 붙여서 선언한다. 
*/
class Dog { 
	public :  
		Dog(int age ,int weight);
		void dataShow();  // const 멤버함수로 선언   
		static void showMari(); // static멤버 함수 선언 
	private :
		static int mari; // satic멤버 변수 선언 
		unsigned int Age;
		unsigned int Weight;
			
};


int Dog::mari = 0; // 함수 외부에서 static 멤버 변수 사용 

Dog::Dog(int age , int weight ){ 
         Age = age;
         Weight = weight;
         
         mari++;  // static멤버 변수 -- 값증가 
}
  
void Dog::dataShow(){ 
	cout << "=======================================" << endl; 
	cout << "나이는 " << Age << "살 입니다." << endl; 
	cout << "몸무계는 " << Weight << "Kg 입니다." << endl; 
} 

void Dog::showMari(){ // 정적 멤버함수 정 
	cout << "=======================================" << endl; 
	cout << "총 " << mari << "마리 입니다." << endl;
} 

int main(){ 
  
  	Dog happy( 13 , 15 );  
	happy.dataShow();  
	happy.showMari();
	
	Dog marry( 3 , 5 ); 
	marry.dataShow();
	marry.showMari();  
	
	Dog nuri( 6 , 8 ); 
	nuri.dataShow();
	nuri.showMari();  
	
	return 0;
}
