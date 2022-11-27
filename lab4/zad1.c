#include <stdio.h>
int main()
{
    int i,n,suma=0,kwadrat=1;
    printf("Podaj n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        kwadrat=i*i;
        suma+=kwadrat;
    }
    printf("Suma kwadratów: %d \n", suma);
}