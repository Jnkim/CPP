#include <iostream>
using namespace std;

int main(){
	int i = 19;
	
	cout << i << "\n";
	
	cout.setf(ios::showpos);   // + ��ȣ  
	cout << i << endl;
	
	cout.setf(ios::showbase); 
	cout << oct << i << endl;  // 10���� 
	
	cout.setf(ios::uppercase); 
	cout << hex << 19 << "\n";  // 16���� 
	 
	return 0;  
}
