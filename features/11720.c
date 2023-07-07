#include <stdio.h>

int main(void) {

    int n, sum = 0;

    scanf("%d", &n);

    char num[100];//if you get large numbers in int, there will be an overflow

    scanf("%s", num);

    for (int i = 0; i < n; i++) sum += num[i] - '0';// subtract the ascii code for 0

    printf("%d", sum);
}