#include <iostream>
#include <cstring> 

using namespace std;


class Dog { 
	public :  // 공개선언 
		Dog(); // 기본 생성자 선언 
		void showData(); // 멤버함수	
	private :  // 비공개 언언 
		unsigned int Age;
		unsigned int Weight;
		
};

Dog::Dog(){ 
	Age = 3;
	Weight = 4;
}

void Dog::showData(){
	cout << "happy의 나이는  " << Age << "살 입니다." << endl;
	cout << "happy의 몸무게는 " << Weight  << "Kg 입니다."  << endl; 
}

int main(){
	Dog happy;
	happy.showData();
	
	return 0;
}
