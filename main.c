#include <stdio.h>

int main()
{
    int qian = 0;
    printf("jinrucunqianguanlixitong\n");

    while (1)
    {
        int a = 0;

        printf("1--cunqian\n");
        printf("2-quqian\n");
        printf("3--yue\n");
        printf("4--tuichu\n");

        printf("qingshuruxiangyingdegongnengbianhao\n");
        scanf("%d", &a);

        if (a == 1)
        {
            int cun;
            char x;
            printf("qingshuruyaocunrudejine\n");
            scanf("%d", &cun);
            qian += cun;
            printf("cunruchenggongdianjihuichejixu\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (a == 2)
        {
            int qu;
            char x;
            printf("jinruquqianguanlixitong\n");
            if(qian>=qu){
            scanf("%d", &qu);
             qian -= qu;
            printf("quqianchenggongdianjihuichejixu\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }
        else{
             qian<qu;
             printf("yuebuzuquchushibaidianjihuichejixu\n");
             char x;
             scanf("%c", &x);
             scanf("%c", &x);
        }    
        }
        if (a == 3)
        {
            char x;
            printf("dangqianyuewei：\n");
            printf("%d\n", qian);
            scanf("%c", &x);
            
        }
        if (a == 4)
        {
            printf("tuichuchenggong\n");
            break;
        }
    }
}
