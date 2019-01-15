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
            int cun;
            char x;
            printf("请输入要存入的金额\n");
            scanf("%d", &cun);
            qian += cun;
            printf("存入成功，点击回车继续\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (a == 2)
        {
            int qu;
            char x;
            printf("进入取钱管理系统\n");
            scanf("%d", &qu);
            qian -= qu;
            printf("取钱成功，点击回车继续\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (a == 3)
        {
            char x;
            printf("当前余额为：\n");
            printf("%d\n", qian);
            scanf("%c", &x);
            
        }
        if (a == 4)
        {
            printf("退出成功，请退出\n");
            break;
        }
    }
}
