#include<stdio.h>
#include<math.h>
int main(){
     int n,a,b,c,d,e,fz,fm,m,i,j,p,f=1,l;/*n���������ݣ�fz�����ӣ�fm:��ĸ��f:1��0����*/
     scanf("%d",&n);
     for(i=1;i<=n;i++){/*forѭ��*/
     	scanf("%d %d %d %d %c",&a,&b,&c,&d,&e);
     	f=1;
        {
        if(e=='-'){fz=a*d-b*c;fm=b*d;}
		if(e=='+'){fz=a*d+b*c;fm=b*d;}
		if(e=='/'){fz=a*d;fm=b*c;}
		if(e=='*'){fz=a*c;fm=b*d;}   /*������ѧ����ֱ�ֵ���ӷ�ĸ*/
		}
		if(fz%fm==0)          /*���������*/
		printf("%d/%d%c%d/%d=%d\n",a,b,e,c,d,fz/fm);
		else{      
		    if(fz<0){f=0;fz=-fz;}/*����Ϊ��ʱf��0*/
		    if(fz>fm)p=fm;
		    else p=fz;/*p�洢���ӷ�ĸ��Сֵ*/
			for(j=2;j<=p;j++){
			     for(l=2;l<=j;l++)
			     if(fz%l==0&&fm%l==0){
			          fz=fz/l;fm=fm/l;}
			}/*Լ�ַ��ӷ�ĸ*/
		    if(f==1)printf("%d/%d%c%d/%d=%d/%d\n",a,b,e,c,d,fz,fm);
		    else printf("%d/%d%c%d/%d=%d/%d\n",a,b,e,c,d,-fz,fm);  /*����fֵ��������*/
		    }
	  }
     
}

