#include <stdio.h>
int main()
{
    int a,b,c=0,i;
    printf("Podaj a: ");
    scanf("%d", &a);
    printf("Podaj b: ");
    scanf("%d", &b);
    for(i=1;i<b;i++){
        c=a*i;
        i++;
    }
    printf("%d",c);
}