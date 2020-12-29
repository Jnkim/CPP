#include <iostream>
using namespace std;
void iswap(void *px , void *py);
void dswap(void *px , void *py);

int main(){
	int x = 3 , y = 7; 
	cout << "swap ȣ���� , x : "<< x << " , y : "<< y << endl;
	iswap(&x , &y); 
	cout << "swap ȣ���� , x : "<< x << " , y : "<< y << endl;
	
	double dx = 2.4 , dy = 77.88;
	cout << "swap ȣ���� , dx : "<< dx << " , dy : "<< dy << endl;
	dswap(&dx , &dy);
	cout << "swap ȣ���� , dx : "<< dx << " , dy : "<< dy << endl;
	return 0;  
}

void iswap(void *px , void *py){
	int temp;
	temp = *(int *)px; // ĳ��Ʈ ��ȯ�Ͽ� ���Ժ�ȯ 
	
	*(int *)px = *(int *)py;
	*(int *)py = temp;
}

void dswap(void *px , void *py){
	double temp;
	temp = *(double *)px; // ĳ��Ʈ ��ȯ�Ͽ� ���Ժ�ȯ 
	
	*(double *)px = *(double *)py;
	*(double *)py = temp;
}
