#include <stdio.h>

int main()
{
    enum Company
    {
        GOOGLE,
        FACEBOOK,
        XEROX,
        YAHOO,
        EBAY,
        MICROSOFT
    };

    enum Company company1 = XEROX;
    enum Company company2 = GOOGLE;
    enum Company company3 = EBAY;

    char newLine = '\n';

    printf("%d", company1);
    printf("%c", newLine);
    printf("%d", company2);
    printf("%c", newLine);
    printf("%d", company3);
}