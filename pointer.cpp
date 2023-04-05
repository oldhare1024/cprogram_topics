//
//  main.cpp
//  Lecture6
//
//  Created by 杨轩 on 2021/12/7.
//

#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 5
int main(void) 
{
    int a, b;
    double d[N]={1.1, 2.2, 3.3, 4.4, 5.5};
    char s[M][N]={"mike","jane","jack"};
    int i, j;
    int n;
    int *pa, *pb;
    double *pd;
    char *ps;
    int *pn;
    //psLine是行指针地址，保存二维数组中一行数据的指针
    char (*psLine)[N];
    char *p[M];
    //pp是多级指针，保存指针变量或指针数组元素的地址
    char **pp;
    printf("指针的基本使用：\n");
    a = 4;
    pa = &a;
    printf("a=%d, a=%d\n", a, *pa);
    printf("a的地址：%x，a的地址：%x\n",&a, pa);
    b = *pa;
    pb = &b;
    *pb = 6;
    printf("b=%d, b=%d\n", b, *pb);
    printf("b的地址：%x，b的地址：%x\n",&b, pb);
    
    
    //指针与一维数组
    //数组元素的表示：d[i],*(pd+i),pd[i],*(d+i)
    pd = d;
    printf("通过指针访问一维数组：\n");
    for(i=0; i<N; i++)
        printf("%5.2lf ", *(pd + i));
    printf("\n");
    //通过循环移动指针指向各个数组元素来使用数组元素
    for(pd=d; pd<=d+N-1; pd++)
        printf("%5.2lf ", *pd);
    printf("\n");
    
    for(pd=d; pd<d+N; pd++)
        printf("%x ", pd);
    printf("\n");
    pb = &b;
    printf("b的地址：%x，b+1的地址：%x\n",pb, pb+1);
    
    
    
    //指针变量与二维数组
    //一般指针变量保存列地址，每次+1指向下一个数组元素
    ps = s[0];  //ps=&s[0][0];
    //行指针变量保存行地址，每次+1指向下一行
    psLine = s;
    printf("通过列指针与行指针访问二维数组：\n");
    //表示二维数组数组元素方式的比较
    printf("%c\n",s[2][2]);
    printf("%c\n", *(ps+2*N+2));
    printf("%c\n", *(*(psLine+2)+2));
    //通过循环使用列地址来处理二维数组
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
            printf("%2c", *(ps+i*N+j));
        printf("\n");
    }
    
    for(ps = s[0]; ps <= &s[M-1][N-1]; ps++)
        printf("%2c", *ps);
    printf("\n");
    
    //通过循环使用行地址来处理二维数组
    for(i = 0; i < M; i++)
        printf("%s\n", *(psLine + i));
    
    ps = s[0];
    printf("%x,%x\n",ps,psLine);
    printf("%x,%x\n",ps+1,psLine+1);
    
    
    
    //指针数组
    //通过循环让指针数组的每个数组元素保存数组s每个字符串的第一个字符的地址
    for(i = 0; i < M; i++)
        p[i] = s[i];
    printf("通过指向二维数组每行第1个数组元素的指针数组访问二维数组：\n");
    for(i = 0; i < M; i++)
        printf("%s\n",p[i]);
    for(i = 0; i < M; i++)
        for(j = 0; j < N; j++)
            printf("%2c", *(p[i]+j));
    printf("\n");
    
    
    //多级指针
    pp = p;
    printf("通过指向指针数组的多级指针访问二维数组：\n");
    for(i=0; i < M; i++)
        printf("%s\n",*(pp+i));
    

    //动态分配存储空间
    printf("通过指针访问动态分配的存储空间：\n");
    printf("请输入数组的长度：");
    scanf("%d", &n);
    //malloc函数的参数是分配的存储空间的大小（字节为单位），返回值为动态分配存储空间的地址，把它赋值给一个指针变量
    pn = (int *)malloc(n*4);
    //calloc函数的第1个参数是动态分配存储空间的个数，第2个参数是每个存储空间的大小，二者是乘积是动态分配存储空间的大小
    //pn = (int *)calloc(n,sizeof(int));
    for(i = 0;i < n; i++)
        *(pn+i) = i;
    for(i = 0;i < n; i++)
        printf("%4d", *(pn+i));
    printf("\n");
    //在程序结束前一定要通过free函数释放动态分配的存储空间，参数为指向动态分配存储空间的指针变量
    free(pn);
    
    return 0;
}

