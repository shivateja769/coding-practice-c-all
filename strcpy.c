#include <stdio.h>
#include <string.h>
int main(){

char a[]="abcd";
char b[strlen(a)];
int i=0;
while(a[i]!='\0'){

b[i]=a[i];
i++;
}

printf("%s",b);



}
