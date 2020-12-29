#include <iostream> 
using namespace std;


/* 함수내부 에서 사용한 static  */

void data();  
int x = 7;   // 전역변수 "X" 

int main(){ 
	int x = 3;  // 지역변수 x 
	int y = 0;  // 지역변수 y 
	
	cout << " main 함수 내의 x = "<< x <<endl;
	data();
	
	cout<<" 함수 호출후 x ="<<x<<endl;
	cout<<" 함수 호출후 x ="<<y<<endl;
	data();
	
	return 0;
}

void data(){
	int y = 20;  // 지역변수 "Y"
	static int x = 10;  // 정적변수 "X" 
	
	cout << endl;
	cout << "호출된 data함수의 x = " << x << endl; 
	cout << "호출된 data함수의 y = " << y << endl;
	cout << endl;
	
	x = 100;
	y = 200;
}
