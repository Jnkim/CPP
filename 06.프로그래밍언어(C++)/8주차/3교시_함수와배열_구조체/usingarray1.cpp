#include <iostream> 
#include <cstring>
using namespace std;
 
void usingArray(const char arr[] , int n); // 배열을 인수로 갖는 함수의 원형 

int main(){
   char str[] = "Hello KJN";
   usingArray(str , strlen(str));  // strlen(str)을 사용하려면  #include <cstring> 라이브러리를 선언해야 한다. 
   cout << "In Main() : "<< str << "\n";
   return 0;
}

void usingArray(const char arr[] , int n){  // const  (상수값으로 선언하여 원형의 값은 변경할수없다. ) 
	
	//arr[1] = 'Q'; // 매개변수를 const로 선언했기때문에 값을 변경하려하면 compile장애 발생   
	for(int i = 0 ; i < n ; i++){ 
		cout << arr[i];
		cout << endl;
	} 
}
