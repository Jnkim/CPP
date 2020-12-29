#include <iostream>
using namespace std;

class Dog{
	public : // 공개멤버 선언 
		unsigned int getAge(){ return Age; }; // 멤버함수의 선언과 정의를 포함한다. 
		void setAge(unsigned int age){ Age = age; }; // 멤버함수의 선언과 정의를 포함한다.
		void Show(){  cout << "행복한 순간 " << endl; };  // public일때만 함수(){} 형태로 선언가능 ( 비추천 ) , 일반적으로 (); 형태로 선언한다. 
	private : // 비공개 멤버 선언 
		unsigned int Age;   // 양수의 값만을 가진다. (unsigned int) 
		unsigned int Weight; // 양수의 값만을 가진다. (unsigned int)	 
};
 

int main(){
	Dog happy;
	happy.setAge(3);
	cout << "happy의 나이는 "<< happy.getAge() << "입니다."<<endl;
	happy.Show();
	return 0; 
}
