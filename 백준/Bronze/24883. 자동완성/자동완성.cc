#include <stdio.h>

int main() {
    char a;
    scanf("%s", &a);
    printf((a == 'n' || a == 'N') ? "Naver D2" : "Naver Whale");
}