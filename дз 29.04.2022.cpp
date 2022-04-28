#include <iostream>
#include <string>
using namespace std;
void puzir(int size, int* arr) {
int t = 0;
for (int i = 0; i < size - 1; i++) {
for (int j = 0; j < size - i - 1; j++) {
if (arr[j] > arr[j + 1]) {
t = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = t;
}
}
}
}
int main()
{
int* arr;
int size;
cout << "Введите размер массива" << endl;
cin >> size;
if (size <= 0) {
cerr << "Положительные числа" << endl;
return 1;
}
arr = new int[size];
for (int i = 0; i < size; i++) {
cout << "Введите элемент массива" << endl << "arr[" << i << "] = ";
cin >> arr[i];
}
/*int t;
for (int i = 0; i < size - 1; i++) {
for (int j = 0; j < size - i - 1; j++) {
if (arr[j] > arr[j + 1]) {
t = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = t;
}
}
} /**/
puzir(size, arr);
for (int i = 0; i < size; i++) {
cout << arr[i] << " ";
}
cout << endl;
delete[] arr;
return 0;
}
