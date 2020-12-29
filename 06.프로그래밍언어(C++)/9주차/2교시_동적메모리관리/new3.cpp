#include <iostream>
using namespace std;

int main(){
	int *pt = new int[10];
	*pt = 123;
	
	cout << "pt 주소 : "<< pt << endl;
	cout << "pt 주소 : "<< static_cast<void *>(pt) << endl; // 명시적 형변환 (포인터형식의 포인터를 모든형식의 값을 받을수 있도록 형변환) 
	cout << "pt = "<< *pt << endl;
	  
	delete[] pt;  // 사용이 끝난 메모리를 해제 한다. 
	
	return 0; 
}
