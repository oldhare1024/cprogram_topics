#include<stdlib.h>
#include<stdio.h>
int main(void) {

    void* p;
    int i = 0;

    //每次申请100M，失败返回空指针0，退出循环
    while ((p = malloc(1024 * 1024 * 100)))
        i++;

    printf("最多分配%d00M内存", i);
	free(p);
	p=NULL;
    return 0;

}