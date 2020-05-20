#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b = 0;
    char s[100];
    float c,d =0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%f",&c);
    scanf("%f", &d);
   // scanf("%s", &s);


	printf("%d %d\n", (a+b), (a-b));
    printf("%.1f %.1f", (c+d), (c-d));
    //printf("%s",s);
    return 0;
}
