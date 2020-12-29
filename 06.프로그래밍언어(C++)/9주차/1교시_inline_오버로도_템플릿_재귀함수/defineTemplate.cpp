#include <iostream>
#include <cstring>
using namespace std;

/*
 명시적 템플릿 함수 :
 
 * 특정 데이터 타입에 대해서만 적용되도록 정의된 템플릿 함수
 * 구조체  멤버 중에서 특정 멤버는 그대로 유지하고 다른 멤버에 대해서만 변경하고자 할경우 명시적 템플릿을 사용한다. 
 * 명시적 특수템플릿 함수 , 템플릿함수 , 일반함수의 이름이 같은 오버로딩인 경우 컴파일러가 선택하는 우선 순위는  
   명시적템플릿함수 , 템플릿함수 , 일반함수 순이다.  
*/

// 템플릿 함수 
template <class T> void Swap(T &px , T &py);  



struct Dept{
	int no;
	char name[20];
	char loc[80];
};

// 명시적 템플릿함수 : 함수의 시그니처가 template 으로 시작하고 ,  함수명(Swap)과 가인수( Dept &px , Dept &py )의 시작 사이에 구조체( <Dept> )를 명시한 형태 
// (가인수및 반환형 형태가  구조체로 명시될수있다. ) 
template <> void Swap<Dept>(Dept &px , Dept &py); 
 
 
int main(){
	int x = 3 , y =7; 
	cout << "Swap 호출 전 , x : "<< x << ", y : " << y << "\n"; 
	Swap(x , y);
	cout << "Swap 호출 후 , x : "<< x << ", y : " << y << "\n\n"; 
	
	
	Dept dt1 = {101 , "인사과", "서울"}; 
	Dept dt2 = {102 , "생산과", "부천"}; 
    cout << "Swap 호출 전 부서1 : "<< dt1.no<<" , "<< dt1.name <<" , "<< dt1.loc << endl; 
	Swap(dt1 , dt2);
	cout << "Swap 호출 후 부서1 : "<< dt1.no<<" , "<< dt1.name <<" , "<< dt1.loc << endl; 
	
	return 0; 
} 

template <class T> void Swap(T &px , T &py){ // 템플릿 함수 
    cout << "템플릿 함수 호출 "<< endl;
 	T temp = px;
 	px = py; 
 	py = temp;
}


template <> void Swap<Dept>(Dept &px,Dept &py) {  // 명시적 템플릿 함수 
	// Dept라는 특정 구초제 형식을 매개 변수로 가질 경우 적용되도록 정의왼 특수 템플릿 함수
	cout << "명시적 템플릿 함수 호출 "<< endl;
	px.no = py.no;   
	strcpy(px.name , py.name) ;
}
