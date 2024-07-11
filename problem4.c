#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int get_digits(int num);
bool is_num_palindrome(int num);

int main(void)
{
    int num = -1;
    const int upper = 999, lower = 100;
    for (int i=upper; i>=lower; i--)
    {
        for (int j=upper; j>=lower; j--)
        {
            if (is_num_palindrome(i*j))
            {
                printf("i=%i, j=%i, i*j=%i\n", i, j, i*j);
                if (i*j > num) num = i*j;
            }
        }
    }
    printf("biggest: %i\n", num);
    return 0;
}

// O(n)
bool is_num_palindrome(int num)
{
    int size = get_digits(num);
    int arr[size];

    // create array
    int tmp, i = 0;
    while (num > 0)
    {
        tmp = num%10;
        arr[i] = tmp;
        num /= 10;
        i++;
    }

    // check array
    for (int j=0; j<size; j++)
    {
        if (arr[j] != arr[size-j-1])
            return false;
    }

    return true;
}

int get_digits(int num)
{
    int count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    return count;
}
