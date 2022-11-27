#include <stdio.h>
int main()
{
    int index,i,T[]={1,2,3,4,5};
    for(i=0;i<(sizeof T / sizeof T[2]);i++){
        index = T[i] * T[i];
        printf("%d\n", index);
    }
}