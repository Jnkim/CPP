#include <iostream>
using namespace std;

/*
	 static 멤버 변수
	     1) 정의한 클래스에는 속하지만 그 클래스의 객체에는 속해있지 않은 멤버변수
		 2) static으로 선언한 멤버 변수는 객체마다 하나씩 복사해 가지고 있는것이 아니라. 
		    클래스마다 하나씩 생성 되므로 클래스 내부에 오직 한개만 존재한다. 
			그 클래스를 통해 생성된 모든 객체들이 공통으로 공유해서 사용하는 멤버변수
		 3) 프로그램이 끝날때까지 모든 객체에 의해 공동으로 사용할 필요가 있는 멤버변수의 경우 static멤버 변수로 선언한다.	 
*/
class Dog { 
	public : 
	    static int mari;  // static멤버 변수 선언 
		Dog(int age ,int weight);
		void dataShow();  // const 멤버함수로 선언   
	private :
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
	cout << "총 " << mari << "마리 입니다." << endl;
} 
 

int main(){ 
  
  	Dog happy( 13 , 15 );  
	happy.dataShow();  
	
	Dog marry( 3 , 5 ); 
	marry.dataShow();  
	
	Dog nuri( 6 , 8 ); 
	nuri.dataShow();
	
	return 0;
}
