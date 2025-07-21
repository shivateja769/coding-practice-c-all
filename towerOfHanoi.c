#include <stdio.h>



void towerOfHanoi(int n,char source,char destination,char auxliary){


if(n==1){

  printf("Move disk 1 from %c to %c\n",source,destination);
  return;
}

towerOfHanoi(n-1,source,auxliary,destination);

printf("move %d disk from %c to %c\n",n,source,destination);

towerOfHanoi(n-1,auxliary,destination,source);

}


int main()
{


int n=3;

towerOfHanoi(n,'S','D','A');





}
