#include <iostream>
using namespace std;

int main(){
	
	//int a[2][3] = {1,2,3,4,5,6};
	//int a[2][3] = {{4,5,6},{7,8,9}}; 
	int a[][3] = {11,12,13,14,15,16};
	
	for(int i = 0 ; i < 2 ; i++){
		for(int j = 0;  j < 3; j++){
			cout << "a["<<i<<"]["<<j<<"] : " << a[i][j] << " , "; 
		}
		cout << endl;
	}
	
	return 0;
}
