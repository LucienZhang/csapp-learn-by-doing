#include <stdio.h>

typedef enum { N_LEAF,
               N_INTERNAL } nodetype_t;

struct node_t {
    nodetype_t type;
    union {
        struct {
            struct node_t *left;
            struct node_t *right;
        } internal;
        double data[2];
    } info;
};

int main(int argc, char const *argv[]) {
    struct node_t n;
    printf("The size of node_t is %lu\n", sizeof(n));  // 24 = 4 + 4 padding + 8*2
    return 0;
}
