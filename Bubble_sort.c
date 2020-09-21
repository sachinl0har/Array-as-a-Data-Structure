#include <stdio.h>

int bubble_sort(char *a, int n);

int main(void) {
    char a[10];
    int n = sizeof a / sizeof a[10];
    int i;
    char inname;
    char outname;

    printf("Enter input name: ");
    scanf("%s", &inname);
    printf("Enter output name: ");
    scanf("%s", &outname);

    FILE *in, *out;

    out = fopen(&outname, "w");

    if ((in = fopen(&inname, "r")) == NULL) {
        printf("File not found\n");

    }


    else {
        for (int i = 0; i < 10; i++)
        {
            fscanf(in, "%s ", &a[i]);
        }

        bubble_sort(a, n);

        for (i = 0; i < 10; i++) {
            printf("%s\n", a[i]);
            fprintf(out, "%s\n", a[i]);
        }
    }

        fclose(in);
        fclose(out);
        return 0;
    }


int bubble_sort(char *a, int n) {
    int i, j;
    char temp;

        for (j = 1; j<n; j++)
        {
            for (i = 0; i<n - j; i++)
            {
                if ((int)a[i] >= (int)a[i + 1])
                {
                    temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;

            }
        }
    }
    return a[i];
}
