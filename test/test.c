#include "ctest.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Str(int x1,
        int u1,
        int r1,
        int xt1,
        int yt1,
        int xt2,
        int yt2,
        int xt3,
        int yt3,
        int px1,
        int py1,
        int px2,
        int py2,
        int px3,
        int py3,
        int px4,
        int py4,
        int bb,
        char FI1[],
        char FI2[],
        char FI3[],
        char D[])
{
    char B[] = "circle", E[] = "exit", T[] = "triangle", P[] = "polygon";
    char A[8], C[8], F[8], H[8], G[8], J[8], K[8], O[8];
    int i = 0, d = 0;
    if (strncmp(E, D, 4) != 0)
        if (strncmp(P, D, 7) != 0)
            if (strncmp(T, D, 8) != 0)
                if (strncmp(B, D, 6) != 0) {
                    return 0;
                } else {
                    if (bb == 1)
                        strcpy(FI1, D);
                    if (bb == 2)
                        strcpy(FI2, D);
                    if (bb == 3)
                        strcpy(FI3, D);
                    for (i = 7; D[i] != ','; i++) {
                        A[d] = D[i];
                        if (A[d] == ')') {
                            return 0;
                        }
                        d++;
                    }
                    A[d] = '\0';
                    d = 0;
                    for (i++; D[i] != ','; i++) {
                        if (D[i] == ')')
                            return 0;
                        C[d] = D[i];
                        d++;
                    }
                    C[d] = '\0';
                    d = 0;
                    for (i++; D[i] != ')'; i++) {
                        if (D[i] == ')')
                            return 0;
                        F[d] = D[i];
                        d++;
                    }
                    F[d] = '\0';
                    x1 = atoi(A);
                    u1 = atoi(C);
                    r1 = atoi(F);
                    if (r1 <= 0) {
                        return 0;
                    }
                    return x1 + u1 + r1;
                }
            else {
                if (bb == 1)
                    strcpy(FI1, D);
                if (bb == 2)
                    strcpy(FI2, D);
                if (bb == 3)
                    strcpy(FI3, D);
                for (i = 9; D[i] != ','; i++) {
                    A[d] = D[i];
                    if (A[d] == ')') {
                        return 0;
                    }
                    d++;
                }
                A[d] = '\0';
                d = 0;
                for (i++; D[i] != ','; i++) {
                    if (D[i] == ')')
                        return 0;
                    C[d] = D[i];
                    d++;
                }

                C[d] = '\0';
                d = 0;
                for (i++; D[i] != ','; i++) {
                    if (D[i] == ')')
                        return 0;
                    F[d] = D[i];
                    d++;
                }

                F[d] = '\0';
                d = 0;
                for (i++; D[i] != ','; i++) {
                    if (D[i] == ')')
                        return 0;
                    H[d] = D[i];
                    d++;
                }

                H[d] = '\0';
                d = 0;
                for (i++; D[i] != ','; i++) {
                    if (D[i] == ')')
                        return 0;
                    G[d] = D[i];
                    d++;
                }

                G[d] = '\0';
                d = 0;
                for (i++; D[i] != ')'; i++) {
                    if (D[i] == ')')
                        return 0;
                    J[d] = D[i];
                    d++;
                }
                J[d] = '\0';
                xt1 = atoi(A);
                yt1 = atoi(C);
                xt2 = atoi(F);
                yt2 = atoi(H);
                xt3 = atoi(G);
                yt3 = atoi(J);
                if ((xt1 == xt2 && yt1 == yt2) == 1
                    || (xt1 == xt3 && yt1 == yt3) == 1
                    || (xt3 == xt2 && yt3 == yt2) == 1) {
                    return 0;
                }
                return xt1 + yt1 + xt2 + yt2 + xt3 + yt3;
            }
        else {
            if (bb == 1)
                strcpy(FI1, D);
            if (bb == 2)
                strcpy(FI2, D);
            if (bb == 3)
                strcpy(FI3, D);
            for (i = 8; D[i] != ','; i++) {
                A[d] = D[i];
                if (A[d] == ')') {
                    return 0;
                }
                d++;
            }
            A[d] = '\0';
            d = 0;
            for (i++; D[i] != ','; i++) {
                if (D[i] == ')')
                    return 0;
                C[d] = D[i];
                d++;
            }
            C[d] = '\0';
            d = 0;
            for (i++; D[i] != ','; i++) {
                if (D[i] == ')')
                    return 0;
                F[d] = D[i];
                d++;
            }
            F[d] = '\0';
            d = 0;
            for (i++; D[i] != ','; i++) {
                if (D[i] == ')')
                    return 0;
                H[d] = D[i];
                d++;
            }
            H[d] = '\0';
            d = 0;
            for (i++; D[i] != ','; i++) {
                if (D[i] == ')')
                    return 0;
                G[d] = D[i];
                d++;
            }
            G[d] = '\0';
            d = 0;
            for (i++; D[i] != ','; i++) {
                if (D[i] == ')')
                    return 0;
                J[d] = D[i];
                d++;
            }
            J[d] = '\0';
            d = 0;
            for (i++; D[i] != ','; i++) {
                if (D[i] == ')')
                    return 0;
                K[d] = D[i];
                d++;
            }
            K[d] = '\0';
            d = 0;
            for (i++; D[i] != ')'; i++) {
                if (D[i] == ')')
                    return 0;
                O[d] = D[i];
                d++;
            }
            O[d] = '\0';

            px1 = atoi(A);
            py1 = atoi(C);
            px2 = atoi(F);
            py2 = atoi(H);
            px3 = atoi(G);
            py3 = atoi(J);
            px4 = atoi(K);
            py4 = atoi(O);
            if ((px1 == px2 && py1 == py2) == 1
                || (px1 == px3 && py1 == py3) == 1
                || (px1 == px4 && py1 == py4) == 1
                || (px3 == px2 && py3 == py2) == 1
                || (px4 == px2 && py4 == py2) == 1
                || (px3 == px4 && py3 == py4) == 1) {
                return 0;
            }
            return px1 + py1 + px2 + py2 + px3 + py3 + px4 + py4;
        }
    else
        return 3;
    return 1;
}

float circlePerim(int f)
{
    float perims;
    perims = 2 * 3.14 * f;
    return perims;
}

float circleArea(int f)
{
    float ploshs;
    ploshs = 3.14 * f * f;
    return ploshs;
}
float polygonArea(
        int px1, int py1, int px2, int py2, int px3, int py3, int px4, int py4)
{
    float ploshs = 0;
    ploshs = abs((px1 * py2) + (px2 * py3) + (px3 * py4) + (px4 * py1)
                 - (px2 * py1) - (px3 * py2) - (px4 * py3) - (px1 * py4))
            / 2;
    return ploshs;
}

float polygonPerim(
        int px1, int py1, int px2, int py2, int px3, int py3, int px4, int py4)
{
    float perims = 0, str1 = 0, str2 = 0, str3 = 0, str4 = 0;
    str1 = sqrt(pow(px2 - px1, 2) + pow(py2 - py1, 2));
    str2 = sqrt(pow(px3 - px2, 2) + pow(py3 - py2, 2));
    str3 = sqrt(pow(px4 - px3, 2) + pow(py4 - py3, 2));
    str4 = sqrt(pow(px1 - px4, 2) + pow(py1 - py4, 2));
    perims = str1 + str2 + str3 + str4;
    return perims;
}

float triangleArea(int xt1, int yt1, int xt2, int yt2, int xt3, int yt3)
{
    float p, plosh, str1, str2, str3;
    str1 = sqrt(pow(xt2 - xt1, 2) + pow(yt2 - yt1, 2));
    str2 = sqrt(pow(xt3 - xt1, 2) + pow(yt3 - yt1, 2));
    str3 = sqrt(pow(xt3 - xt2, 2) + pow(yt3 - yt2, 2));
    p = (str1 + str2 + str3) / 2;
    plosh = sqrt(p * (p - str1) * (p - str2) * (p - str3));
    return plosh;
}

float trianglePerim(int xt1, int yt1, int xt2, int yt2, int xt3, int yt3)
{
    float perim, str1, str2, str3;
    str1 = sqrt(pow(xt2 - xt1, 2) + pow(yt2 - yt1, 2));
    str2 = sqrt(pow(xt3 - xt1, 2) + pow(yt3 - yt1, 2));
    str3 = sqrt(pow(xt3 - xt2, 2) + pow(yt3 - yt2, 2));
    perim = str1 + str2 + str3;
    return perim;
}

CTEST(Perim, circle)
{
    float a, x;
    int c;
    a = 6.28;
    c = 1;
    x = circlePerim(c);
    ASSERT_DBL_NEAR_TOL(x, a, 0.01);
    a = 69.08;
    c = 11;
    x = circlePerim(c);
    ASSERT_DBL_NEAR_TOL(x, a, 0.01);
    a = 43.96;
    c = 7;
    x = circlePerim(c);
    ASSERT_DBL_NEAR_TOL(x, a, 0.01);
}

CTEST(Area, circle)
{
    float a, x;
    int c;
    a = 3.14;
    c = 1;
    x = circleArea(c);
    ASSERT_DBL_NEAR_TOL(x, a, 0.01);
    a = 153.86;
    c = 7;
    x = circleArea(c);
    ASSERT_DBL_NEAR_TOL(x, a, 0.01);
    a = 379.94;
    c = 11;
    x = circleArea(c);
    ASSERT_DBL_NEAR_TOL(x, a, 0.01);
}

CTEST(Area, triangle)
{
    int x1, y1, x2, y2, x3, y3;
    float x, a;
    x1 = 0;
    y1 = 0;
    x2 = 0;
    y2 = 5;
    x3 = 5;
    y3 = 0;
    a = 12.50;
    x = triangleArea(x1, y1, x2, y2, x3, y3);
    ASSERT_DBL_NEAR_TOL(x, a, 0.1);
    x1 = -5;
    y1 = 0;
    x2 = 5;
    y2 = 0;
    x3 = 0;
    y3 = 10;
    a = 50;
    x = triangleArea(x1, y1, x2, y2, x3, y3);
    ASSERT_DBL_NEAR_TOL(x, a, 0.01);
    x1 = -10;
    y1 = -5;
    x2 = -5;
    y2 = -10;
    x3 = 3;
    y3 = 3;
    a = 52.5;
    x = triangleArea(x1, y1, x2, y2, x3, y3);
    ASSERT_DBL_NEAR_TOL(x, a, 0.01);
}

CTEST(Perim, triangle)
{
    int x1, y1, x2, y2, x3, y3;
    float x, a;
    x1 = 0;
    y1 = 0;
    x2 = 0;
    y2 = 5;
    x3 = 5;
    y3 = 0;
    a = 17.071;
    x = trianglePerim(x1, y1, x2, y2, x3, y3);
    ASSERT_DBL_NEAR_TOL(x, a, 0.01);
    x1 = -5;
    y1 = 0;
    x2 = 5;
    y2 = 0;
    x3 = 0;
    y3 = 10;
    a = 32.36;
    x = trianglePerim(x1, y1, x2, y2, x3, y3);
    ASSERT_DBL_NEAR_TOL(x, a, 0.01);
    x1 = -10;
    y1 = -5;
    x2 = -5;
    y2 = -10;
    x3 = 3;
    y3 = 3;
    a = 37.59;
    x = trianglePerim(x1, y1, x2, y2, x3, y3);
    ASSERT_DBL_NEAR_TOL(x, a, 0.01);
}

CTEST(Area, polygon)
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    float x, a;
    x1 = 0;
    y1 = 0;
    x2 = 0;
    y2 = 5;
    x3 = 5;
    y3 = 5;
    x4 = 5;
    y4 = 0;
    a = 25;
    x = polygonArea(x1, y1, x2, y2, x3, y3, x4, y4);
    ASSERT_DBL_NEAR_TOL(x, a, 0.01);
    x1 = -7;
    y1 = -1;
    x2 = 1;
    y2 = 3;
    x3 = -1;
    y3 = -3;
    x4 = -5;
    y4 = -10;
    a = 45;
    x = polygonArea(x1, y1, x2, y2, x3, y3, x4, y4);
    ASSERT_DBL_NEAR_TOL(x, a, 0.01);
    x1 = 0;
    y1 = 10;
    x2 = 5;
    y2 = 0;
    x3 = 0;
    y3 = -10;
    x4 = -5;
    y4 = 0;
    a = 100;
    x = polygonArea(x1, y1, x2, y2, x3, y3, x4, y4);
    ASSERT_DBL_NEAR_TOL(x, a, 0.01);
}

CTEST(Perim, polygon)
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    float x, a;
    x1 = 0;
    y1 = 0;
    x2 = 0;
    y2 = 5;
    x3 = 5;
    y3 = 5;
    x4 = 5;
    y4 = 0;
    a = 20;
    x = polygonPerim(x1, y1, x2, y2, x3, y3, x4, y4);
    ASSERT_DBL_NEAR_TOL(x, a, 0.01);
    x1 = -7;
    y1 = -1;
    x2 = 1;
    y2 = 3;
    x3 = -1;
    y3 = -3;
    x4 = -5;
    y4 = -10;
    a = 32.55;
    x = polygonPerim(x1, y1, x2, y2, x3, y3, x4, y4);
    ASSERT_DBL_NEAR_TOL(x, a, 0.01);
    x1 = 0;
    y1 = 10;
    x2 = 5;
    y2 = 0;
    x3 = 0;
    y3 = -10;
    x4 = -5;
    y4 = 0;
    a = 44.72;
    x = polygonPerim(x1, y1, x2, y2, x3, y3, x4, y4);
    ASSERT_DBL_NEAR_TOL(x, a, 0.01);
}

CTEST(chartoint, Str)
{
    int a, x;
    char FI1[100], FI2[100], FI3[245], D[100];
    int bb = 0;
    int x1, u1, x2, u2, x3, u3, r1, r2, r3, xt1, xt2, xt3, yt1, yt2, yt3, xt4,
            xt5, xt6, yt4, yt5, yt6, xt7, xt8, xt9, yt7, yt8, yt9, px1, py1,
            px2, py2, px3, py3, px4, py4, px5, py5, px6, py6, px7, py7, px8,
            py8, px9, py9, px10, py10, px11, py11, px12, py12;
    strcpy(D, "circle(0,0,15)");
    a = 15;
    x = Str(x1,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x2,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x3,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "circle(-6,-6,15)");
    a = 3;
    x = Str(x1,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x2,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x3,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "circle(-6)");
    a = 0;
    x = Str(x1,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x2,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x3,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "circle(555,-222,0)");
    a = 0;
    x = Str(x1,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x2,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x3,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "aafsdfwefw(-6,-6,15)");
    a = 0;
    x = Str(x1,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x2,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x3,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "circle()");
    a = 0;
    x = Str(x1,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x2,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x3,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "triangle(1,1,1,1,2,2)");
    a = 0;
    x = Str(x1,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x2,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x3,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "triangle(1,1,1,1,2,2)");
    a = 0;
    x = Str(x1,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x2,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x3,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "triangle(1,1,2,2,2,2)");
    a = 0;
    x = Str(x1,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x2,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x3,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "triangle(0,0,0,5,5,0)");
    a = 10;
    x = Str(x1,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x2,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x3,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "triangle(-10,-10,0,5,-7,15)");
    a = -7;
    x = Str(x1,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x2,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x3,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "triangle()");
    a = 0;
    x = Str(x1,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x2,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x3,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "triangle(5,5,6,6)");
    a = 0;
    x = Str(x1,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x2,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x3,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "triangle(5,6,6,7,8)");
    a = 0;
    x = Str(x1,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x2,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x3,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "polygon(0,0,0,5,5,5,5,0)");
    a = 20;
    x = Str(x1,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x2,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x3,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "polygon(-5,12)");
    a = 0;
    x = Str(x1,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x2,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x3,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "polygon(-3,-3,-3,3,3,3,3,-3)");
    a = 0;
    x = Str(x1,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x2,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x3,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "polygon(0,-3,3,3,0,3,-5,3)");
    a = 4;
    x = Str(x1,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x2,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
    x = Str(x3,
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
            FI3,
            D);
    ASSERT_EQUAL(x, a);
}




