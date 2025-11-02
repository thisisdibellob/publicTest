#include <stdio.h>
#include <stdlib.h>
#include <time.h>



//스왚 함수
void swap(int*a, int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}



//출력 함수
void show(int*list, int size) {
    for(int i=0; i<size; i++) {
        printf("%d  ", list[i]);
    }
    printf("\n");
    return;
}



//삽입 정렬
void insertion_sort(int* list, int first, int last, int gap) {

    int i, j, key;

    for(i=first+gap; i<last; i=i+gap){
        key = list[i];
        for(j=i-gap; j>=first && key<list[j]; j=j-gap) {
            list[j+gap] = list[j];
        }
        list[j+gap] = key;
    }

}


void shell_sort(int *list, int n) {
    int i, gap;
    for(gap=n/2; gap>0; gap= gap/2) {
        if( (gap%2) == 0 ) gap++;
        for(i=0;i<gap;i++) {
            insertion_sort(list, i, n-1, gap);
        }
    }
}





int main(void)  {

    srand(time(NULL));
    int size = 10;
    int list[size]; 

    for (int i=0; i<size; i++) {
        list[i] = rand() % 100;
    }


    printf("원래 배열 : ");
    show(list, sizeof(list)/sizeof(list[0]));

    shell_sort(list, sizeof(list)/sizeof(list[0]));

    printf("정렬 후 : ");
    show(list, sizeof(list)/sizeof(list[0]));


    return 0;
}