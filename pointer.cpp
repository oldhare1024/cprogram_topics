//
//  main.cpp
//  Lecture6
//
//  Created by ���� on 2021/12/7.
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
    //psLine����ָ���ַ�������ά������һ�����ݵ�ָ��
    char (*psLine)[N];
    char *p[M];
    //pp�Ƕ༶ָ�룬����ָ�������ָ������Ԫ�صĵ�ַ
    char **pp;
    printf("ָ��Ļ���ʹ�ã�\n");
    a = 4;
    pa = &a;
    printf("a=%d, a=%d\n", a, *pa);
    printf("a�ĵ�ַ��%x��a�ĵ�ַ��%x\n",&a, pa);
    b = *pa;
    pb = &b;
    *pb = 6;
    printf("b=%d, b=%d\n", b, *pb);
    printf("b�ĵ�ַ��%x��b�ĵ�ַ��%x\n",&b, pb);
    
    
    //ָ����һά����
    //����Ԫ�صı�ʾ��d[i],*(pd+i),pd[i],*(d+i)
    pd = d;
    printf("ͨ��ָ�����һά���飺\n");
    for(i=0; i<N; i++)
        printf("%5.2lf ", *(pd + i));
    printf("\n");
    //ͨ��ѭ���ƶ�ָ��ָ���������Ԫ����ʹ������Ԫ��
    for(pd=d; pd<=d+N-1; pd++)
        printf("%5.2lf ", *pd);
    printf("\n");
    
    for(pd=d; pd<d+N; pd++)
        printf("%x ", pd);
    printf("\n");
    pb = &b;
    printf("b�ĵ�ַ��%x��b+1�ĵ�ַ��%x\n",pb, pb+1);
    
    
    
    //ָ��������ά����
    //һ��ָ����������е�ַ��ÿ��+1ָ����һ������Ԫ��
    ps = s[0];  //ps=&s[0][0];
    //��ָ����������е�ַ��ÿ��+1ָ����һ��
    psLine = s;
    printf("ͨ����ָ������ָ����ʶ�ά���飺\n");
    //��ʾ��ά��������Ԫ�ط�ʽ�ıȽ�
    printf("%c\n",s[2][2]);
    printf("%c\n", *(ps+2*N+2));
    printf("%c\n", *(*(psLine+2)+2));
    //ͨ��ѭ��ʹ���е�ַ�������ά����
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
            printf("%2c", *(ps+i*N+j));
        printf("\n");
    }
    
    for(ps = s[0]; ps <= &s[M-1][N-1]; ps++)
        printf("%2c", *ps);
    printf("\n");
    
    //ͨ��ѭ��ʹ���е�ַ�������ά����
    for(i = 0; i < M; i++)
        printf("%s\n", *(psLine + i));
    
    ps = s[0];
    printf("%x,%x\n",ps,psLine);
    printf("%x,%x\n",ps+1,psLine+1);
    
    
    
    //ָ������
    //ͨ��ѭ����ָ�������ÿ������Ԫ�ر�������sÿ���ַ����ĵ�һ���ַ��ĵ�ַ
    for(i = 0; i < M; i++)
        p[i] = s[i];
    printf("ͨ��ָ���ά����ÿ�е�1������Ԫ�ص�ָ��������ʶ�ά���飺\n");
    for(i = 0; i < M; i++)
        printf("%s\n",p[i]);
    for(i = 0; i < M; i++)
        for(j = 0; j < N; j++)
            printf("%2c", *(p[i]+j));
    printf("\n");
    
    
    //�༶ָ��
    pp = p;
    printf("ͨ��ָ��ָ������Ķ༶ָ����ʶ�ά���飺\n");
    for(i=0; i < M; i++)
        printf("%s\n",*(pp+i));
    

    //��̬����洢�ռ�
    printf("ͨ��ָ����ʶ�̬����Ĵ洢�ռ䣺\n");
    printf("����������ĳ��ȣ�");
    scanf("%d", &n);
    //malloc�����Ĳ����Ƿ���Ĵ洢�ռ�Ĵ�С���ֽ�Ϊ��λ��������ֵΪ��̬����洢�ռ�ĵ�ַ��������ֵ��һ��ָ�����
    pn = (int *)malloc(n*4);
    //calloc�����ĵ�1�������Ƕ�̬����洢�ռ�ĸ�������2��������ÿ���洢�ռ�Ĵ�С�������ǳ˻��Ƕ�̬����洢�ռ�Ĵ�С
    //pn = (int *)calloc(n,sizeof(int));
    for(i = 0;i < n; i++)
        *(pn+i) = i;
    for(i = 0;i < n; i++)
        printf("%4d", *(pn+i));
    printf("\n");
    //�ڳ������ǰһ��Ҫͨ��free�����ͷŶ�̬����Ĵ洢�ռ䣬����Ϊָ��̬����洢�ռ��ָ�����
    free(pn);
    
    return 0;
}

