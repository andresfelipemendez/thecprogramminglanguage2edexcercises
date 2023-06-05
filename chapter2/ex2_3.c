#include <stdio.h>

int htoi(char *s)
{
    int i, n = 0;
    for (i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] >= '0' && s[i] <= '9')
            n = 16 * n + (s[i] - '0');
        else if (s[i] >= 'a' && s[i] <= 'f')
            n = 16 * n + (s[i] - 'a' + 10);
        else if (s[i] >= 'A' && s[i] <= 'F')
            n = 16 * n + (s[i] - 'A' + 10);
    }

    return n;
}

int main(void)
{
    char *s = "0x1f";
    printf("%s = %d\n", s, htoi(s));

    char *s2 = "0X01";
    printf("%s = %d\n", s2, htoi(s2));
    return 0;
}