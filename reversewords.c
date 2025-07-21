#include <stdio.h>
#include <string.h>

char *reverse(char *a,int i,int j){

while(i<j){

char temp=a[i];
a[i]=a[j];
a[j]=temp;
i++,j--;

}
return a;

}


int main(){

char a[]="my name is shiva";

int n=strlen(a);

reverse(a,0,n-1);

int start=0;

for(int i=0;i<=n;i++){

if(a[i]==' '||a[i]=='\0'){
  
    reverse(a,start,i-1);
    start=i+1;
}


}

printf("%s",a);



}
