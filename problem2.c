#include <stdio.h>

int main(void)
{
    int sum = 0;
    int x = 0, y = 1, z = 1;
    while (z < 4000000)
    {
        z = x + y;
        if (z % 2 == 0)
        {
            sum += z;
        }
        x = y;
        y = z;
    }
    printf("sum: %i\n", sum);
}
