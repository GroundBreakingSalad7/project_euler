#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function prototypes
bool is_prime(long unsigned n);

int main(void)
{
    // long num = 13195;
    long num = 600851475143;
    printf("num = %li\n", num);
    while (!is_prime(num))
    {
        for (int i=1; i<sqrtl(num); i++)
            if (num % i == 0) 
                num /= i;
    }
    printf("biggest prime factor: %i\n", num);
    return 0;
}

// O(sqrt n)
bool is_prime(long unsigned n)
{
    for (long i=sqrt(n); i>1; i--) {
        if (n % i == 0)
            return false;
    }
    return true;
}
