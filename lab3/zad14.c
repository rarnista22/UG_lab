#include <stdio.h>

int main()  
{  
    float wartosc, radiany;  
    printf("Podaj wartość kąta w stopniach: \n");  
    scanf("%f", &wartosc);  
  
    radiany = wartosc * 2 * ( 3.14 / 360.0 );  
  
    printf("Wartość w radianach wynosi: %fPi\n", radiany);  
} 