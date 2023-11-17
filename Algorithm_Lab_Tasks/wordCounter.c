#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    int count = 0, i;

    printf("Enter the sentence: \n");
    scanf("%[^\n]s", sentence);

    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' && sentence[i + 1] != ' ') {
            count++;
        }
    }

    printf("Number of words in the given sentence: %d\n", count + 1);

    return 0;
}