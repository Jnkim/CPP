#include <iostream>
using namespace std;

void show(int p[]);

int main(){
	int a[] = {4,5,6};
	show(a); // show() 함수를 호출하면서 
	
	
	for(int i = 0; i < 3; i++){
		cout << "a[" << i << "]번지 " << a + i << " ";
		cout << "a[" << i << "] = " << a[i] << endl;
	}
	
	return 0;
}

void show(int p[]) {
	for(int i = 0; i < 3; i++){
		cout << "P[" << i << "]번지 " << p + i << " ";
		cout << "p[" << i << "] = " << p[i] << endl;
	}
}
