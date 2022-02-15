#include <stdio.h>
#include <stdlib.h>


int cube(int x)
{
    int result;

    result=x*x*x;

    return result;
}


int main()
{
    int num;

    printf("Find the cube of the entered number:\n");
    scanf("%d",&num);

    printf("The cube of %d is %d",num,cube(num));


    return 0;
}
