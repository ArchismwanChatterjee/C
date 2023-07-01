/*
WAP to read any string/message from the user
Encrypt the string by shifting each alphabet 13 places.
If the alphabet is 'Z' and x is 3 then it would be ']' but make it in a way so that it gives 'C'.
This is CaesarCipher Algorithm
*/

#include <stdio.h>
#include <string.h>

void decode_rot13(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = (((str[i] - 'A') + 13) % 26) + 'A';
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = (((str[i] - 'a') + 13) % 26) + 'a';
        }
    }
}

int main() 
{
    char str[] = "CNFFJBEQ(f7jwk5mndoz)";
    decode_rot13(str);
    printf("Decoded string: %s\n", str);
    return 0;
}
