#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    if(x > y) {
        printf("%d is greater\n", x);
    } else if (y > x) {
        printf("%d is greater\n", y);
    } else {
        printf("Both are equal");
    }

    return 0;
}
