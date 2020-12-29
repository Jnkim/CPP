#include <iostream>
using namespace std;

int main(){
	int *pt = new int;
	cout << "pt 주소 : "<< pt << endl;
	cout << "pt 주소 : "<< static_cast<void *>(pt) << endl; // 명시적 형변환 (포인터형식의 포인터를 모든형식의 값을 받을수 있도록 형변환) 
	
	*pt = 123;
	cout << *pt << endl;
	
	delete pt;  // 사용이 끝난 메모리를 해제 한다. 
	
	//cout << "pt 주소 : "<< pt << endl; // 그래도 메모리의 주소는 남아있는데?? 
	//cout << "pt 값 : "<< *pt << endl;  // 그래도 메모리주소의 값은 변경됐네.. 
}
