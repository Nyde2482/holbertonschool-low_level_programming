#include "main.h"
/** isupper 
@c: caractere verifier
Return: 1 si maj sinon 0
 */
int _isupper(int c)
{
    if (c >= "A" && c <= "Z") 
        return (1);
    else
        return (0);
}
