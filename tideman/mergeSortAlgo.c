#include <cs50.h>
#include <stdio.h>
#include <string.h>

void mergeAndSort(int array[], int left_side_index, int right_side_index);
void merge(int array[], int left_side_index, int middle_index, int right_side_index);


int main(void) {
int array[] = {38, 27, 43, 3, 9, 82, 10};
int size = sizeof(array) / sizeof(array[0]);

    mergeAndSort(array, 0, size - 1);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
    
};

void merge(int array[], int left_side_index, int middle_index, int right_side_index) {
    
    int left_size = middle_index - left_side_index + 1;
    int right_size = right_side_index - middle_index;
    
    int left_array[left_size];
    int right_array[right_size];
    
    for (int i = 0; i < left_size; i++)
        {
            left_array[i] = array[left_side_index + i];
        }
    for (int j = 0; j < right_size; j++)
        {
            right_array[j] = array[middle_index + 1 + j];
        }
    
    int left_array_index = 0;
    int right_array_index = 0;
    int sorted_array_index = left_side_index;
    
    while (left_array_index < left_size && right_array_index < right_size)
        {
            if (left_array[left_array_index] <= right_array[right_array_index])
                {
                    array[sorted_array_index] = left_array[left_array_index];
                    left_array_index++;
                }
            else
                {
                    array[sorted_array_index] = right_array[right_array_index];
                    right_array_index++;
                }
            sorted_array_index++;
        }
    
    while (left_array_index < left_size)
        {
            array[sorted_array_index] = left_array[left_array_index];
            left_array_index++;
            sorted_array_index++;
        }
    
    while (right_array_index < right_size)
        {
            array[sorted_array_index] = right_array[right_array_index];
            right_array_index++;
            sorted_array_index++;
        }
    

}

void mergeAndSort(int array[], int left_side_index, int right_side_index) {
    
    int middle_index = left_side_index + (right_side_index-left_side_index)/2;
    if (left_side_index >= right_side_index)
        {
        return;
        }
    else  
    mergeAndSort(array, left_side_index, middle_index);
    mergeAndSort(array, middle_index + 1, right_side_index);
    merge(array, left_side_index, middle_index, right_side_index);
}
