#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int i, j, len;
    printf("\n Enter a String: ");
    gets(str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            for (j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
    printf("\n String after removing all the Vowels: %s", str);
    return 0;
}
