#include <stdio.h>


int main() {
    int i, n, count = 0;
    printf("Enter the number: \n");
    scanf("%d", &n);

    for ( i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count ++;
            break;
        }
        
    }
    if ( n > 1 && count == 0)
    {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }
    return 0;    
}