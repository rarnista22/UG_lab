#include <stdio.h>
int main()
{
    int n;
    printf("Podaj n: ");
    scanf("%d", &n);
    int T[n];
    for(int i=0;i<n;i++){
        printf("Podaj liczbę: ");
        scanf("%d", &T[i]);
    }
    printf("Zawartość tablicy: ");
    for(int i=0;i<n;i++){
        printf("%d ", T[i]);
    }
    printf("\n");
}