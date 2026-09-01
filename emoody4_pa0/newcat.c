#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        FILE *file = fopen(argv[i], "r");
        if (file == NULL)
        {
            perror("Cannot open file");
            return 1;
        }

        char content;
        while ((content = fgetc(file)) != EOF)
        {
            putchar(content);
        }

        fclose(file);
    }
}