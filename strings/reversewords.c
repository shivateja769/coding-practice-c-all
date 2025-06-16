#include <stdio.h>
#include <string.h>

void reverse(char *a,int i,int j){
 char temp;
 while(i<j){
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;

 i++;j--;
 }
}



int main(){
char a[]="shiva teja";
int i=0;
int n=strlen(a);

reverse(a,i,n-1);

while(i<n){

	if(a[i]!=' '){
	
	int start =i;

	while(i<n&&a[i]!=' '){
		i++;
	}
	int end =i-1;
	reverse(a,start,end);
	
	}
	else{
	i++;
	}
}

printf("%s",a);






}
