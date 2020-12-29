#include <iostream>
using namespace std;

int main(){
	int x = 3;
	//지역변수 x , 함수내부 {}에서 선언했으므로 
	//이위치에서 함수끝까지 유효하다. 	
 	cout << "main 함수 내의 x = "<<  x << endl; 
 	
 	x = 200;
 	cout << "x = "<< x << endl;
 	return 0;
}
