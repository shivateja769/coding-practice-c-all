#include <stdio.h>

int main(){

int a=2587;

char b[10];

int i=0,j=0,temp;

while(a>0){

b[i]=a%10+48;
a=a/10;
i++;
}
b[i]='\0';

i=i-1;

while(j<i){
char temp=b[i];
b[i]=b[j];
b[j]=temp;

i--,j++;
}

printf("%s",b);






}
