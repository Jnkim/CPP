#include <iostream> 
using namespace std;

void chonge(int *p); 
int main(){
	int a[] = {4,5,6,7};
	chonge(a);
	return 0;
}

void chonge(int *p){ 
	cout << " chonge() �Լ� : "<< *p << endl;
	for(int i = 0; i < 4; i++){
	 	cout << "p+" << i << "���� = " << p+i << " , ";
	 	cout << "p["<<i<<"] = "<< p[i] << endl;
	}
}

