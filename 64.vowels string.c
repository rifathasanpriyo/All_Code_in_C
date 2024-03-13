#include <stdio.h>

int main()
{
    char s1[100];
    char ch;
    int vowels, consonants, words, digits, other, i;
    i = vowels = consonants = words = digits = other = 0;
    printf("Enter string: ");
    gets(s1);
    while ((ch = s1[i]) != '\0')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            consonants++;
        }
        else if (ch == ' ')
        {
            words++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else
        {
            other++;
        }
        i++;
    }
    words++; // Increment word count for the last word
    printf("vowels: %d\n", vowels);
    printf("consonants: %d\n", consonants);
    printf("words: %d\n", words);
    printf("digits: %d\n", digits);
    printf("other: %d\n", other);

    return 0;
}

