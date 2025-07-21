#include <stdio.h>

int main(){


int n=1234;

int sum=0;

while(n>0){

sum=sum+n%10;
n=n/10;


}

printf("%d",sum);

}
