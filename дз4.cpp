#include <iostream>

using namespace std;

int main()
{
int n;
cout << "Введите число элементов в массиве:" << endl;
cin >> n;
int array[n];
cout << "Введите элементы массива" << endl;
for (int i = 0; i < n; i++){
cin >> array[i];
}
int min = array[0];
int Nmin = 0;
int max = array[0];
int Nmax = 0;
for (int i = 0; i < n; i++){
if (array[i] < min){
min = array[i];
Nmin = i;
}
else{
max = array[i];
Nmax = i;
}
}
array[Nmin] = max;
array[Nmax] = min;
cout << "Преобразованный массив:" << endl;
for (int i = 0; i < n; i++){
cout << array[i] << ' ' ;
}
}
