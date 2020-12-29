#include <iostream>
using namespace std;

/*
Call By Address (반환형이 여러개일떄 사용하는 방식)
실제 반환형은 하나지만 ( 주소값을 전달하기때문에 실인수의 값까지 실제로 변경되는 형태 )
main에서 호출하는 시점부터 주소값을 전달한다. 
 
포인터 (포인터에 의한 전달방식) 
*/

void swap(int *x , int *y);  // 포인터에 의한 값전달 방식 
//void swap(int  , int );  // 포인터에 의한 값전달 방식 

int main(){
	int x = 3, y =7;
	
	cout << "swap 호출전 , x : "<< x << " , y : "<< y << "\n";
	cout << "swap 호출전 , &x : "<< &x << " , &y : "<< &y << "\n"; // 실인수 주소값 확인 
	swap(&x , &y); // 변수의 주소값 ( & 변수 ) 을 전달한다.  &x , &y는 실인수 
	cout << "swap 호출후 , x : "<< x << " , y : "<< y << "\n";
	return 0; 
}
 
void swap(int *px , int *py){ // 호출되는 함수의  px , py는 가인수 (주소값을 가지는 형태의 변수 (*변수) )
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
	
	cout << "swap 호출중 , *px : "<< *px << " , *py : "<< *py << "\n";
	cout << "swap 호출중 , px : "<< px << " , py : "<< py << "\n"; // 가인수 주소값 확인  
} 

/*
void swap(int px , int py){ // 호출되는 함수의  px , py는 가인수(호출하는 시점에 주소값을 전달하였을떄 , 변수의 값으로 받으면 Compile에서 발생 
	int temp;
	temp = px;
	px = py;
	py = temp;
	
	cout << "swap 호출중 , *px : "<< *px << " , *py : "<< *py << "\n";
	cout << "swap 호출중 , px : "<< px << " , py : "<< py << "\n"; // 가인수 주소값 확인  
}
*/
