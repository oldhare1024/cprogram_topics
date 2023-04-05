#include<stdio.h>
#include<Windows.h>

int main(){
    int n;
    char name[100];
    printf("??????????:\n");
    scanf("%s",name);
    printf("??????????:\n");
    scanf("%d",&n);
    HWND H = FindWindow(0,name);//??????
    while(n-- > 0){
        SendMessage(H,WM_PASTE,0,0);//????
        SendMessage(H,WM_KEYDOWN,VK_RETURN,0);//????
    }
    return 0;
}
