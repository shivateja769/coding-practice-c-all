#include <stdio.h>

int main(){

int n=10;


int i;
int a=0,b=1;

printf("%d ",a);
printf("%d ",b);


for(i=2;i<n;i++){

  int c=a+b;
  a=b;
  b=c;
  
  printf("%d ",c);



}




}
