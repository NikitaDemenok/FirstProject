#include <iostream>
using namespace std;

int sum(int n, int* array1, int* array2) {
for (int i = 0; i < n; i++) {
cout << array1[i] + array2[i] << ' ';
}
cout << endl;
return 0;
}

int razn(int n, int* array1, int* array2) {
for (int i = 0; i < n; i++) {
cout << array1[i] - array2[i] << ' ';
}
cout << endl;
return 0;
}

int main()
{
int n;
cin >> n;
int s = 0;
int* array1 = new int[n];
int* array2 = new int[n];
char sign;
for (int i = 0; i < n; i++) {
cin >> array1[i];
}
cin >> sign;
for (int i = 0; i < n; i++) {
cin >> array2[i];
}
if (sign == '-') {
cout << razn(n, array1, array2);
}
if (sign == '+') {
cout << sum(n, array1, array2);
}
delete[] array1;
delete[] array2;
}
