#include <iostream>
#include <cstring>
using namespace std;

/*  객체를 동적으로 할당하여 사용하는 방법 
	 1) 객체 포인터 사용
	 	 ex) 클래스명 *객체_포인터명
	 	 
	 2) new 연산자와 생성자를 사용해 heap영역에 생성되는 객체의 시작 주소를 앞에서 선언한 객체_포인터에 할당한다. 
	     ex) 객체_포인터명 = new 생성자명();
		     객체_포인터명 = new 생성자명(매개변수 리스트); 
		     
	 3) 멤버에 접근하기 위해 객체포인터와 연산자 ->를 사용한다.
	     ex)  객체_포인터명->멤버명;  	     
	     
	 4) 객체포인터를 모두 사용했으면 delete 연산자로 heap영역을 해제한다. 
	     ex) delete 객체_포인터명 
*/

class Dog{
	public :
		Dog(char name[] , int age , int weight);  // 생성자선언 
		~Dog();                                   // 소멸자 선언 
		void showData();	
	private :	
		char Name[20];
		unsigned int Age;
		unsigned int Weight;
};  // Class 끝에는 반드시 ; 명시 해야 한다. 

Dog::Dog(char name[] , int age , int weight){
	cout << "===   생성자호출   ===" << endl;
	strcpy(Name , name); // include <cstring> 필요 
	Age = age;
	Weight = weight; 
}

Dog::~Dog(){
	cout << "===   소멸자호출   ===" << endl; 
}

void Dog::showData(){
	// cout << "이름은 "<< Name << " 입니다."<< endl;
	cout << "나이는 "<< Age << "살 입니다."<< endl; 
	cout << "몸무계는 "<< Weight << "Kg 입니다."<< endl;
} 

int main(){
	Dog *pt;  // 객체 포인터 선언 
	pt = new Dog("happy" , 5 , 6 );  // 동적 메모리 할당 
	
	pt->showData(); // 객체 포인터를 사용하여 멤버함수에 접근 
	delete pt; // 동적으로 할당받은 메모리 영역 해제 
	
	return 0; 
}
