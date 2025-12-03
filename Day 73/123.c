/*Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2
*/
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0;
    int insideWord = 0;
    char filename[50];

    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            insideWord = 0;
        } else if (insideWord == 0) {
            insideWord = 1;
            words++;
        }
    }

    fclose(fp);

    if (chars > 0 && ch != '\n')
        lines++;

    printf("%d\n", chars);
    printf("%d\n", words);
    printf("%d\n", lines);

    return 0;
}
