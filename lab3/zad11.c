#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Podaj bok a: ");
    scanf("%d", &a);
    printf("Podaj bok b: ");
    scanf("%d", &b);
    printf("Podaj bok c: ");
    scanf("%d", &c);
    if((a*a+b*b)==c*c){
        printf("Z podanych długości boków można utworzyć trójkąt prostokątny!");
    }
    else{
        printf("Z podanych długości NIE można utowrzyć trójkąta prostokątnego!");
    }
}