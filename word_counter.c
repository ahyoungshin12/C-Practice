#include <stdio.h>
#include <string.h>

int main() {
    int num = 0;
    FILE *fp = fopen("data/Obama_Speech.txt", "r");
    printf("Input the word you want to extract : ");

    char input[20];
    char word[100];
    int i, len;

    if (scanf("%19s", input) == 1) {
        while (fscanf(fp, "%99s", word) != EOF) {
            // 단어 뒤에 붙은 문장부호(. , ! ? " ') 제거
            len = strlen(word);
            while (len > 0) {
                char ch = word[len - 1];
                if (ch == '.' || ch == ',' || ch == '!' || ch == '?' || ch == '"' || ch == '\'') {
                    word[len - 1] = '\0';
                    len--;
                } else {
                    break;
                }
            }

            // 일치하는 단어 카운트
            if (strcmp(input, word) == 0) {
                num++;
            }
        }
    }

    printf("Number of input words in Obama's speech : %d", num);
    if (fp != NULL) fclose(fp);
    return 0;
}
