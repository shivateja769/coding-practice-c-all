#include <stdio.h>

int main(){

int a=1,b=2,c=3, d;

if(a>b&&a>c){

  if(b>c){
  d=b;
  
  }
  else{
  d=c;
  
  }

}
else if(b>c&&b>a){
  
  if(c>a)
  d=c;
  else
  d=a;
}
else{

if(a>b)
d=a;
else
d=b;


}


printf("%d",d);

}
