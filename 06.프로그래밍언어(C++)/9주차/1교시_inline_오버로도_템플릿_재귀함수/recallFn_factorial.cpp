#include <iostream> 
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned long number);
 
int main(){
   for(int i = 0 ; i <= 6; i++){
   	    // setw(2) : 2�ڸ� ä��� , �Լ��� ����Ϸ��� #include <iomanip> ���̺귯���� ���� �ؾ� �Ѵ�. 
   		cout << setw(2) << i << " != " << factorial(i) << endl;
   }	
   return 0;
}

unsigned long factorial(unsigned long number){
	if(number <= 1)      // 0 factorialdms 0�̴�. 
		return 1;
	else 
		return number * factorial(number  -1);  // 	factorial �Լ� ���ο��� �ٽ� factorial�Լ� ȣ�� (���ȣ��) 
}
