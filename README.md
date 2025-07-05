#include <stdio.h>

// Binary search function
int binarySearch(int arr[], int size, int target) {
    int left = 0;           // Starting index
    int right = size - 1;   // Ending index
    
    while (left <= right) {
        int mid = left + (right - left) / 2; // Middle index to avoid overflow
        
        // Agar target middle element hai
        if (arr[mid] == target) {
            return mid; // Element ka index return karo
        }
        
        // Agar target middle se bada hai, toh right half mein search karo
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // Agar target middle se chhota hai, toh left half mein search karo
        else {
            right = mid - 1;
        }
    }
    
    return -1; // Agar element nahi mila
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16}; // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]);   // Array ka size
    int target;
    
    printf("Enter number to search: ");
    scanf("%d", &target);
    
    int result = binarySearch(arr, size, target);
    
    if (result != -1) {
        printf("Bhai, %d mil gaya at index %d!\n", target, result);
    } else {
        printf("Arre, %d nahi mila array mein!\n", target);
    }
    
    return 0;
}
