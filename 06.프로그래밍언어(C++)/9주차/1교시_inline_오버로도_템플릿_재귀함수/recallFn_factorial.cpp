#include <iostream> 
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned long number);
 
int main(){
   for(int i = 0 ; i <= 6; i++){
   	    // setw(2) : 2자리 채우기 , 함수를 사용하려면 #include <iomanip> 라이브러리를 참조 해야 한다. 
   		cout << setw(2) << i << " != " << factorial(i) << endl;
   }	
   return 0;
}

unsigned long factorial(unsigned long number){
	if(number <= 1)      // 0 factorialdms 0이다. 
		return 1;
	else 
		return number * factorial(number  -1);  // 	factorial 함수 내부에서 다시 factorial함수 호출 (재귀호출) 
}
