#include <iostream>
using namespace std;

int main (){
	
	char str[] = "Rejection always";
	
	cout.write(str , strlen(str)); 
	// 화면에 str배열에 저장된 문자열을 출력한다. 
	cout << strlen(str) << endl;
	
	cout.write("Rejection",5);
	cout << endl;
	
	return 0; 
}
