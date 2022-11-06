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
    if((a+b)>c){
        printf("Z podanych boków można utworzyć trójkąt!\n");
    }
    else{
        printf("Z podanych boków nie można utworzyć trójkąta!\n");
    }
}