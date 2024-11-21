#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }

    printf("변경된 문자열: %s\n", str);

    return 0;
}
