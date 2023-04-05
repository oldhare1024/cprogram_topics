#include<stdio.h>
int main()
{
    int i,j,n,before,Dice[6]={0};
    for(i=0;i<6;i++)
        scanf("%d",&Dice[i]);
    scanf("%d",&n);
    for(i=0;i<6;i++)
    {
        if(Dice[i]==6)
            Dice[i]--;
        else
            Dice[i]=6;
        before=Dice[i];
        for(j=1;j<n;j++)
        {
            Dice[i]--;
            if(Dice[i]==before)
                Dice[i]--;
        }
        printf("%d ",Dice[i]);
    }
    return 0;
}