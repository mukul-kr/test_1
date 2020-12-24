#include<stdio.h>

void say_hello(int num_times)
{
    int k;
    for(k=0;k<num_times;k++)
        printf("hello\n");
}

int main()
{
    void(*funptr)(int);
    funptr = say_hello;
    funptr(3);

    return 0;
}