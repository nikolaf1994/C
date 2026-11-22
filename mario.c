#include <stdio.h>
#include <cs50.h>

int n;

int main (void)
{
    while (true) {
        n = get_int("Rows ");

        if (n > 1 && n <= 8) {
            break;
        } else {
            printf("N must be in [2, 8]!\n");
        }
    } 
     
    for (int i = 0; i <= n; i++ ) 
    {
        for (int j = 0; j < 2 * n + 2; j++) {
            if (j < n - i )  {
                printf(" ");
            } else if (j >= (n - i) && j < n) {
                printf("#");
            } else if (j == n || j == n + 1) {
                printf(" ");
            } else if (j > n + 1 && j < n + 2 + i) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
        



