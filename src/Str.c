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
        int& py4,
        int& bb,
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
                        printf("invalid input format\n");
                        return 0;
                    }
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
                    printf("invalid input format\n");
                    return 0;
                }
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
                printf("invalid input format\n");
                return 0;
            }
            return 1;
        }
    else
        return 3;
    return 1;
}
