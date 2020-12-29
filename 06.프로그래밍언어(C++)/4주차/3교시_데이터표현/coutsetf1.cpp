#include <iostream>
using namespace std;

int main(){
	int i = 19;
	
	cout << i << "\n";
	
	cout.setf(ios::showpos);   // + 기호  
	cout << i << endl;
	
	cout.setf(ios::showbase); 
	cout << oct << i << endl;  // 10진수 
	
	cout.setf(ios::uppercase); 
	cout << hex << 19 << "\n";  // 16진수 
	 
	return 0;  
}
