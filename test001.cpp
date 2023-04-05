#include<stdio.h>
int main()
{
    int i,m=0,n,h,min[10]={0},wood[5000];
    while(~scanf("%d",&n),n!=0)
    {
        h=0;
        for(i=0;i<n;i++)
        {scanf("%d",&wood[i]);
        h+=wood[i];}
        int aver=h/n;
        for(i=0;i<n;i++)
        {
            if(wood[i]>aver)
                min[m]+=(wood[i]-aver);
        }
        m++;
    }
    for(i=0;i<m;i++)
    {printf("%d\n",min[i]);
    printf("\n");}
    return 0;
}
