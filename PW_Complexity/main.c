#include <stdio.h>
#include <string.h>

int main() {
    char password[100];
    int hasLower = 0, hasUpper = 0, hasDigit = 0, hasSpecial = 0;
    int i;

    printf("비밀번호를 입력하세요: ");
    scanf("%s", password);

    for (i = 0; password[i] != '\0'; i++) {
        if (password[i] >= 'a' && password[i] <= 'z') {
            hasLower = 1;
        } else if (password[i] >= 'A' && password[i] <= 'Z') {
            hasUpper = 1;
        } else if (password[i] >= '0' && password[i] <= '9') {
            hasDigit = 1;
        } else {
            hasSpecial = 1;
        }
    }

    int score = hasLower + hasUpper + hasDigit + hasSpecial;

    printf("\n비밀번호 길이: %d\n", i);
    printf("문자 종류 포함:\n");
    if (hasLower) printf("- 소문자 포함\n");
    if (hasUpper) printf("- 대문자 포함\n");
    if (hasDigit) printf("- 숫자 포함\n");
    if (hasSpecial) printf("- 특수문자 포함\n");

    printf("\n복잡도 평가: ");
    if (score == 4 && i >= 8) {
        printf("매우 강함\n");
    } else if (score >= 3 && i >= 6) {
        printf("보통\n");
    } else {
        printf("약함\n");
    }

    return 0;
}
