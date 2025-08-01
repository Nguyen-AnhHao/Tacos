#include "sorting.h"
#include <iostream>

int main() {
    // Test case from the assignment
    int num_segment_list[] = {1, 3, 5};
    int num_phases = 3;
    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = 10;
    
    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    
    std::cout << "\nShell Sort process:" << std::endl;
    Sorting<int>::ShellSort(&array[0], &array[10], &num_segment_list[0], num_phases);
    
    std::cout << "\nFinal sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}