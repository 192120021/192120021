#include<stdio.h>
 
void findFactorial(int,int *); //function
int main(){
 int i,factorial,n;
 
 printf("Enter a number: ");
 scanf("%d",&n);
 
 findFactorial(n,&factorial);

 
 return 0;
}
 
void findFactorial(int n,int *factorial){
 int i;
 
 *factorial =1;
 
 for(i=1;i<=n;i++)
 *factorial=*factorial*i;
}