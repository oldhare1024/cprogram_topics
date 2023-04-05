#include<stdio.h>
int main()
{
    int man,woman,kid;
    for(man=1;man<=8;man++)
    {
        for(woman=1;woman<=10;woman++)
        {
            for(kid=1;kid<=58;kid++)
            {
                if(man*4+woman*3+kid*0.5==36.0)
                printf("%d %d %d\n",man,woman,kid);
            }
        }
    }
    return 0;
}
