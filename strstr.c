#include <stdio.h>

int main(){

char a[]="helloworld";

char b[]="lows";

int i=0,j=0,k;

while(a[i]!='\0'){

k=i;
j=0;

while(a[k]==b[j]&&b[j]!='\0'){
k++;
j++;
}
if(b[j]=='\0'){
printf("present");
return 0;

}
i++;

}
printf("Not present");




}
