#include <iostream>
using namespace std;

/* Call by Value는 선언된 함수(함수의 시그니처)내부에서 값이 변경되어도 원본(main의 실인수)는 변경되지 않는다.  */

void swap(int px , int py);

int main(){
	int x = 3, y =7;
	
	cout << "swap 호출전 , x "<< x << " , y : "<< y << "\n";
	swap(x , y);
	cout << "swap 호출후 , x "<< x << " , y : "<< y << "\n";
	return 0; 
}

void swap(int px , int py){
	int temp;
	temp = px;
	px = py;
	py = temp;
	
	cout << "swap 호출중 , px "<< px << " , py : "<< py << "\n";
}
