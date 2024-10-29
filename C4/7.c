#include<stdio.h>
#include<float.h>
int main()
{
    double a = 1.0/3.0;
    float b = 1.0/3.0;
    printf("%0.6f\n",a);
    printf("%0.6lf\n",a);

    printf("%0.12f\n",a);
    printf("%0.12lf\n",a);

    printf("%0.16f\n",a);
    printf("%0.16lf\n",a);

    printf("%d %d\n",FLT_DIG,DBL_DIG);

    return 0;
}
