#include <stdio.h>

int main(){
    int a, b,i;
    a = 0, b = 0;
    //scanf("%d", &T);
    while(scanf("%d %d", &a, &b)!=EOF) {
        printf("%d\n", a + b);
    }
    return 0;
}