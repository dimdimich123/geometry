#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Str();
void circle();
const char B[] = "circle", E[] = "exit";
char A[6], C[6], F[6], D[256];
int x1, u1, x2, u2, x3, u3, p0, r1, r2, r3, f;
float plosh, perim;

void circle(int f)
{
    plosh = 3.14 * f * f;
    printf("plosh=%3.3f\n", plosh);
    perim = 2 * 3.14 * f;
    printf("perim=%3.3f\n", perim);
    return;
}

void Str()
{
    int i = 0, d = 0, m, k, l, a, n, s, c;
    printf("Input String: \n");
    scanf("%s", D);
    if (strncmp(E, D, 4) != 0) {
        if (strncmp(B, D, 6) != 0) {
            printf("unknown shape '%s'\n", D);
            Str();
        } else {
            for (i = 7; D[i] != ','; i++) {
                A[d] = D[i];
                if (A[d] == ')') {
                    printf("invalid input format\n");
                    Str();
                }
                d++;
            }
            m = d - 1;
            d = 0;
            for (i++; D[i] != ','; i++) {
                C[d] = D[i];
                d++;
            }
            k = d - 1;
            d = 0;
            for (i++; D[i] != ')'; i++) {
                F[d] = D[i];
                d++;
            }
            l = d - 1;
            for (n = 1, a = 0; m > -1; m--) {
                if (A[m] == '1')
                    s = 1;
                if (A[m] == '2')
                    s = 2;
                if (A[m] == '3')
                    s = 3;
                if (A[m] == '4')
                    s = 4;
                if (A[m] == '5')
                    s = 5;
                if (A[m] == '6')
                    s = 6;
                if (A[m] == '7')
                    s = 7;
                if (A[m] == '8')
                    s = 8;
                if (A[m] == '9')
                    s = 9;
                if (A[m] == '0')
                    s = 0;
                if (A[m] == '-') {
                    a *= -1;
                    break;
                }
                a += s * n;
                n *= 10;
            }
            for (n = 1, c = 0; k > -1; k--) {
                if (C[k] == '1')
                    s = 1;
                if (C[k] == '2')
                    s = 2;
                if (C[k] == '3')
                    s = 3;
                if (C[k] == '4')
                    s = 4;
                if (C[k] == '5')
                    s = 5;
                if (C[k] == '6')
                    s = 6;
                if (C[k] == '7')
                    s = 7;
                if (C[k] == '8')
                    s = 8;
                if (C[k] == '9')
                    s = 9;
                if (C[k] == '0')
                    s = 0;
                if (C[k] == '-') {
                    c *= -1;
                    break;
                }
                c += s * n;
                n *= 10;
            }
            for (n = 1, f = 0; l > -1; l--) {
                if (F[l] == '1')
                    s = 1;
                if (F[l] == '2')
                    s = 2;
                if (F[l] == '3')
                    s = 3;
                if (F[l] == '4')
                    s = 4;
                if (F[l] == '5')
                    s = 5;
                if (F[l] == '6')
                    s = 6;
                if (F[l] == '7')
                    s = 7;
                if (F[l] == '8')
                    s = 8;
                if (F[l] == '9')
                    s = 9;
                if (F[l] == '0')
                    s = 0;
                if (F[l] == '-') {
                    f *= -1;
                    break;
                }
                f += s * n;
                n *= 10;
            }
            if (p0 == 1) {
                x1 = a;
                u1 = c;
            }
            if (p0 == 2) {
                x2 = a;
                u2 = c;
            }
            if (p0 == 3) {
                x3 = a;
                u3 = c;
            }
            return;
        }
    } else
        return;
}

int main()
{
    float nm;
    p0 = 1;
    Str();
    r1 = f;
    p0 = 2;
    Str();
    r2 = f;
    p0 = 3;
    Str();
    r3 = f;

    printf("\n1.circle(%d,%d,%d)\n", x1, u1, r1);
    circle(r1);
    nm = sqrt(pow(x2 - x1, 2) + pow(u2 - u1, 2));
    printf("intersects:\n");
    if (nm <= r1 + r2)
        printf("2.circle(%d,%d,%d)", x2, u2, r2);
    nm = sqrt(pow(x3 - x1, 2) + pow(u3 - u1, 2));
    if (nm <= r1 + r3)
        printf("\n3.circle(%d,%d,%d)\n", x3, u3, r3);

    printf("\n2.circle(%d,%d,%d)\n", x2, u2, r2);
    circle(r2);
    nm = sqrt(pow(x1 - x2, 2) + pow(u1 - u2, 2));
    printf("intersects:\n");
    if (nm <= r1 + r2)
        printf("1.circle(%d,%d,%d)", x1, u1, r1);
    nm = sqrt(pow(x3 - x2, 2) + pow(u3 - u2, 2));
    if (nm <= r2 + r3)
        printf("\n3.circle(%d,%d,%d)\n", x3, u3, r3);

    printf("\n3.circle(%d,%d,%d)\n", x3, u3, r3);
    circle(r3);
    nm = sqrt(pow(x1 - x3, 2) + pow(u1 - u3, 2));
    printf("intersects:\n");
    if (nm <= r1 + r3)
        printf("1.circle(%d,%d,%d)", x1, u1, r1);
    nm = sqrt(pow(x3 - x2, 2) + pow(u3 - u2, 2));
    if (nm <= r2 + r3)
        printf("\n2.circle(%d,%d,%d)\n", x2, u2, r2);

    return 0;
}
