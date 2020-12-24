#include<stdio.h>
int main()
{
    int n;
    printf("Input your number\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\nThe number %d is an even number",n);
    }
    else
    {
        printf("\nThe number %d is an odd number",n);
    }
    return 0;
}