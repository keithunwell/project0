#include <stdio.h>

int main()
{
    int x = 10, y = 10;
    printf("x=%d\n", x);
    printf("++x is=%d\n", ++x);
    printf("x=%d\n\n", x);

    printf("y=%d\n", y);
    printf("y++ is=%d\n", y++); //计算机看到y就会先执行y
    printf("y=%d\n", y);

    return 0;
}