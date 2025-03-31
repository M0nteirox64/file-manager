#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *file = NULL;
    char write[301];

    int ch;
    char filename[11];
    printf("1. create file\n");

    printf("option: ");
    scanf("%d", &ch);

    if (ch == 1) {
        file = fopen("file.txt", "w");
        if (file) {
            char chc[2];
            printf("\n[/] file created sucessfully\n");
            printf("do you want to write something on it? (Y/N) ");
            scanf("%s", chc);
            if (strcmp(chc, "y") == 0 || strcmp(chc, "Y") == 0) {
                char write[301];
                printf(">>> ");
                scanf("%s", write);
                fprintf(file, "%s", write);
            } else {
                exit(0);
            }
            fclose(file);
            system("cls");
        }
    }
}
