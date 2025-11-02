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
void insertion_sort(int* list, int n) {

    int j, key;

    for(int i=1; i<n; i++){
        key = list[i];
        for(j=i-1; j>=0 && key<list[j]; j--) {
            list[j+1] = list[j];
        }
        list[j+1] = key;
    }

}





int main(void)  {

    srand(time(NULL));
    int size = 10;
    int list[size]; 

    for (int i=0; i<size; i++) {
        list[i] = rand() % size;
    }


    printf("원래 배열 : ");
    show(list, sizeof(list)/sizeof(list[0]));

    insertion_sort(list, sizeof(list)/sizeof(list[0]));

    printf("정렬 후 : ");
    show(list, sizeof(list)/sizeof(list[0]));


    return 0;
}