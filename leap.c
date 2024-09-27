# include<stdio.h>
int main(){
    int n;
    printf("Enter the  number");
    scanf("%d",&n);
    if (n % 4 == 0 && (n % 100 != 0 || n % 400 == 0))
    {
        printf("Number is leap yaer:%d\n",n);
    }

    else
    {
        printf("Number is not leap year %d",n);
    }
    
    
    return 0;
}