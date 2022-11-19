#include <stdio.h>
#include <math.h>
int main()
{
    int x,liczba,licznik=0;
    for(int i=0;i<=3;i++)
    {
        printf("Odgadnij liczbę z zakresu 1-5: ");
        scanf("%d", &liczba);
            if(liczba>0&&liczba<6)
        {
            if(liczba!=x)
                {
                    printf("To nie jest ta liczba.\n");
                    licznik++;
                    if(licznik==4)
                    {
                        printf("Skonczyły Ci się próby.\n");
                    }
                }
            else if(liczba==x)
                {   
                    printf("Odgadłeś!\n");
                }
        }
        }
}