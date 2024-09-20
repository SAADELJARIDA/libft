#include <stdio.h>
#include <bsd/string.h>
int main() {
    char src[] = "Hello, World!";
    char dest[6];  // smaller buffer to demonstrate truncation

    // Using strlcpy (this function is common on BSD and Linux systems with glibc >= 2.32)
    size_t result = strlcpy(dest, src, sizeof(dest));

    printf("Source: %s\n", src);
    printf("Destination (truncated): %s\n", dest);
    printf("Length of source: %zu\n", result);
    if (result >= sizeof(dest)) {
        printf("Warning: Truncation occurred.\n");
    } else {
        printf("Copy was successful without truncation.\n");
    }

    return 0;
}

