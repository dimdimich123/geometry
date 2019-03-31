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
        int& yt3);
void circle(int f);
const char B[] = "circle", E[] = "exit", T[] = "triangle";
char A[8], C[8], F[8], D[100], FI1[100], FI2[100], FI3[245], H[8], G[8], J[8];
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

int Str(int& x1,
        int& u1,
        int& r1,
        int& xt1,
        int& yt1,
        int& xt2,
        int& yt2,
        int& xt3,
        int& yt3)
{
    int i = 0, d = 0;
    printf("Input String: \n");
    scanf("%s", D);
    if (strncmp(E, D, 4) != 0) {
        if (strncmp(T, D, 8) != 0) {
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
        } else {
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
    } else
        return 3;
}

int main()
{
    int x1, u1, x2, u2, x3, u3, p0, r1, r2, r3, f, xt1, xt2, xt3, yt1, yt2, yt3,
            xt4, xt5, xt6, yt4, yt5, yt6, xt7, xt8, xt9, yt7, yt8, yt9;
    int flag, ps2 = 0, ps3 = 0, ps4;
    return 0;
}
