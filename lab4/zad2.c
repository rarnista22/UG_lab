#include <stdio.h>
int main()
{
    int a,b,i,p;
    printf("Podaj a: ");
    scanf("%d", &a);
    printf("Podaj b: ");
    scanf("%d", &b);
    p = a;
    for(i=1;i<b;i++){
        p=p*a;
    }
    printf("Wynik: %d\n", p);
}