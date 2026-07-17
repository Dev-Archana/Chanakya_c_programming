/******************************************************************************
                         FILE HANDLING IN C

File Operations:
1. Open/Create a file  -> fopen()
2. Write data          -> fprintf(), fputs(), fwrite()
3. Read data           -> fscanf(), fgets(), fread()
4. Append data         -> fopen() with "a" mode
5. Update data         -> fopen() with "r+" / "w+" / "a+"
6. Close file          -> fclose()

Syntax:
    FILE *fptr;
    fptr = fopen("filename", "mode");

*******************************************************************************/

#include <stdio.h>

int main()
{
    FILE *fptr;
    char str[100];

    // 1. CREATE / WRITE FILE
    fptr = fopen("textfile.txt", "w");

    if (fptr == NULL)
    {
        printf("File cannot be created\n");
        return 1;
    }

    fprintf(fptr, "Hello Archana\n");
    fprintf(fptr, "Welcome to C File Handling");

    fclose(fptr);

    printf("Data written successfully\n");


    // 2. READ FILE
    fptr = fopen("textfile.txt", "r");

    if (fptr == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    printf("\nReading File Data:\n");

    while (fgets(str, sizeof(str), fptr) != NULL)
    {
        printf("%s", str);
    }

    fclose(fptr);


    // 3. APPEND DATA TO FILE
    fptr = fopen("textfile.txt", "a");

    if (fptr == NULL)
    {
        printf("File cannot be opened\n");
        return 1;
    }

    fprintf(fptr, "\nThis data is appended");

    fclose(fptr);

    printf("\nData appended successfully\n");


    // 4. UPDATE FILE (Read + Write)
    fptr = fopen("textfile.txt", "r+");

    if (fptr == NULL)
    {
        printf("File cannot be opened\n");
        return 1;
    }

    fprintf(fptr, "\nUpdated data");

    fclose(fptr);

    printf("File updated successfully\n");


    return 0;
}
