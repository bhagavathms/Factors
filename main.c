#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,ch;
    printf("     ***************************");
    printf("\n\t       Menu");
    printf("\n\t1.Factors of Number");
    printf("\n\t2.Factorial Of Number");
    printf("\n");
    printf("\n\t  Enter Number :");
    scanf("%d",&n);
    printf("\tEnter Choice(1/2):");
    scanf("%d",&ch);
    printf("\n");
    printf("     ***************************");
    printf("\n");
    printf("\n");
    if (ch==1){
        printf("     To find Factors of a Number");
        printf("\n");
        printf("\n    Factors of %d :",n);
        for (int i=1;i<=n;i=i+1){
            if (n%i==0){
                printf(" %d",i);}
        }
    }
    if (ch==2){
        int mul=1;
        printf("    To find Factorial of a Number");
        for (n;n>0;n=n-1){
            mul=mul*n;
        }
    printf("\n");
    printf("\n\t   Factorial=%d",mul);
    }
    printf("\n");

}
