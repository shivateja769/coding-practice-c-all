#include <stdio.h>
#include <string.h>

int main(){

char a[]="madams";

int i=0,j=strlen(a)-1;

while(i<j){
if(a[i]!=a[j]){

break;
}
i++,j--;


}

if(i>=j)
printf("palindrome");
else
printf("not palindrome");




}
