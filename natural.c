// Question 5 : Given a natural number n, print all distinct divisors of it

#include<stdio.h>
void natural(int n){
  for (int i = 1; i <=100; i++)
  {
    if(n%i==0){
        printf("%d \n",i);
    }
  }
  
}
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    natural(n);

    return 0;
}

