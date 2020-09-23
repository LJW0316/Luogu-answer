#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n, x, y, t;
    char str[105], str1[105], str2[1005], mark = 0, flag = 0;
    scanf("%d ", &n);
    scanf("%s", str);
    for (int i = 0; i < n; i++)
    {
        memset(str1, 0, sizeof(str1));
        memset(str2, 0, sizeof(str2));
        scanf("%d", &t);
        if (t == 1)
        {
            scanf("%s", str1);
            strcat(str, str1);
            printf("%s\n", str);
        }
        if (t == 2)
        {
            scanf("%d %d", &x, &y);
            int k = 0;
            for (int i = x; i < x + y; i++)
            {
                str2[k] = str[i];
                k++;
            }
            strcpy(str, str2);
            printf("%s\n", str);
        }
        if (t == 3)
        {
            int k = 0;
            scanf("%d %s", &x, str1);
            for (int i = 0; i < x; i++)
            {
                str2[k] = str[i];
                k++;
            }
            strcat(str2, str1);
            k = strlen(str2);
            for (int i = x; i < strlen(str); i++)
            {
                str2[k] = str[i];
                k++;
            }
            strcpy(str, str2);
            printf("%s\n", str);
        }
        if (t == 4)
        {
            flag = 0;
            scanf("%s", str1);
            for (int i = 0; i < strlen(str); i++)
            {
                if (str[i] == str1[0])
                {
                    mark = 1;
                    for (int j = 0; j < strlen(str1); j++)
                    {
                        if (str[i + j] != str1[j])
                        {
                            mark = 0;
                            break;
                        }
                    }
                    if (mark)
                    {
                        printf("%d\n", i);
                        flag = 1;
                        break;
                    }
                }
            }
            if (!flag)
            {
                printf("-1\n");
            }
        }
    }
    return 0;
}