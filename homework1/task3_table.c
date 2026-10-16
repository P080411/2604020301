#include<stdio.h>
#include<stdlib.h>
int main()
{    
    printf("%-6s %-12s %10s\n", "编号", "名称", "单价");
    printf("%6d %-12s %10.2f\n", 1, "铅笔", 1.50);
    printf("%6d %-12s %10.2f\n", 2, "笔记本", 5.80);
    printf("%6d %-12s %10.2f\n", 3, "橡皮", 2.30);
    printf("%6d %-12s %10.2f\n", 4, "尺子", 3.65);
    system("pause");
    return 0;
}