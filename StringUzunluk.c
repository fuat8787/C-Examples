#include <stdio.h>
int main()
{
    char str[100],i;
    printf("string gir: \n"); scanf("%s",str);
    for(i=0; str[i]!='\0'; ++i);
       printf("\nstringin uzunlugu: %d",i);
    return 0;}
