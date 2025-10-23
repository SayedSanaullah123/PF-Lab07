#include <stdio.h>

int main() {
    char str[100];
    int i = 0, v = 0, c = 0;

    printf("Enter a word: ");
    scanf("%s", str);  // Read one word

    printf("Vowels: ");
    while (str[i] != '\0') {
        char ch = str[i];
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
            printf("%c ", ch);  // show vowel
            v++;
        }
        i++;
    }

    i = 0;
    printf("\nConsonants: ");
    while (str[i] != '\0') {
        char ch = str[i];
        if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) {
            if (!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                  ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')) {
                printf("%c ", ch);  // show consonant
                c++;
            }
        }
        i++;
    }

    printf("\nTotal Vowels: %d\n", v);
    printf("Total Consonants: %d\n", c);

    return 0;
}

