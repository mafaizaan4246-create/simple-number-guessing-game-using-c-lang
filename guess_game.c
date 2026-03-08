#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int a,b;
int f=0;
srand(time(0));
a=rand() % 100+1;
    for(;;){
    printf("\n enter a no: ");
    scanf("%d",&b);
    f++;
if (b==a){
printf("\n guessed it right! you guessed it in %d attempts",f);
break;
}
else if (a>b){
printf("\n higher the value");
}
else if(a<b){
printf("\n lower the value");
}
}
return 0;
}
