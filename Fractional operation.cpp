#include<stdio.h>
#include<math.h>
int main(){
     int n,a,b,c,d,e,fz,fm,m,i,j,p,f=1,l;/*n：几组数据；fz：分子；fm:分母；f:1正0负；*/
     scanf("%d",&n);
     for(i=1;i<=n;i++){/*for循环*/
     	scanf("%d %d %d %d %c",&a,&b,&c,&d,&e);
     	f=1;
        {
        if(e=='-'){fz=a*d-b*c;fm=b*d;}
		if(e=='+'){fz=a*d+b*c;fm=b*d;}
		if(e=='/'){fz=a*d;fm=b*c;}
		if(e=='*'){fz=a*c;fm=b*d;}   /*根据数学计算分别赋值分子分母*/
		}
		if(fz%fm==0)          /*整除即输出*/
		printf("%d/%d%c%d/%d=%d\n",a,b,e,c,d,fz/fm);
		else{      
		    if(fz<0){f=0;fz=-fz;}/*分子为负时f赋0*/
		    if(fz>fm)p=fm;
		    else p=fz;/*p存储分子分母较小值*/
			for(j=2;j<=p;j++){
			     for(l=2;l<=j;l++)
			     if(fz%l==0&&fm%l==0){
			          fz=fz/l;fm=fm/l;}
			}/*约分分子分母*/
		    if(f==1)printf("%d/%d%c%d/%d=%d/%d\n",a,b,e,c,d,fz,fm);
		    else printf("%d/%d%c%d/%d=%d/%d\n",a,b,e,c,d,-fz,fm);  /*根据f值分情况输出*/
		    }
	  }
     
}

