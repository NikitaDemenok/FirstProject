#include <iostream>
using namespace std;

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
for (int i = 0; i < n; i++) {
cout << array1[i] - array2[i] << ' ';
}
}
if (sign == '+') {
for (int i = 0; i < n; i++) {
cout << array1[i] + array2[i] << ' ';
}
}
delete[] array1;
delete[] array2;
}
