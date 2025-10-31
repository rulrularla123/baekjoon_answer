#include <stdio.h>

int main() {
    char a[100];
    scanf("%s", a);
    if(a[0] == 'S') printf("HIGHSCHOOL");
    else if(a[0] == 'C') printf("MASTER");
    else if(a[0] == '2') printf("0611");
    else if(a[0] == 'A') printf("CONTEST");
}