#include <iostream>
using namespace std;

int main(){
	int x; // main() 함수의 { } 내부에서 유효한 지역변수 x
	cout << "for문 내부에서의 x = ";
	
	for(x = 1; x < 5; x++){ 
		int x = 0;  // for문 내부의 유효한 지역변수 x ( 5번 line의 x와는 다른 변수) 
		x++;
		
		cout << x << ","; 
	}
	
	cout << "\nfor문 {} 밖의 x = "<< x << endl;
	return 0; 
}
