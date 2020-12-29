#include <iostream>
using namespace std;

int main(){
  int array[3] = {5 ,10 ,15};
  cout <<"&array    :: "<< &array[0] << ", " << &array[1] << ", " << &array[2] << endl;
  
  int *pt;
  cout <<"&pt       :: "<< &pt[0] << ", " << &pt[1] << ", " << &pt[2] << endl;
  
  
  pt = array;
  
  cout <<"pt        :: "<< pt[0] << ", " << pt[1] << ", " << pt[2] << endl;
  cout <<"array     :: "<< *array << ", " << *(array + 1) << ", " << *(array + 2) << endl;
  //cout <<"*pt :: "<< *pt << ", " << *(pt + 1) << ", " << *(pt + 2) << endl;
  
  cout <<"&array    :: "<< &array[0] << ", " << &array[1] << ", " << &array[2] << endl;
  cout <<"&pt       :: "<< &pt[0] << ", " << &pt[1] << ", " << &pt[2] <<  endl;
  
  return 0;
}
