# Solutions

## Practice Problem 2.1

### A

| Hexadecimal |   2   |   5   |   B   |   9   |   D   |   2   |
| :---------: | :---: | :---: | :---: | :---: | :---: | :---: |
|   Binary    | 0010  | 0101  | 1011  | 1001  | 1101  | 0010  |

Result: 0010 0101 1011 1001 1101 0010

### B

|   Binary    | 1010  | 1110  | 0100  | 1001  |
| :---------: | :---: | :---: | :---: | :---: |
| Hexadecimal |   A   |   E   |   4   |   9   |

Result: OxAE49

### C

| Hexadecimal |   A   |   8   |   B   |   3   |   D   |
| :---------: | :---: | :---: | :---: | :---: | :---: |
|   Binary    | 1010  | 1000  | 1011  | 0011  | 1101  |

Result: 1010 1000 1011 0011 1101

### D

|   Binary    |  11   | 0010  | 0010  | 1101  | 1001  | 0110  |
| :---------: | :---: | :---: | :---: | :---: | :---: | :---: |
| Hexadecimal |   3   |   2   |   2   |   D   |   9   |   6   |

Result: Ox322D96

## Practice Problem 2.2

|  $n$   | $2^n$(decimal) | $2^n$(hexadecimal) |
| :----: | :------------: | :----------------: |
|   5    |       32       |        0x20        |
|   23   | __8,388,608__  |    __0x800000__    |
| __15__ |     32,768     |     __0x8000__     |
| __13__ |   __8,192__    |       0x2000       |
|   12   |    __4096__    |     __0x1000__     |
| __6__  |       64       |      __0x40__      |
| __8__  |    __256__     |       0x100        |

## Practice Problem 2.3

| Decimal |    Binary     | Hexadecimal |
| :-----: | :-----------: | :---------: |
|    0    |   0000 0000   |    0x00     |
|   158   | __1001 1110__ |  __0x9E__   |
|   76    | __0100 1100__ |  __0x4C__   |
|   145   | __1001 0001__ |  __0x91__   |
| __174__ |   1010 1110   |  __0xAE__   |
| __60__  |   0011 1100   |  __0x3C__   |
| __241__ |   1111 0001   |  __0xF1__   |
| __117__ | __0111 0101__ |    0x75     |
| __189__ | __1011 1101__ |    0xBD     |
| __245__ | __1111 0101__ |    0xF5     |

## Practice Problem 2.4

A. 0x605c + 0x5 = 0x6061

B. 0x605c − 0x20 = 0x603c

C. 0x605c + 32 = 0x605c + 0x20 = 0x607c

D. 0x60fa − 0x605c = 0x9e

## Practice Problem 2.5

| Length | Little endian | Big endian |
| :----: | :-----------: | :--------: |
|   1    |      78       |     12     |
|   2    |     78 56     |   12 34    |
|   3    |   78 56 34    |  12 34 56  |

## Practice Problem 2.6

A.

0x0027C8F8 = 0000 0000 0010 0111 1100 1000 1111 1000

0x4A1F23E0 = 0100 1010 0001 1111 0010 0011 1110 0000

B.

```text
00000000001001111100100011111000
           *********************
  01001010000111110010001111100000
```

21 bits match

C.

Leading part of integer bits and both sides of floating-point number bits do not match

## Practice Problem 2.7

6d 6e 6f 70 71 72

## Practice Problem 2.8

| Operation |    Result    |
| :-------: | :----------: |
|     a     | `[01001110]` |
|     b     | `[11100001]` |
|    ~a     | `[10110001]` |
|    ~b     | `[00011110]` |
|   a & b   | `[01000000]` |
|  a \| b   | `[11101111]` |
|   a ^ b   | `[10101111]` |

## Practice Problem 2.9

A.

|   R   |   G   |   B   |  Color  | Complement |
| :---: | :---: | :---: | :-----: | :--------: |
|   0   |   0   |   0   |  Black  |   White    |
|   0   |   0   |   1   |  Blue   |   Yellow   |
|   0   |   1   |   0   |  Green  |  Magenta   |
|   0   |   1   |   1   |  Cyan   |    Red     |
|   1   |   0   |   0   |   Red   |    Cyan    |
|   1   |   0   |   1   | Magenta |   Green    |
|   1   |   1   |   0   | Yellow  |    Blue    |
|   1   |   1   |   1   |  White  |   Black    |

B.

Blue | Green = Cyan

Yellow & Cyan = Green

Red ^ Magenta = Blue

## Practice Problem 2.10

|   Step    | `*x`  | `*y`  |
| :-------: | :---: | :---: |
| Initially |   a   |   b   |
|  Step 1   |   a   | a ^ b |
|  Step 2   |   b   | a ^ b |
|  Step 3   |   b   |   a   |

## Practice Problem 2.11

A. k, k

B. x and y are pointing at the same element

C. Line 4: `first < last;`

## Practice Problem 2.12

A. `x & 0xFF`

B. `(~x & ~0xFF) | (x & 0xFF) = x ^ ~0xFF`

C. `x | 0xFF`

## Practice Problem 2.13

```c
int bis(int x, int m) {
    return x | m;
}

int bic(int x, int m) {
    return x & ~m;
}
```

```c
/* Compute x|y using only calls to functions bis and bic */
int bool_or(int x, int y) {
    int result = bis(x, y);
    return result;
}
```

```c
/**
 * Compute x^y using only calls to functions bis and bic
 * x ^ y = (x & ~y) | (~x & y)
 */
int bool_xor(int x, int y) {
    // int result = bis(x, y) - bic(x, ~y);  // Overflow, not only function call
    // int result = bis(bic(x, y), bic(~x, ~y));  // Not only function call
    int result = bis(bic(x, y), bic(y, x));
    return result;
}
```

## Practice Problem 2.14

| Expression | Value | Expression | Value |
| :--------: | :---: | :--------: | :---: |
|     a      | 0x55  |     b      | 0x46  |
|   a & b    | 0x44  |   a && b   | 0x01  |
|   a \| b   | 0x57  |  a \|\| b  | 0x01  |
|  ~a \| ~b  | 0xBB  | !a \|\| !b | 0x00  |
|   a & !b   | 0x00  |  a && ~b   | 0x01  |

## Practice Problem 2.15

```c
/* Compute x == y using only bit-level and logical operations */
int equal(int x, int y) {
    return !(x ^ y);
}
```

## Practice Problem 2.16

| a Hex | a Binary  | a << 2 Binary | a << 2 Hex | Logical a >> 3 Binary | Logical a >> 3 Hex | Arithmetic a >> 3 Binary | Arithmetic a >> 3 Hex |
| :---: | :-------: | :-----------: | :--------: | :-------------------: | :----------------: | :----------------------: | :-------------------: |
| 0xD4  | 1101 0100 |   0101 0000   |    0x50    |       0001 1010       |        0x1A        |        1111 1010         |         0xFA          |
| 0x64  | 0110 0100 |   1001 0000   |    0x90    |       0000 1100       |        0x0C        |        0000 1100         |         0x0C          |
| 0x72  | 0111 0010 |   1100 1000   |    0xC8    |       0000 1110       |        0x0E        |        0000 1110         |         0x0E          |
| 0x44  | 0100 0100 |   0001 0000   |    0x10    |       0000 1000       |        0x08        |        0000 1000         |         0x08          |

## Practice Problem 2.17

| $\vec{x}$ Hexadecimal | $\vec{x}$ Binary |   $B2U_4(\vec{x})$   |   $B2T_4(\vec{x})$    |
| :-------------------: | :--------------: | :------------------: | :-------------------: |
|          0xA          |     \[1010\]     |     $2^3+2^1=10$     |     $-2^3+2^1=-6$     |
|          0x1          |   __\[0001\]__   |     __$2^0=1$__      |      __$2^0=1$__      |
|          0xB          |   __\[1011\]__   | __$2^3+2^1+2^0=11$__ | __$-2^3+2^1+2^0=-5$__ |
|          0x2          |   __\[0010\]__   |     __$2^1=2$__      |      __$2^1=2$__      |
|          0x7          |   __\[0111\]__   | __$2^2+2^1+2^0=7$__  |  __$2^2+2^1+2^0=7$__  |
|          0xC          |   __\[1100\]__   |   __$2^3+2^2=12$__   |   __$-2^3+2^2=-4$__   |

## Practice Problem 2.18

A. `0x2e0 = 736`

B. `-0x58 = -88`

C. `0x28 = 40`

D. `-0x30 = -48`

E. `0x78 = 120`

F. `0x88 = 136`

G. `0x1f8 = 504`

H. `0xc0 = 192`

I. `-0x48 = -72`

## Practice Problem 2.19

$$
\text{if} \ x < 0, \ T2U_4(x) = 2^4 + x \\[2mm]
\text{else}, \ T2U_4(x) = x
$$

|  $x$  | $T2U_4(x)$ |
| :---: | :--------: |
|  -1   |     15     |
|  -5   |     11     |
|  -6   |     10     |
|  -4   |     12     |
|   1   |     1      |
|   8   |     8      |

## Practice Problem 2.21

|           Expression           |   Type   | Evaluation |
| :----------------------------: | :------: | :--------: |
| `-2147483647-1 == 2147483648U` | Unsigned |     1      |
|  `-2147483647-1 < 2147483647`  |  Signed  |     1      |
| `-2147483647-1U < 2147483647`  | Unsigned |     0      |
| `-2147483647-1 < -2147483647`  |  Signed  |     1      |
| `-2147483647-1U < -2147483647` | Unsigned |     1      |

## Practice Problem 2.22

A. `[1100]` = $-2^3+2^2=-4$

B. `[11100]` = $-2^4+2^3+2^2=-4$

C. `[11100]` = $-2^5+2^4+2^3+2^2=-4$

## Practice Problem 2.23

|    `w`     | `fun1(w)`  | `fun2(w)`  |
| :--------: | :--------: | :--------: |
| 0x00000076 | 0x00000076 | 0x00000076 |
| 0x87654321 | 0x00000021 | 0x00000021 |
| 0x000000C9 | 0x000000C9 | 0xFFFFFFC9 |
| 0xEDCBA987 | 0x00000087 | 0xFFFFFF87 |

## Practice Problem 2.24

| Hex Original | Hex Truncated | Unsigned Original | Unsigned Truncated | Two’s complement Original | Two’s complement Truncated |
| :----------: | :-----------: | :---------------: | :----------------: | :-----------------------: | :------------------------: |
|      1       |       1       |         1         |       __1__        |             1             |           __1__            |
|      3       |       3       |         3         |       __3__        |             3             |           __3__            |
|      5       |       5       |         5         |       __5__        |             5             |           __-3__           |
|      C       |       4       |        12         |       __4__        |            -4             |           __-4__           |
|      E       |       6       |        14         |       __6__        |            -2             |           __-2__           |

## Practice Problem 2.25

Line 6: `for (i = 0; i < length; i++)`

## Practice Problem 2.26

A. The result is incorrect when `strlen(s) < strlen(t)`

B. Subtraction of unsigned numbers may lead to unsigned number overflow.

C. `return strlen(s) > strlen(t);`

## Practice Problem 2.27

```c
/* Determine whether arguments can be added without overflow */
int uadd_ok(unsigned x, unsigned y) {
    if (x + y >= x) {
        return 1;
    } else {
        return 0;
    }
}
```

```c
/* Determine whether arguments can be added without overflow */
int uadd_ok(unsigned x, unsigned y) {
    return x + y >= x;
}
```

## Practice Problem 2.28

| $x$ Hex | $x$ Decimal | $-^u_4x$ Decimal | $-^u_4x$ Hex |
| :-----: | :---------: | :--------------: | :----------: |
|    1    |      1      |        15        |      F       |
|    4    |      4      |        12        |      C       |
|    7    |      7      |        9         |      9       |
|    A    |     10      |        6         |      6       |
|    E    |     14      |        2         |      2       |

## Practice Problem 2.29

|    $x$    |    $y$    |   $x+y$    | $x+^t_5y$ | Case  |
| :-------: | :-------: | :--------: | :-------: | :---: |
|    -12    |    -15    |    -27     |     5     |   1   |
| `[10100]` | `[10001]` | `[100101]` | `[00101]` |       |
|    -8     |    -8     |    -16     |    -16    |   2   |
| `[11000]` | `[11000]` | `[110000]` | `[10000]` |       |
|    -9     |     8     |     -1     |    -1     |   2   |
| `[10111]` | `[01000]` | `[11111]`  | `[11111]` |       |
|     2     |     5     |     7      |     7     |   3   |
| `[00010]` | `[00101]` | `[00111]`  | `[00111]` |       |
|    12     |     4     |     16     |    -16    |   4   |
| `[01100]` | `[00100]` | `[10000]`  | `[10000]` |       |

## Practice Problem 2.30

```c
/* Determine whether arguments can be added without overflow */
/**
 * This is my original solution, but it's buggy, it returns incorrect value when x == y == INT_MIN
 */
#include <stdbool.h>
int tadd_ok(int x, int y) {
    bool x_positive = x > 0;
    bool y_positive = y > 0;
    bool sum_positive = x + y > 0;
    return !(!(x_positive ^ y_positive) && (x_positive ^ sum_positive));
}
```

```c
/* Determine whether arguments can be added without overflow */
/**
 * Addition doesn't overflow if either x or y equals 0
 * This form is easy to remember and conforms the principle stated on page 128
 */
int tadd_ok(int x, int y) {
    int sum = x + y;
    int neg_over = x < 0 && y < 0 && sum >= 0;
    int pos_over = x > 0 && y > 0 && sum <= 0;
    return !neg_over && !pos_over;
}
```

```c
/* Determine whether arguments can be added without overflow */
/**
 * This is the solution from the book, but it's less readable.
 */
int tadd_ok(int x, int y) {
    int sum = x + y;
    int neg_over = x < 0 && y < 0 && sum >= 0;
    int pos_over = x >= 0 && y >= 0 && sum < 0;
    return !neg_over && !pos_over;
}
```

## Practice Problem 2.31

This function always return 1 even for overflow cases

__Two’s complement addition forms an abelian group, so the expression (x+y)-x will evaluate to y regardless of whether or not the addition overﬂows, and (x+y)-y will always evaluate to x.__

## Practice Problem 2.32

Because of the asymmetry, it returns incorrect answer when y equals INT_MIN

__One lesson to be learned from this exercise is that TMin should be included as one of the cases in any test procedure for a function.__

## Practice Problem 2.33

| $x$ Hex | $x$ Decimal | $-^t_4x$ Decimal | $-^u_4x$ Hex |
| :-----: | :---------: | :--------------: | :----------: |
|    2    |      2      |        -2        |      E       |
|    3    |      3      |        -3        |      D       |
|    9    |     -7      |        7         |      7       |
|    B    |     -5      |        5         |      5       |
|    C    |     -4      |        4         |      4       |

$$
x+-^u_4x=2^4 \\[2mm]
x+-^t_4x=2^4
$$

## Practice Problem 2.34

|       Mode       |     x      |     y      |  $x\cdot y$   | Truncated $x\cdot y$ |
| :--------------: | :--------: | :--------: | :-----------: | :------------------: |
|     Unsigned     | 4 `[100]`  | 5 `[101]`  | 20  `[10100]` |     4   `[100]`      |
| Two’s complement | -4 `[100]` | -3 `[101]` | 12  `[01100]` |     -4   `[100]`     |
|     Unsigned     | 2 `[010]`  | 7 `[111]`  | 14  `[1110]`  |     6   `[110]`      |
| Two’s complement | 2 `[010]`  | -1 `[111]` |  -2  `[110]`  |     -2   `[110]`     |
|     Unsigned     | 6 `[110]`  | 6 `[110]`  | 36 `[100100]` |     4   `[100]`      |
| Two’s complement | -2 `[110]` | -2 `[110]` |  4  `[0100]`  |     -4   `[100]`     |

<!-- ## Practice Problem 2.35

1. We have
   $$
   p=x*^t_w y \\[2mm]
   =U2T_w((x \cdot y) \mod 2^w)
   $$
   Let $u=(x \cdot y) \mod 2^w$, then
   $$
   u=x \cdot y+k2^w \\[5mm]
   p=U2T_w(u)=−u_{w−1}2^w + u \\[2mm]
   =−u_{w−1}2^w + x \cdot y+k2^w \\[2mm]
   =x \cdot y + (k−u_{w−1})2^w \\[5mm]
   x \cdot y=p+(u_{w−1}-k)2^w = p+t2^w
   $$

   If the computation doesn't overflow, $x\cdot y=p$, thus $t=0$ in $x\cdot y=p+t2^w$, thus $t \ne 0 \rArr overflow$
   $$
   \text{The computation overflows} \\[2mm]
   \Leftrightarrow x\cdot y \ne p \\[2mm]
   \Leftrightarrow t \ne 0
   $$
2. We have
   $$
   p=x \cdot y - t2^w \\[5mm]
   q=p/x \\[2mm]
   =y-t2^w / x
   $$ -->

