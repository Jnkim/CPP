#include <iostream> 
#include <iomanip>
using namespace std;

unsigned long fibonacci(unsigned long);

/*
 �Ǻ���ġ ���� : 0���� 1���� �� ���� ������ �����Ѵ�. 
 0��  0
 1��  1
 2��  0(0��)  + 1(1��)  = 1  
 3��  1(1��)  + 1(2��)  = 2 
 4��  1(2��)  + 2(3��)  = 3 
 5��  2(3��)  + 3(4��)  = 5
 6��  3(4��)  + 5(5��)  = 8
 7��  5(5��)  + 8(6��)  = 13
 8��  8(6��)  + 13(7��) = 21
 9��  13(7��) + 21(8��) = 34
 10�� 21(8��) + 34(9��) = 55
 .....
 n�� (n-2��)+ (n-1��) = n�� ��� 
 
*/
 
int main(){
    unsigned long number;
    
    cout << "Enter an Integer : ";
    cin >> number;
    
    for(int i = 0 ; i <= number; i++){
   	    // setw(2) : 2�ڸ� ä��� , �Լ��� ����Ϸ��� #include <iomanip> ���̺귯���� ���� �ؾ� �Ѵ�. 
   		cout << "fibonacci("<< i << ") = " << fibonacci(i) << endl;
   }	
   return 0;
}

unsigned long fibonacci(unsigned long n){
	if(n == 0 || n == 1)      // 0 factorialdms 0�̴�. 
		return n;
	else 
		return fibonacci(n -1)+fibonacci(n -2);  // 	fibonacci �Լ� ���ο��� �ٽ� fibonacci�Լ� ȣ�� (���ȣ��) 
}
