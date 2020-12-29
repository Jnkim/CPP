#include <iostream>
using namespace std;
void iswap(void *px , void *py);
void dswap(void *px , void *py);

int main(){
	int x = 3 , y = 7; 
	cout << "swap 호출전 , x : "<< x << " , y : "<< y << endl;
	iswap(&x , &y); 
	cout << "swap 호출후 , x : "<< x << " , y : "<< y << endl;
	
	double dx = 2.4 , dy = 77.88;
	cout << "swap 호출전 , dx : "<< dx << " , dy : "<< dy << endl;
	dswap(&dx , &dy);
	cout << "swap 호출후 , dx : "<< dx << " , dy : "<< dy << endl;
	return 0;  
}

void iswap(void *px , void *py){
	int temp;
	temp = *(int *)px; // 캐스트 변환하여 대입변환 
	
	*(int *)px = *(int *)py;
	*(int *)py = temp;
}

void dswap(void *px , void *py){
	double temp;
	temp = *(double *)px; // 캐스트 변환하여 대입변환 
	
	*(double *)px = *(double *)py;
	*(double *)py = temp;
}
