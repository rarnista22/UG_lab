#include <stdio.h>
int main()
{
    int znak;
    printf("Dla 0 radianów wybierz 1\n");
    printf("Dla 1/6 Pi rad wybierz 2\n");
    printf("Dla 1/4 Pi rad wybierz 3\n");
    printf("Dla 1/3 Pi rad wybierz 4\n");
    printf("Dla 1/2 Pi rad wybierz 5\n");
    scanf("%d", &znak);
    if(znak==1){
        printf("0 radianów to 0 stopni.\n");
    }
    else if(znak==2){
        printf("1/6 Pi rad to 30 stopni.\n");
    }
    else if(znak==3){
        printf("1/4 Pi rad to 45 stopni.\n");
    }
    else if(znak==4){
        printf("1/3 Pi rad to 60 stopni.\n");
    }
    else if(znak==5){
        printf("1/2 Pi rad to 90 stopni.\n");
    }
    else{
        printf("Wybrano nieprawidłową opcję!\n");
    }
}