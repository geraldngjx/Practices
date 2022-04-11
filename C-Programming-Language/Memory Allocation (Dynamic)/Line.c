#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


char *get_line_alloc(int *plen)
{
    if (!plen)
    {
        plen = malloc(sizeof(*plen));
        if (!plen)
        {
            return NULL;
        }
    }
    *plen = 0;

    char *line = NULL;
    int buffer_size = 0, input;
    const int alloc_block_size = 5;

    while (true)
    {
        input = getchar();

        if (buffer_size <= *plen)
        {
            buffer_size += alloc_block_size;
            char *realloc_line = realloc(line, buffer_size);

            if (!realloc_line)
            {
                free(line);
                return NULL;
            }
            line = realloc_line;
        }

        if (input != '\n' && input != EOF)
        {
            line[(*plen)++] = (char)input;
        }
        else
        {
            break;
        }
    }
    line[*plen] = '\0';
    return line;
}

int main()
{
    char *line = NULL;
    int len;

    do
    {
        printf("Enter the line ('END' to Exit): \n");
        line = get_line_alloc(&len);

        if (line)
        {
            printf("%s (len = %d)\n", line, len);
        }
        else
        {
            printf("Unsuccessful Memory Allocation\n");
        }
    } while (line && strcmp(line, "END") && strcmp(line, "end"));

    return EXIT_SUCCESS;
}
