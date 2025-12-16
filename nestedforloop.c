#include <stdio.h>

int main() {
    int N,i,start,num;
    scanf("%d", &N);

    for( i = 0; i < N; i++) {
        int start = N - i;
        for( num = start; num <= N; num++) {
            printf("%d ", num);
        }
        printf("\n");
    }

    return 0;
}

