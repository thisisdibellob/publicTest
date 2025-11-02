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



//선택 정렬
void selection_sort(int* list, int n) {
    
    for(int i=0; i<n-1; i++) {
        int min = i;
        for(int j=i+1; j<n; j++) {
            if(list[min] > list[j]) min = j;
        }
        swap(&list[i], &list[min]);
    }
    
    show(list, n);
    return;
}





int main(void)  {

    srand(time(NULL));
    int size = 10;
    int list[size]; 

    for (int i=0; i<size; i++) {
        list[i] = rand() % size;
    }


    show(list, sizeof(list)/sizeof(list[0]));

    selection_sort(list, sizeof(list)/sizeof(list[0]));


    return 0;
}