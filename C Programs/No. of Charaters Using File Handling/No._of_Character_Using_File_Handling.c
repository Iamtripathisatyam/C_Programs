#include <stdio.h>
#include <process.h> //use for Exit function
int main()
{
    FILE *st;
    char ch;
    int count = 0, cot = 0;
    // Make a text file at the same location where this program locate with some content written over there.
    st = fopen("record.txt", "r");
    if (st == NULL)
    {
        printf("\n Some Problem Occured!, Unable to continue...");
        exit(1);
    }
    while ((ch = fgetc(st)) != EOF)
    {
        if (ch == ' ' || ch == '\n')
            cot++;
        else
            count++;
    }
    printf("\n No. of Words in a file: %d", count);
    fclose(st);
}
