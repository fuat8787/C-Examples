#include<stdio.h>
#include<string.h>
int main(){
   char str[25];
   int i;
   printf("string girin: "); scanf("%s",str);
   for(i=0;i<=strlen(str);i++){
      if(str[i]>=65&&str[i]<=90)
         str[i]=str[i]+32; }
   printf("\nkucuk harfli string: %s",str);
   return 0;}
