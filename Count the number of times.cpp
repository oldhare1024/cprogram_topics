#include<stdio.h>
int main()
{
    long long total = 0,current = 0;
    int count = 0;
    scanf("%d", &count);
    for(int i = 0; i < count; ++i) {
        scanf("%lld", &current);
        total ^= current;
    }
    printf("%lld",total);
    return 0;
}

