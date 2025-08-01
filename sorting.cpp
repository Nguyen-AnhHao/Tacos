#include "sorting.h"

template <class T>
void Sorting<T>::sortSegment(T* start, T* end, int segment_idx, int cur_segment_total) {
    int total_size = end - start;
    int gap = total_size / cur_segment_total;
    
    // Sort elements that are gap distance apart, starting from segment_idx
    for (int i = segment_idx + gap; i < total_size; i += gap) {
        T key = start[i];
        int j = i - gap;
        
        // Move elements that are greater than key, gap positions ahead
        while (j >= 0 && j >= segment_idx && start[j] > key) {
            start[j + gap] = start[j];
            j -= gap;
        }
        start[j + gap] = key;
    }
}

template <class T>
void Sorting<T>::ShellSort(T* start, T* end, int* num_segment_list, int num_phases) {
    // Note: You must print out the array after sorting segments to check whether your algorithm is true.
    
    for (int phase = 0; phase < num_phases; phase++) {
        int num_segments = num_segment_list[phase];
        int total_size = end - start;
        int gap = total_size / num_segments;
        
        // Sort each segment in this phase
        for (int segment = 0; segment < gap; segment++) {
            sortSegment(start, end, segment, num_segments);
        }
        
        // Print the array after each phase
        printArray(start, end);
    }
}

// Explicit template instantiation for common types
template class Sorting<int>;
template class Sorting<float>;
template class Sorting<double>;