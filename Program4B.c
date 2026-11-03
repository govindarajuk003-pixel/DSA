#include <stdio.h>
#include <stdlib.h>

void towerofHanoi(int n, char source, char dest, char temp)
{
    if (n > 1)
    {
        towerofHanoi(n-1, source, temp, dest);
        printf("\n move %d disc destination %c to %c",
               n, source, dest);

        towerofHanoi(n-1, temp, dest, source);
    }
    else
    {
        printf("\n move %d disc from %c to %c",
               n, source, dest);
    }
}

int main()
{
    int n;
    printf("\n Read no. of discs : ");
    scanf("%d", &n);

    towerofHanoi(n, 'S', 'D', 'T');

    return 0;
}
