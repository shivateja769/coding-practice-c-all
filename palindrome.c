#include <stdio.h>

int main(){

int n=121;

int temp=n,rev=0;

while(n>0){

rev=rev*10+n%10;
n=n/10;
}

if(rev==temp){

printf("palindrome");

}
else{

printf("Not palindrome");

}




}
