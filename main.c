#include <stdio.h>

int main()
{
    int qian = 0;
    printf("进入存钱管理系统\n");

    while (1)
    {
        int a = 0;

        printf("1--存钱\n");
        printf("2--取钱\n");
        printf("3--余额\n");
        printf("4--退出\n");

        printf("请输入相应的功能编号\n");
        scanf("%d", &a);
        
        
        if (a == 1)
        {
            int qian=0;
            printf("请输入要存入的金额\n");
            scanf("%d",&cun);
            qian+=cun;
            printf("存入成功，点击回车继续")；
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if (a == 2)
        {
        }
        if (a == 3)
        {
        }
        if (a == 4)
        {
        }
    }
