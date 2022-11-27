#include <stdio.h>
int main()
{
    int n,i,suma=0;
    printf("Podaj n: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(n%i == 0){
            suma+=1;
        }
    }
    if(suma==2){
        printf("Jest to liczba pierwsza!\n");
    }
    else{
        printf("Nie jest to liczba pierwsza!\n");
    }
}