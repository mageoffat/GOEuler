#include <stdio.h>

void update(int *a,int *b) {
    int val = 0;
    val = *a;
    *a = val+*b;
    *b = abs(val-*b); 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
