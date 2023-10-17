#include <stdio.h>
int main() {
    int a, b, x, y, t, hcf, lcm;
    printf("Enter 1st integer:");
    scanf("%d", &x);
    printf("Enter 2nd integer:");
    scanf("%d", &y);

    a = x;
    b = y;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    hcf = a;
    lcm = (x*y)/hcf;
    printf("HCF of %d and %d = %d\n", x, y, hcf);
    printf("LCM of %d and %d = %d\n", x, y, lcm);

    return 0;
}
