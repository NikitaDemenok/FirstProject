#include <iostream>
 
int main () {
    
    int x, y;
    char xi;
    std::cin >> xi >> y;
    
    if (xi == 'a') x = 1;
    if (xi == 'b') x = 2;
    if (xi == 'c') x = 3;
    if (xi == 'd') x = 4;
    if (xi == 'e') x = 5;
    if (xi == 'f') x = 6;
    if (xi == 'g') x = 7;
    if (xi == 'h') x = 8;
    
    
    
    char a[8][8];
 
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            a[i][j] = '.';
            //std::cout << a[i][j] << " ";
        }
        //std::cout << std::endl;
    } 
    a[x][y] = 'K';
    
    
        
    for (int i = 0; i < 8; i++) {
        for (int j = 7; j != -1; j--) {
            if (abs(x-i)*abs(j-y) == 2) a[i][j]='*';
            if (j!=8) std::cout << a[i][j] << " "; else
            std::cout << a[i][j];
        }
        if (i!=8) std::cout << std::endl;
    }        
}
