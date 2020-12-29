#include <iostream> 
#include <cstring> 
using namespace std;

void usingArray(const char *arr, int n);

int main(){
	char *str = "Hello";  // 문자형 포인터 변수로 선언 
	usingArray(str , strlen(str));	// 문자형 포인터를 매개 변수로 전달한다.  
	cout << "In Main() : "<< str << "\n";
	return 0;
}

void usingArray(const char *arr, int n){   

	// *arr[1] = 'Q'; // 매개변수를 const로 선언했기때문에 값을 변경하려하면 compile장애 발생  
	for(int i = 0 ; i < n ; i++){
		cout << arr[i];
		cout << endl;
	}
}
