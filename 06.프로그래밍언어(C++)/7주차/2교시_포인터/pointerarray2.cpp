#include <iostream>
using namespace std;

int main(){
   int a[2][3] = { {4,5,6} , {7,8,9} };
   int (*p)[3]; 
   p = a;
   
   cout << "�迭�� a�� ���۹��� ǥ�� : a , &a[0] , *a \n";
   cout << "a : "<< a << ", " << &a[0] << ", " << *a << endl; 
   cout << "a[0][0]�� ��Ұ� ǥ�� : **a , a[0][0] " << **a << ", "<< a[0][0] << endl; 
   
   for(int i = 0; i < 2; i++){
   	  for(int j = 0; j < 3; j++){ 
   	  	cout << "a["<<i<<"]["<<j<<"] = "<<a[i][j]<<" // ";
   	  	cout << *(p[i]+j) << ", "<< *(*(p+i)+j) << " // ";
   	  	cout << *(a[i]+j) << ", "<< *(*(a+i)+j) << endl;
   	  	
   	  	cout << "a["<<i<<"]["<<j<<"] = "<<&a[i][j]<< endl;
   	  }
   }
   
   return 0; 
}
