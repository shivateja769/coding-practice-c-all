#include <stdio.h>

int main(){
    
    int a[]={9,6,1,2,0,3,5};
    
    int n=sizeof(a)/sizeof(a[0]);
    
    int i,j;
    
    for(i=0;i<n;i++){
        
        for(j=0;j<n-i-1;j++){
            
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
            }
        }
        
        
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
        
    }
    
    
}
