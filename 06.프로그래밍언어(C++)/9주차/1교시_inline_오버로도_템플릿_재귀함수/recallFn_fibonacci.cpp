#include <iostream> 
#include <iomanip>
using namespace std;

unsigned long fibonacci(unsigned long);

/*
 피보나치 수열 : 0열과 1열은 각 열의 값으로 정의한다. 
 0열  0
 1열  1
 2열  0(0열)  + 1(1열)  = 1  
 3열  1(1열)  + 1(2열)  = 2 
 4열  1(2열)  + 2(3열)  = 3 
 5열  2(3열)  + 3(4열)  = 5
 6열  3(4열)  + 5(5열)  = 8
 7열  5(5열)  + 8(6열)  = 13
 8열  8(6열)  + 13(7열) = 21
 9열  13(7열) + 21(8열) = 34
 10열 21(8열) + 34(9열) = 55
 .....
 n열 (n-2열)+ (n-1열) = n열 결과 
 
*/
 
int main(){
    unsigned long number;
    
    cout << "Enter an Integer : ";
    cin >> number;
    
    for(int i = 0 ; i <= number; i++){
   	    // setw(2) : 2자리 채우기 , 함수를 사용하려면 #include <iomanip> 라이브러리를 참조 해야 한다. 
   		cout << "fibonacci("<< i << ") = " << fibonacci(i) << endl;
   }	
   return 0;
}

unsigned long fibonacci(unsigned long n){
	if(n == 0 || n == 1)      // 0 factorialdms 0이다. 
		return n;
	else 
		return fibonacci(n -1)+fibonacci(n -2);  // 	fibonacci 함수 내부에서 다시 fibonacci함수 호출 (재귀호출) 
}
