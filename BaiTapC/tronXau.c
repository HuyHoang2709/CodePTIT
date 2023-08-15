#include <stdio.h>
#include <string.h>

int main()
{
    const int RUNNING = 1;
    while(RUNNING)
    {
        int length;
        scanf("%d", &length);
        if(length == 0)
        {
            break;
        }
        else
        {
            char s1[205];
            char s2[205];
            char s[410];

            scanf("%s", &s1);
            scanf("%s", &s2);
            scanf("%s", &s);

            char newStr[410] = "";
            int count = 0;
            int index = 0;
            int check = 1;

            while(strcmp(newStr, s) != 0)
            {
                count++;
                for(int i = 0; i < length; i++)
                {
                    newStr[index] = s2[i];
                    newStr[index+1] = s1[i];
                    index += 2;
                }
                index = 0;

                for(int i = 0; i < length; i++)
                {
                    s1[i] = newStr[i];
                }

                for(int i = 0; i < length; i++)
                {
                    s2[i] = newStr[i+length];
                }

                if(count == length * length)
                {
                    printf("-1\n");
                    check = 0;
                    break;
                }
            }
            if(check) printf("%d\n", count);
        }
    }
    return 0;
}