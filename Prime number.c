// # include <stdio.h>
// int main (){
//     int n;
//     int flag=0;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     for (int i = 2; i < n/2; i++)
//     {
//         if(n%2==0){
//             flag =1;
//             break;
//         }
//     }

//     if (flag==0)
//     {
//         printf("Number is prime %d",n);
//     }
//     else
//     {
//         printf("Number is not prime %d",n);
//     }
    
//     return 0;
// }



// solve to the function

# include<stdio.h>
void prime(int n);
int main(){
    int n;
    printf("Enter the number  : ");
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int n){
   
    int flag=0;
    for (int  i = 2; i <n/2; i++)
    {
        if(n%2==0){
            flag=1;
            break;
        }
    }

    if (n%2==0)
    {
        printf("The number is not prime = %d",n);
    }

    else
    {
        printf("The number is prime = %d",n);
    }
    
    
}