#include <stdio.h>
#include <stdlib.h>

int* lexicographicallySmallestArray(int* nums, int numsSize, int limit) {
    int i, j, temp;
    for (i = 0; i < numsSize; i++) {
        for (j = 0; j < numsSize; j++) {
            if (nums[i] > nums[j] && abs(nums[i] - nums[j]) <= limit) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    return nums;
}

int main() {
    int n, i, l;
    printf("Enter the length of array\n");
    scanf("%d", &n);
    printf("Enter the limit\n");
    scanf("%d", &l);

    // Dynamically allocate memory for the array
    int* ar = (int*)malloc(n * sizeof(int));

    if (ar == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit with an error code
    }

    printf("Enter the elements of array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);

    // Call the function and assign the result to arptr
    int *arptr = lexicographicallySmallestArray(ar, n, l);

    printf("The lexicographically smallest possible array\n");
    for (i = 0; i < n; i++)
        printf("%d ", arptr[i]);

    // Free the dynamically allocated memory
    free(ar);

    return 0;
}
