// Question no 4 : Program to check if a number is Positive, Negative, Odd, Even, Zero

# include <stdio.h>
 void checknum(int n);
int main(){

    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    checknum(n);
    return 0;
}

void checknum(int n){
    if (n<0)
    {
        printf("number is negative %d \n",n);
        if (n % 2==0)
        {
            printf("Number is even %d\n",n);
        }
        else
        {
            printf("number is odd %d\n",n);
        }
        
    }

    else if  (n>0)
    {
        printf("The number is positive %d\n",n);
        if (n % 2==0)
        {
            printf("Number id even %d\n",n);
        }
        else
        {
            printf("number is odd %d\n",n);
        }

    }
     
    else
    {
        printf("the number is zero %d\n",n);
    }

    
    
    
    
}