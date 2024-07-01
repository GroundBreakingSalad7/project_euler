#include <stdio.h>

int main(int argc, char *argv[])
{
    const int N = 1000;
    int sum = 0;
    printf("nums: ");
    for (int i=1; i<N; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            printf("%i, ", i);
            sum += i;
        }
    }
    printf("\nsum is: %i\n", sum);
    return 0;
}
