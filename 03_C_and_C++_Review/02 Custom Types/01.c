// size_t = size type for memory allocation
// size_t is an unsigned integer data type used to represent the size of objects in bytes. 
// It is guaranteed to be big enough to contain the size of the biggest object the host system can handle.

// in vscode, ctrl + right click or F12 to see the definition of a function or a type
// nothing special about size_t, it's just a typedef for unsigned long long int

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {12, 24, 36, 48, 60};

    // size_t
    size_t size = sizeof(arr) / sizeof(arr[0]);
    printf("Size of arr: %zu\n", size);  // Output: 5
    printf("size_t size: %zu byte(s)\n", sizeof(size_t));  // Output: 8 (bytes) -> 64 bits which is memory safe
    printf("char   size: %zu byte(s)\n", sizeof(char));    // Output: 1 (byte) -> 8 bits
    printf("int    size: %zu byte(s)\n", sizeof(int));     // Output: 4 (bytes) -> 32 bits
    printf("float  size: %zu byte(s)\n", sizeof(float));   // Output: 4 (bytes) -> 32 bits
    printf("long   size: %zu byte(s)\n", sizeof(long));    // Output: 8 (bytes) -> 64 bits
    printf("double size: %zu byte(s)\n", sizeof(double));  // Output: 8 (bytes) -> 64 bits
    // z -> size_t
    // u -> unsigned int
    // %zu -> size_t
    // src: https://cplusplus.com/reference/cstdio/printf/

    return 0;
}