#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    if(x > y) {
        printf("%d is greater\n", x);
    }

    /// x < y
    if(y > x) {
        printf("%d is greater\n", y);
    }

    return 0;
}
