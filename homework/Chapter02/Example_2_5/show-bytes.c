#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    for (size_t i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    printf("int:");
    show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x) {
    printf("float:");
    show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void *x) {
    printf("int *:");
    show_bytes((byte_pointer)&x, sizeof(void *));
}

void test_show_bytes(int val) {
    int ival = val;
    float fval = (float)ival;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

int main(int argc, char const *argv[]) {
    int val;
    printf("Please input an integer:\n");
    scanf("%d", &val);
    test_show_bytes(val);
    return 0;
}
