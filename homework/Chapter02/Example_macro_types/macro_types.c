#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
    int32_t x = INT32_MIN;
    uint64_t y = UINT64_MAX;
    int z = INT_MAX;
    printf("x = %" PRId32 ", y = %" PRIu64 ", z = %d\n", x, y, z);
    return 0;
}
