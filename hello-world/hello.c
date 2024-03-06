#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = 1;
    int y = 10;

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is more than y\n");
    }
    else if (x == y)
    {
        printf("x is equal to y\n");
    }

    return 0;
}
