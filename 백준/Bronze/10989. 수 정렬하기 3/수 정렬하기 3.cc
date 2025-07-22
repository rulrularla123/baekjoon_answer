#include <stdio.h>

int count[10001];

int main(void)
{
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        count[x]++;
    }

    for (int i = 1; i <= 10000; i++)
    {
        while (count[i]--)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}