#include <stdio.h>

/**
 * _isupper - vérifie si un caractère est une majuscule
 * @c: le caractère à vérifier
 *
 * Return: 1 si c est une majuscule, 0 sinon
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    else
        return 0;
}

int main(void)
{
    char ch = 'G';

    if (_isupper(ch))
        printf("%c est une majuscule.\n", ch);
    else
        printf("%c n'est pas une majuscule.\n", ch);

    return 0;
}
