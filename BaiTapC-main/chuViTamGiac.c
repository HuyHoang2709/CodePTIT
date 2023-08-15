#include <stdio.h>
#include <math.h>

struct point 
{
    double x, y;
};

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        struct point a, b, c;
        double ab, bc, ca;
        scanf("%lf %lf %lf %lf %lf %lf", &a.x, &a.y, &b.x, &b.y, &c.x, &c.y);
        ab = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
        bc = sqrt(pow(c.x - b.x, 2) + pow(c.y - b.y, 2));
        ca = sqrt(pow(c.x - a.x, 2) + pow(c.y - a.y, 2));
        if(ab + bc <= ca || ab + ca <= bc || bc + ca <= ab)
        {
            printf("INVALID\n");
        }
        else 
        {
            printf("%.3lf\n", ab + bc + ca);
        }
    }
    return 0;
}