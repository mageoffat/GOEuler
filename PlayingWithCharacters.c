#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c;
    char s[100];
    char d[100];

    scanf("%c", &c);
    printf("%c\n", c);
    scanf("%s", s);
    printf("%s\n", s);
    scanf("\n");
    scanf("%[^\n]%*c", d);
    printf("%s", d);
    return 0;
}
