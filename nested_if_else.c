#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("cox's bazar jabo\n");
        if (tk >= 1000)
        {
            printf("Saint martin jabo\n");
        }
        else
        {
            printf("Return back to home\n");
        }
    }
    else
    {
        printf("kothao jabo na\n");
    }
}