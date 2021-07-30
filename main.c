#include <stdio.h>
#define MaxNumbers 10
/*Algoritimo de selection sort*/


//Função que encontra e retorna a posição do menor valor em um intervalo do vetor
int getSmallest(int list[], int lo, int hi) {
    int small = lo;
    for (int h = lo + 1; h <= hi; h++)
        if (list[h] < list[small])
            small = h;
    return small;
}

//Função que realiza a troca entre dois elementos de um vetor
void swap(int list[], int i, int j) {
    int hold = list[i];
    list[i] = list[j];
    list[j] = hold;
}

//Função que realiza o selection sort
void selectionSort(int list[], int lo, int hi) {
    int getSmallest(int[], int, int);
    void swap(int[], int, int);
    for (int h = lo; h < hi; h++) {
        int s = getSmallest(list, h, hi);
        swap(list, h, s);
        printf("%d", h);
    }
}


int main() {
    void selectionSort(int [], int, int);
    int num[MaxNumbers];
    printf("Type up to %d numbers followed by 0\n", MaxNumbers);
    int n = 0, v;
    scanf("%d", &v);
    while (v != 0 && n < MaxNumbers) {
        num[n++] = v;
        scanf("%d", &v);
    }
    if (v != 0) {
        printf("More than %d numbers entered\n", MaxNumbers);
        printf("First %d used\n", MaxNumbers);
    }
    selectionSort(num, 0, n-1);
    printf("\nThe sorted numbers are\n");
    for (int h = 0; h < n; h++) printf("%d ", num[h]);
        printf("\n");
}
