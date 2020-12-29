#include <iostream> 
using namespace std;

extern void data(int x); // 외부 파일에서 선언한 함수 참조  
/* exfn2.cpp 파일 참조 (dec C++에서 Test불가 / Visual Studio에서 확인 가능 
   Visual Studio 켜고 
   프로젝트명 "exfn" 으로 생성
   소스파일생성후 (각각 파일 복붙)
   프로젝트 빌드 (Ctrl + Shift + B) =>  수행 ( Ctrl + F5) 
 */
int x = 7;
int y; // 기본값 0 

int main(){
	x = 9;
	cout << "main 함수내의 x = " << x <<endl;
	data(100);
	
	cout << "외부 파일의 함수 호출후 y = "<<y<<endl;
	cout << "외부 파일의 함수 호출후 x = "<<x<<endl;
	return 0; 
} 
