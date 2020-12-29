#include <iostream>
using namespace std;
void show(int p[]);
 
int main(){
	int a[] = {4,5,6};
	show(a);
	
	return 0;
}

void show(int p[]){
	for(int i = 0; i<3 ; i++){
	 	cout << "p["<< i <<"]번지 " << p + i << "  ";
	 	cout << "p["<< i <<"]번지 " << p[i] << endl;
	}
}

