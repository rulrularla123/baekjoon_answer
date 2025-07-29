#include <stdio.h>

void sort(int l[51], int len){
    int minidx, temp;
    for(int i=0; i<len; i++){
        minidx=i;
        for(int j=i; j<len; j++){
            if(l[minidx] > l[j]){
                minidx = j;
            }
        }
        temp = l[minidx];
        l[minidx] = l[i];
        l[i] = temp;
    }
}

int main() {
    int a, b, gap, classs=1, clas[51] = {0, };
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        scanf("%d", &b);
        for(int j=0; j<b; j++) scanf("%d", &clas[j]);
        sort(clas, b);
        printf("Class %d\nMax %d, Min %d, ",  classs, clas[b-1], clas[0]);
        gap = clas[1] - clas[0]; 
        for(int j=1; j<b-1; j++){
            if(clas[j+1] - clas[j] > gap){
                gap = clas[j+1] - clas[j];
            }
        }
        printf("Largest gap %d\n", gap);
        classs++;
        for(int j=0; j<b; j++) clas[j] = 0;
    }
}