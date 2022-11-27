#include <stdio.h>
int pierwsza(int n)
{
    int i,suma=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(n%i == 0){
            suma+=1;
        }
    }
    if(suma==2){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int a,b;
    printf("Podaj a: ");
    scanf("%d", &a);
    printf("Podaj b: ");
    scanf("%d", &b);
    for(int i=0; i<b; i++){
        a++;
        while(!pierwsza(a)){
            a++;
        }
        printf("%d", a);
    }
}