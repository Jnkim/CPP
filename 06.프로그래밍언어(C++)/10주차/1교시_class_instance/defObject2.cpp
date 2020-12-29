#include <iostream>
using namespace std;

class Dog{
	public :
		unsigned int getAge(){ return Age; }; // 멤버함수의 선언과 정의를 포함한다. 
		void setAge(unsigned int age){ Age = age; }; // 멤버함수의 선언과 정의를 포함한다.
		void Show();
	private :
		unsigned int Age;   // 양수의 값만을 가진다. (unsigned int) 
		unsigned int Weight; // 양수의 값만을 가진다. (unsigned int)	 
};


void Dog::Show(){ // Dog 클래스의 멤버함수 Show에 대한정의 
	cout << "행복한 순간 \n"; 
}

int main(){
	Dog happy;
	happy.setAge(3);
	cout << "happy의 나이는 "<< happy.getAge() << "입니다."<<endl;
	//happy.Show();
	return 0; 
}
