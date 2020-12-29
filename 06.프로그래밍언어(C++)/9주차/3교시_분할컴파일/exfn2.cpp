#include <iostream>
using namespace std;

void data();
extern void stdata(int x);  // extern : 외부함수 정의 

int x = 7;
int y = 100;

int main(){
	x = 9;
	cout << "main 함수 내의 x = " << x << "\n";
	data();
	cout << "함수 호출후 y = "<< y << endl;
	
	return 0; 
}

void data(){ 
	cout << "호출된 함수의 y = " << y << endl;
	stdata(35);
}
