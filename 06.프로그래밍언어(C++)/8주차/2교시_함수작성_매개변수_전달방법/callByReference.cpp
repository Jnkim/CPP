#include <iostream>
using namespace std;

/*
Call By reference
가인수를 참조변수로 선언하는 형태 
호출 하는 시점까지는 Call By Value와 같다.; swap(x , y); value에 의한 전달 
그러나 호출되는 함수인 swap에서 가인수를 주소값으로 변경하는 받아 버린다. 
******  호출하는 시점에 Value값을 전달해야 한다. 주소값 전달하면 Compile장애 발생 swap(&x , &y)**************  

(함수호출시 "*변수"로 호출할때 "&변수"로 받을수 없다. 
*/
void swap(int &x , int &y);

int main(){
		int x = 3, y =7;
	
	cout << "swap 호출전 , x : "<< x << " , y : "<< y << "\n";
	cout << "swap 호출전 , &x : "<< &x << " , &y : "<< &y << "\n"; // 실인수 주소값 확인 
	swap(x , y); // 변수의 원형을 전달한다.
	cout << "swap 호출후 , x : "<< x << " , y : "<< y << "\n";
	return 0; 
} 

void swap(int &px , int &py){ // 호출되는 함수의  px , py는 가인수 (호출되는 매개변수를 주소값(&변수)으로 변경하여 전달 받는다) 
	int temp;
	temp = px;
	px = py;
	py = temp;
	
	cout << "swap 호출중 , px : "<< &px << " , py : "<< &py << "\n"; // 가인수 주소값 확인  
}
