#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Podaj pierwszą liczbę: ");
    scanf("%d", &a);
    printf("Podaj drugą liczbę: ");
    scanf("%d", &b);
    printf("Podaj trzecią liczbę: ");
    scanf("%d", &c);
    if(a>b){
        if(a>c){
            printf("Liczba %d jest największa\n", a);
        }
        else{
            printf("Liczba %d jest największa\n", c);
        }
    }
    if(b>a){
        if(b>c){
            printf("Liczba %d jest największa\n", b);
        }
        else{
            printf("Liczba %d jest największa\n", c);
        }
    }
    else{
        printf("Podane liczby są równe!\n");
    }
    return 0;
}