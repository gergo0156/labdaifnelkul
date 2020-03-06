#include <stdlib.h>
int
main (void)
{
    int xj = 0, xk = 0, yj = 0, yk = 0;
    int mx = 80 * 2, my = 24 * 2;

    for (;;)
    {
        xj = (xj - 1) % mx;
        xk = (xk + 1) % mx;

        yj = (yj - 1) % my;
        yk = (yk + 1) % my;

        printf ("%d %d\n", abs ((yj + (my - yk)) / 2),
                abs ((xj + (mx - xk)) / 2));

    }
    return 0;
}
