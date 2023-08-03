#include <stdio.h>

void checkEvenOdd(int N)
{
    int r = N %2;
    if (r == 0)
    {
        printf("%d is Even\n",N);
    }
    else
    {
        printf("odd");
    }
}

int main()
{
    int N = 100;
    checkEvenOdd(N);
    return 0
};