#include <stdio.h>
int main()
{
    int day,month,year;
    printf("Podaj dzień: ");
    scanf("%d", &day);
    printf("Podaj miesiąc: ");
    scanf("%d", &month);
    printf("Podaj rok: ");
    scanf("%d", &year);
    if(day>0 && day<=31){
        if(month>0 && month<=12){
            if(year>0){
                printf("Data %d-%d-%d jest poprawna!\n", day,month,year);
            }
            else{
                printf("Z podanych liczb nie można utworzyć poprawnej daty!\n");

            }
        }
        else{
            printf("Z podanych liczb nie można utworzyć poprawnej daty!\n");

        }
    }
    else{
        printf("Z podanych liczb nie można utworzyć poprawnej daty!\n");
    }
}