#include <stdio.h>

int main() {
    int position;
    char sort[10];
    FILE* fp = fopen("data/Unsorted_Char.txt", "r");
    printf("Input the position : ");
    scanf("%d", &position);
    char line[50];
    int i, j;
    char temp;

    for (i = 0; i < 10; i++) {
        if (fscanf(fp, "%s", line) != EOF) {
            sort[i] = line[position];
        }
    }

    // 버블 정렬 (Bubble Sort) 수행
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (sort[j] > sort[j + 1]) {
                temp = sort[j];
                sort[j] = sort[j + 1];
                sort[j + 1] = temp;
            }
        }
    }

    for(int i=0; i<10; i++)
        printf("%c", sort[i]);

    if (fp != NULL) fclose(fp);
    return 0;
}
