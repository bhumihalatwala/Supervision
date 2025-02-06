#include <stdio.h>

int main() {
    FILE *fp1 = fopen("even_file.txt", "w");
    FILE *fp2 = fopen("odd_file.txt", "w");
    FILE *fp1_read = fopen("even_file.txt", "r");
    FILE *fp2_read = fopen("odd_file.txt", "r");
    int i;

    if (fp1 != NULL && fp2 != NULL) 
	{
        for (i = 50; i <= 70; i++) 
		{
            if (i % 2 == 0) 
			{
                fprintf(fp1, "%d\n", i);  
            } else 
			{
                fprintf(fp2, "%d\n", i);  
            }
        }

        fclose(fp1);
        fclose(fp2);

        printf("Contents of even_file.txt:\n");
        if (fp1_read != NULL) 
		{
            char line[100];
            while (fgets(line, sizeof(line), fp1_read)) 
			{
                printf("%s", line);
            }
            fclose(fp1_read); 
        } else 
		{
            printf("Failed to open even_file.txt for reading.\n");
        }

        printf("\nContents of odd_file.txt:\n");
        if (fp2_read != NULL) 
		{
            char line[100];
            while (fgets(line, sizeof(line), fp2_read)) 
			{
                printf("%s", line);
            }
            fclose(fp2_read);
        } else 
		{
            printf("Failed to open odd_file.txt for reading.\n");
        }
    } else 
	{
        printf("Failed to open files for writing.\n");
    }

    return 0;
}

