
#include <stdio.h>
#include <stdlib.h> // For exit()

int main()
{
    FILE *fptr;

    char c;


    // Open file
    fptr = fopen("input.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }

    // Read contents from file
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf ("%c", c);
        if(c == ';'){
            printf("\n");
        }
        c = fgetc(fptr);
    }

    fclose(fptr);
    return 0;
}
