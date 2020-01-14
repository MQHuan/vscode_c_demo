#include <stdio.h>
struct hello
{
    /* data */
    int a;
    int b;
    int c : 1;
    int d : 1;
    char index;
};

int main() {
    int i;
    struct hello a;
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(long long));
    printf("%d\n", sizeof(struct hello));
    printf("hello, world!\n");
    scanf("%d", i);
    return 0;
}
