#include <iostream>
using namespace std;
 
float divide(float a, float b){
  if(b == 0)
    throw 1;
  float res = a / b;
  return res;
}
 
 
int main(){
  float first_number;
  float second_number;
  cin >> first_number >> second_number;
  try{
    float result = divide(first_number, second_number);
    cout << "Res: " << result;
  }
  catch(int){
    cout << "Ошибка, деление на ноль";
  }
}
