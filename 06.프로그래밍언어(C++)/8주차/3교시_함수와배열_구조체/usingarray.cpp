#include <iostream> 
using namespace std;

void usingArray(char arrp[]); // 배열을 인수로 갖는 함수의 원형 

int main(){
	char str[] = "Hello , World!" ;
	usingArray(str);
	cout << "In Main() : "<< str << "\n";
}

void usingArray (char arr[]){  // 가인수 [] 형태로 받았을때... ( 주소값 전달 )
 cout << arr << "\n";
 arr[10] = 'T'; // 주소값을 찾아가서 값을 변경한다. 
 arr[11] = 'C'; // 주소값을 찾아가서 값을 변경한다. 
}
