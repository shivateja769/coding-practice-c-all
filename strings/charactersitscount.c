#include <stdio.h>
#include <stdlib.h>

int main(){
char a[]="shiva teja";

int i=0;
int count[26]={0};

while(a[i]!='\0'){

if(a[i]>='a'&&a[i]<='z'){
	count[a[i]-'a']++;
}
i++;

}

for(i=0;i<26;i++){
if(count[i]>0){
printf("%c:%d\n",i+'a',count[i]);
}
}



}
