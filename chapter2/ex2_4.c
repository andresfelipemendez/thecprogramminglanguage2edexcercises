/*
Write an alternate version of squeeze(s1,s2) that deletes each character in s1
that matches any character in the string s2.
*/

#include <stdio.h>

void squeezeSS(char s1[], char s2[])
{
    int i, j, k;
    for (i = j = 0; s1[i] != '\0'; i++)
    {
        int match = 0;
        for (k = 0; s2[k] != '\0'; k++)
        {
            if (s1[i] == s2[k])
                match = 1;
        }
        if (match == 0)
            s1[j++] = s1[i];
    }
    s1[j] = '\0';
}

int main()
{

    char string[] = "my string";
    char mask[] = "mi";
    squeezeSS(string, mask);
    printf("%s", string);
    return 0;
}