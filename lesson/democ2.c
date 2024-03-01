#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, a;
    for (a = 0; a < 71; a++)
    {
        printf("%c", 205);
    }
    printf("\n");
    printf("| DEC HEX ASC|DEC HEX ASC |DEC HEX ASC ");
    printf("| DEC HEX ASC |DEC HEX ASC |\n");
    for (a = 0; a < 71; a++)
    {
        printf("%c", 205);
    }
    printf("\n");
    for (i = 1; i <= 51; i++)
    {
        if (i < 32)
        {
            printf("|%3d %3x %3s", i, i, "n/a");
        }
        else
            printf("|%3d %3x %3c", i, i, i);
        printf("|%3d %3x %3c| %3d %3x %3c", i + 51, i + 51, i + 51, i + 102, i + 102, i + 102);
        printf("| %3d %3x %3c| %3d %3x %3c| \n", i + 153, i + 153, i + 153, i + 204, i + 204, i + 204);
    }
    for (a = 0; a < 71; a++)
    {
        printf("%c", 205);
    }
    getchar();
    return 0;
}
