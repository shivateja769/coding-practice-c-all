#include <stdio.h>

int main(){

char a[]="-1234";

int sign=0;
int i=0;
int result=0;

if(a[0]=='-'){
sign=1;
i++;
}

while(a[i]!='\0'){
result=result*10+(a[i]-48);
i++;
}

if(sign){
result=-result;

}
printf("%d",result);



}
