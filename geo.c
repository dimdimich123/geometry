#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Str(int& x1,
        int& u1,
        int& r1,
        int& xt1,
        int& yt1,
        int& xt2,
        int& yt2,
        int& xt3,
        int& yt3,
        int& px1,
        int& py1,
        int& px2,
        int& py2,
        int& px3,
        int& py3,
        int& px4,
        int& py4);
void circle(int f);
void triangle(int xt1, int yt1, int xt2, int yt2, int xt3, int yt3);
const char B[] = "circle", E[] = "exit", T[] = "triangle", P[] = "polygon";
char A[8], C[8], F[8], D[100], FI1[100], FI2[100], FI3[245], H[8], G[8], J[8],
        K[8], O[8];
int bb;

void circle(int f)
{
    float ploshs, perims;
    ploshs = 3.14 * f * f;
    printf("plosh=%3.3f\n", ploshs);
    perims = 2 * 3.14 * f;
    printf("perim=%3.3f\n", perims);
    return;
}

void triangle(int xt1, int yt1, int xt2, int yt2, int xt3, int yt3)
{
    float p, plosh, perim, str1, str2, str3;
    ;
    str1 = sqrt(pow(xt2 - xt1, 2) + pow(yt2 - yt1, 2));
    str2 = sqrt(pow(xt3 - xt1, 2) + pow(yt3 - yt1, 2));
    str3 = sqrt(pow(xt3 - xt2, 2) + pow(yt3 - yt2, 2));
    p = (str1 + str2 + str3) / 2;
    perim = str1 + str2 + str3;
    plosh = sqrt(p * (p - str1) * (p - str2) * (p - str3));
    printf("Plosh=%f\n", plosh);
    printf("Perim=%f\n", perim);
    return;
}

int Str(int& x1,
        int& u1,
        int& r1,
        int& xt1,
        int& yt1,
        int& xt2,
        int& yt2,
        int& xt3,
        int& yt3,
        int& px1,
        int& py1,
        int& px2,
        int& py2,
        int& px3,
        int& py3,
        int& px4,
        int& py4)
{
    int i = 0, d = 0;
    printf("Input String: \n");
    scanf("%s", D);
    if (strncmp(E, D, 4) != 0)
        if (strncmp(P, D, 7) != 0)
            if (strncmp(T, D, 8) != 0)
                if (strncmp(B, D, 6) != 0) {
                    printf("unknown shape '%s'\n", D);
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
                            printf("invalid input format\n");
                            return 0;
                        }
                        d++;
                    }
                    d = 0;
                    for (i++; D[i] != ','; i++) {
                        C[d] = D[i];
                        d++;
                    }
                    d = 0;
                    for (i++; D[i] != ')'; i++) {
                        F[d] = D[i];
                        d++;
                    }
                    x1 = atoi(A);
                    u1 = atoi(C);
                    r1 = atoi(F);
                    return 1;
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
                        printf("invalid input format\n");
                        return 0;
                    }
                    d++;
                }
                d = 0;
                for (i++; D[i] != ','; i++) {
                    C[d] = D[i];
                    d++;
                }
                d = 0;
                for (i++; D[i] != ','; i++) {
                    F[d] = D[i];
                    d++;
                }
                d = 0;
                for (i++; D[i] != ','; i++) {
                    H[d] = D[i];
                    d++;
                }
                d = 0;
                for (i++; D[i] != ','; i++) {
                    G[d] = D[i];
                    d++;
                }
                d = 0;
                for (i++; D[i] != ')'; i++) {
                    J[d] = D[i];
                    d++;
                }
                xt1 = atoi(A);
                yt1 = atoi(C);
                xt2 = atoi(F);
                yt2 = atoi(H);
                xt3 = atoi(G);
                yt3 = atoi(J);
                return 1;
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
                    printf("invalid input format\n");
                    return 0;
                }
                d++;
            }
            d = 0;
            for (i++; D[i] != ','; i++) {
                C[d] = D[i];
                d++;
            }
            d = 0;
            for (i++; D[i] != ','; i++) {
                F[d] = D[i];
                d++;
            }
            d = 0;
            for (i++; D[i] != ','; i++) {
                H[d] = D[i];
                d++;
            }
            d = 0;
            for (i++; D[i] != ','; i++) {
                G[d] = D[i];
                d++;
            }
            d = 0;
            for (i++; D[i] != ','; i++) {
                J[d] = D[i];
                d++;
            }
            d = 0;
            for (i++; D[i] != ','; i++) {
                K[d] = D[i];
                d++;
            }
            d = 0;
            for (i++; D[i] != ')'; i++) {
                O[d] = D[i];
                d++;
            }

            px1 = atoi(A);
            py1 = atoi(C);
            px2 = atoi(F);
            py2 = atoi(H);
            px3 = atoi(G);
            py3 = atoi(J);
            px4 = atoi(K);
            py4 = atoi(O);
        }
    else
        return 3;
}

int main()
{
    int x1, u1, x2, u2, x3, u3, p0, r1, r2, r3, f, xt1, xt2, xt3, yt1, yt2, yt3,
            xt4, xt5, xt6, yt4, yt5, yt6, xt7, xt8, xt9, yt7, yt8, yt9, px1,
            py1, px2, py2, px3, py3, px4, py4, px5, py5, px6, py6, px7, py7,
            px8, py8, px9, py9, px10, py10, px11, py11, px12, py12;
    int flag, ps2 = 0, ps3 = 0, ps4;
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
                      py4);
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
                      py8);
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
                      py12);
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

    puts("\n");
    if (strncmp(T, FI2, 6) == 0) {
        puts(FI2);
        triangle(xt4, yt4, xt5, yt5, xt6, yt6);
    }
    if (strncmp(B, FI2, 6) == 0) {
        puts(FI2);
        circle(r2);
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

    return 0;
}
