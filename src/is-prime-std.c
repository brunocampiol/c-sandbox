#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <time.h>
#include <unistd.h>

clock_t clock_start;

bool IsPrime(unsigned long long int n)
{
    if (n == 2 || n == 3)
        return true;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int main()
{
    printf("Starting to find prime numbers\n");
    clock_start = clock();

    // 18,446,744,073,709,551,615 - 50,000,000,000,000,000,000
    // 50000000000000000000 => 0xB1A2BC2EC50000ull
    // for (unsigned long long int i = INT_MAX; i < ULLONG_MAX; i++)

    for (unsigned long long int i = 0xB1A2BC2EC50000ull; i < ULLONG_MAX; i++)
    {
        if (IsPrime(i))
        {
            clock_t clock_end = clock();
            double elapsed = (double)(clock_end - clock_start) / (double)CLOCKS_PER_SEC;
            printf("%llu is prime - Elapsed time %.2f\n", i, elapsed);
            // sleep(1);
        }
    }

    return 0;
}