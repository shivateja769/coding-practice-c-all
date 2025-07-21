#include <stdio.h>

int main(){

int a=1,b=2,c=3;
int d;

if(a>b&&a>c){
  d=a;
}

else if(b>c&&b>a){

d=b;

}
else{

d=c;


}

printf("%d",d);


}
