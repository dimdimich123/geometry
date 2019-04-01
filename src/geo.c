#include "Str.h"
#include "circle.h"
#include "polygon.h"
#include "triangle.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char B[] = "circle", T[] = "triangle", P[] = "polygon";
    char FI1[100], FI2[100], FI3[245];
    int bb = 0;
    int x1, u1, x2, u2, x3, u3, r1, r2, r3, xt1, xt2, xt3, yt1, yt2, yt3, xt4,
            xt5, xt6, yt4, yt5, yt6, xt7, xt8, xt9, yt7, yt8, yt9, px1, py1,
            px2, py2, px3, py3, px4, py4, px5, py5, px6, py6, px7, py7, px8,
            py8, px9, py9, px10, py10, px11, py11, px12, py12;
    int flag;
    bb = 1;
    while (1) {
        flag
                = Str(x1,
                      u1,
                      r1,
                      xt1,
                      yt1,
                      xt2,
                      yt2,
                      xt3,
                      yt3,
                      px1,
                      py1,
                      px2,
                      py2,
                      px3,
                      py3,
                      px4,
                      py4,
                      bb,
                      FI1,
                      FI2,
                      FI3);
        if (flag)
            break;
        if (flag == 3)
            return 0;
    }
    bb = 2;
    while (1) {
        flag
                = Str(x2,
                      u2,
                      r2,
                      xt4,
                      yt4,
                      xt5,
                      yt5,
                      xt6,
                      yt6,
                      px5,
                      py5,
                      px6,
                      py6,
                      px7,
                      py7,
                      px8,
                      py8,
                      bb,
                      FI1,
                      FI2,
                      FI3);
        if (flag)
            break;
        if (flag == 3)
            return 0;
    }
    bb = 3;
    while (1) {
        flag
                = Str(x3,
                      u3,
                      r3,
                      xt7,
                      yt7,
                      xt8,
                      yt8,
                      xt9,
                      yt9,
                      px9,
                      py9,
                      px10,
                      py10,
                      px11,
                      py11,
                      px12,
                      py12,
                      bb,
                      FI1,
                      FI2,
                      FI3);
        if (flag)
            break;
        if (flag == 3)
            return 0;
    }
    puts("\n");
    if (strncmp(T, FI1, 6) == 0) {
        puts(FI1);
        triangle(xt1, yt1, xt2, yt2, xt3, yt3);
    }
    if (strncmp(B, FI1, 6) == 0) {
        puts(FI1);
        circle(r1);
    }
    if (strncmp(P, FI1, 7) == 0) {
        puts(FI1);
        polygon(px1, py1, px2, py2, px3, py3, px4, py4);
    }

    puts("\n");
    if (strncmp(T, FI2, 6) == 0) {
        puts(FI2);
        triangle(xt4, yt4, xt5, yt5, xt6, yt6);
    }
    if (strncmp(B, FI2, 6) == 0) {
        puts(FI2);
        circle(r2);
    }
    if (strncmp(P, FI2, 7) == 0) {
        puts(FI2);
        polygon(px5, py5, px6, py6, px7, py7, px8, py8);
    }

    puts("\n");
    if (strncmp(T, FI3, 6) == 0) {
        puts(FI3);
        triangle(xt7, yt7, xt8, yt8, xt9, yt9);
    }
    if (strncmp(B, FI3, 6) == 0) {
        puts(FI3);
        circle(r3);
    }
    if (strncmp(P, FI3, 7) == 0) {
        puts(FI3);
        polygon(px9, py9, px10, py10, px11, py11, px12, py12);
    }

    return 0;
}
