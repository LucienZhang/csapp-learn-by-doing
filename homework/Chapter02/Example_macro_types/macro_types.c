#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
    int32_t x = INT32_MIN;
    uint64_t y = UINT64_MAX;
    printf("x = %" PRId32 ", y = %" PRIu64 "\n", x, y);
    return 0;
}
