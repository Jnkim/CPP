#include <iostream>
#include <cstring>

using namespace std;

char *ReverseString( const char* src , int len){
	// 역순으로 변환한 문자열을 보관할 동적 메모리를 할당한다. 
	char *reverse = new char[len + 1];
	
	// 문자열을 역순으로 복사한다.
	for(int i = 0 ; i < len; ++i){
		reverse[i] = src[len -i -1];
	};
	// 역순으로 된 문자열의 끝에 NULL 문자를 넣어 문자열을 오나성한다.  
	reverse[len] = NULL;
	
	// 역순으로 된 문자열을 반환한다. 
	return reverse;	 
} 

int main(){
	
	// 원본 문자열을 준비한다. 
	char old[] = "I can do it." ;
	char *rev = ReverseString(old , strlen(old) );  // strlen 함수를 사용하려면 #include <cstring> 라이브러리 필요 
	
	cout << old << endl; // 원본 문자열 출력 
	cout << rev << endl; // 역순 문자열 출력 
	
	
	delete[] rev;  // 할당된 동적 메모리 해제
	rev = NULL;    // 포인터를 초기화 한다.
	
	return 0; 
} 
