/* Swap the bytes */

#include <stdio.h>

int main() {
    unsigned int value = 0x78654321;

    // Extract the bytes to be swapped
    unsigned char byte1 = value >> 24; // Get the first byte (0x78)
    unsigned char byte4 = value & 0xFF; // Get the last byte (0x21)

    // Clear the bytes in the original value
    value &= ~(0xFF << 24); // Clear the first byte
    value &= ~(0xFF);       // Clear the last byte

    // Swap the bytes and insert them into the value
    value |= byte4 << 24;  // Put byte4 in the first byte position
    value |= byte1;        // Put byte1 in the last byte position

    printf("Original value: 0x%08X\n", 0x78654321);
    printf("Swapped value:  0x%08X\n", value);

    return 0;
}
