#include <stdio.h>
int main()
{
    int a;//input from user = 1000
    int b[10] = {2000, 500, 100, 50, 20, 10, 5, 2, 1};
    int c;
    int d;
    int e[10];
    int fe=0;;
    printf("Enter the Amount>> ");
    scanf("%d", &a);
    d = a;
    for (int i = 0; i < 10; i++)
    {
        c = a/b[i];//2
        a -= (b[i]*c);
        e[fe] = b[i]*c;
        printf("%d*%d = %d\n", c, b[i], b[i]*c);
        if(a == 0)
        {
            break;
        }
        fe++;
    }
    for (int i = 0; i <= fe; i++)
    {
        printf("%d ", e[i]);
        if(i<fe)
        {
            printf("+ ");
        }
        else
        {
            printf("= %d", d);
        }
    }
    
    getchar();
    getchar();
}
