long mult2(long, long);

void multstore(long x, long y, long *dest) {
    long t = mult2(x, y);
    *dest = t;
}

long exchange(long *xp, long y) {
    long x = *xp;
    *xp = y;
    return x;
}
