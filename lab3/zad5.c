#include <stdio.h>
int main()
{
    int kod;
    printf("Podaj kod ASCII: ");
    scanf("%d", &kod);
    if(kod>=65 && kod<=90 || kod>=97 && kod<=122){
        printf("Podany kod ASCII jest literą alfabetu!\n");
    }
    else{
        printf("Podany kod ASCII nie jest literą alfabetu!\n");
    }
}