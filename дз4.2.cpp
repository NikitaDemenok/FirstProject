#include <iostream>
using namespace std;

int main(){
cout << "Введите размерность матрицы (столбцы, строки):" << endl;
int column, row;
cin >> column;
cin >> row;
int array[column][row];
cout << "Введите элементы матрицы: " << endl;
for(int str = 0; str < column; str++){
for(int stl = 0; stl < row; stl++){
cout <<"Элемент [" << str + 1 << "][" << stl + 1 << "]: ";
cin >> array[str][stl];
}
}
int sum = 0;
for(int str = 0; str < column; str++){
for(int stl = 0; stl < row; stl++){
if(array[str][stl] > 0)
sum += 1;
}
}
cout << "sum: " << sum;
}
