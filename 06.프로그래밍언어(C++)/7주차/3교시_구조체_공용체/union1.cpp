#include <iostream>  
using namespace std;

// 공용체는 멤버변수들중 가장 큰 메모리값을기준으로 , 메모리를 공유한다. 
// 멤버변수의 값이 변경되면 나머지 멤버변수의 값도 변경된다.  
union number{  // 공용체 정의 
	int x; 
	double y;   
};

int main(){
	
	union number  value ;  // 공용체 변수선언 
	value.x = 56;
	cout << "x value : "<< value.x << endl;  
	value.x = 37.58;
	cout << "y value : "<< value.y << endl;
	cout << "x value : "<< value.x << endl;
	return 0;
}
 
