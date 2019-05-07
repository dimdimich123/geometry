/*x=Str(x1,u1,r1,xt1,yt1,xt2,yt2,xt3,yt3,px1,py1,px2,py2,px3,py3,px4,py4,bb,FI1,FI2,FI3,D);
x=Str(x2,u2,r2,xt4,yt4,xt5,yt5,xt6,yt6,px5,py5,px6,py6,px7,py7,px8,py8,bb,FI1,FI2,FI3,D);
x=Str(x3,u3,r3,xt7,yt7,xt8,yt8,xt9,yt9,px9,py9,px10,py10,px11,py11,px12,py12,bb,FI1,FI2,FI3,D);*/
#include "ctest.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int SectPP(
        int px1,
        int py1,
        int px2,
        int py2,
        int px3,
        int py3,
        int px4,
        int py4,
        int px5,
        int py5,
        int px6,
        int py6,
        int px7,
        int py7,
        int px8,
        int py8)
{
    float ua, ub;
    ua = (float)((px5 - px8) * (py1 - py8) - (py5 - py8) * (px1 - px8))
            / ((py5 - py8) * (px2 - px1) - (px5 - px8) * (py2 - py1)); // 1-1
    ub = (float)((px2 - px1) * (py1 - py8) - (py2 - py1) * (px1 - px8))
            / ((py5 - py8) * (px2 - px1) - (px5 - px8) * (py2 - py1));
    if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
        return 1;
    else {
        ua = (float)((px6 - px5) * (py1 - py5) - (py6 - py5) * (px1 - px5))
                / ((py6 - py5) * (px2 - px1)
                   - (px6 - px5) * (py2 - py1)); // 1-2
        ub = (float)((px2 - px1) * (py1 - py5) - (py2 - py1) * (px1 - px5))
                / ((py6 - py5) * (px2 - px1) - (px6 - px5) * (py2 - py1));
        if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
            return 1;
        else {
            ua = (float)((px6 - px7) * (py1 - py7) - (py6 - py7) * (px1 - px7))
                    / ((py6 - py7) * (px2 - px1)
                       - (px6 - px7) * (py2 - py1)); // 1-3
            ub = (float)((px2 - px1) * (py1 - py7) - (py2 - py1) * (px1 - px7))
                    / ((py6 - py7) * (px2 - px1) - (px6 - px7) * (py2 - py1));
            if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
                return 1;
            else {
                ua = (float)((px5 - px8) * (py1 - py8)
                             - (py5 - py8) * (px1 - px8))
                        / ((py5 - py8) * (px4 - px1)
                           - (px5 - px8) * (py4 - py1)); // 2-1
                ub = (float)((px4 - px1) * (py1 - py8)
                             - (py4 - py1) * (px1 - px8))
                        / ((py5 - py8) * (px4 - px1)
                           - (px5 - px8) * (py4 - py1));
                if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
                    return 1;
                else {
                    ua = (float)((px6 - px5) * (py1 - py5)
                                 - (py6 - py5) * (px1 - px5))
                            / ((py6 - py5) * (px4 - px1)
                               - (px6 - px5) * (py4 - py1)); // 2-2
                    ub = (float)((px4 - px1) * (py1 - py5)
                                 - (py4 - py1) * (px1 - px5))
                            / ((py6 - py5) * (px4 - px1)
                               - (px6 - px5) * (py4 - py1));
                    if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
                        return 1;
                    else {
                        ua = (float)((px6 - px7) * (py1 - py7)
                                     - (py6 - py7) * (px1 - px7))
                                / ((py6 - py7) * (px4 - px1)
                                   - (px6 - px7) * (py4 - py1)); // 2-3
                        ub = (float)((px4 - px1) * (py1 - py7)
                                     - (py4 - py1) * (px1 - px7))
                                / ((py6 - py7) * (px4 - px1)
                                   - (px6 - px7) * (py4 - py1));
                        if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
                            return 1;
                        else {
                            ua = (float)((px5 - px8) * (py3 - py8)
                                         - (py5 - py8) * (px3 - px8))
                                    / ((py5 - py8) * (px2 - px3)
                                       - (px5 - px8) * (py2 - py3)); // 3-1
                            ub = (float)((px2 - px3) * (py3 - py8)
                                         - (py2 - py3) * (px3 - px8))
                                    / ((py5 - py8) * (px2 - px3)
                                       - (px5 - px8) * (py2 - py3));
                            if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
                                return 1;
                            else {
                                ua = (float)((px6 - px5) * (py3 - py5)
                                             - (py6 - py5) * (px3 - px5))
                                        / ((py6 - py5) * (px2 - px3)
                                           - (px6 - px5) * (py2 - py3)); // 3-2
                                ub = (float)((px2 - px3) * (py3 - py5)
                                             - (py2 - py3) * (px3 - px5))
                                        / ((py6 - py5) * (px2 - px3)
                                           - (px6 - px5) * (py2 - py3));
                                if ((0 <= ua && ua <= 1)
                                    && (0 <= ub && ub <= 1))
                                    return 1;
                                else {
                                    ua = (float)((px6 - px7) * (py3 - py7)
                                                 - (py6 - py7) * (px3 - px7))
                                            / ((py6 - py7) * (px2 - px3)
                                               - (px6 - px7)
                                                       * (py2 - py3)); // 3-3
                                    ub = (float)((px2 - px3) * (py3 - py7)
                                                 - (py2 - py3) * (px3 - px7))
                                            / ((py6 - py7) * (px2 - px3)
                                               - (px6 - px7) * (py2 - py3));
                                    if ((0 <= ua && ua <= 1)
                                        && (0 <= ub && ub <= 1))
                                        return 1;
                                    else {
                                        ua = (float)((px8 - px7) * (py1 - py7)
                                                     - (py8 - py7)
                                                             * (px1 - px7))
                                                / ((py8 - py7) * (px2 - px1)
                                                   - (px8 - px7)
                                                           * (py2
                                                              - py1)); // 1-4
                                        ub = (float)((px2 - px1) * (py1 - py7)
                                                     - (py2 - py1)
                                                             * (px1 - px7))
                                                / ((py8 - py7) * (px2 - px1)
                                                   - (px8 - px7) * (py2 - py1));
                                        if ((0 <= ua && ua <= 1)
                                            && (0 <= ub && ub <= 1))
                                            return 1;
                                        else {
                                            ua = (float)((px8 - px7)
                                                                 * (py1 - py7)
                                                         - (py8 - py7)
                                                                 * (px1 - px7))
                                                    / ((py8 - py7) * (px4 - px1)
                                                       - (px8 - px7)
                                                               * (py4
                                                                  - py1)); // 2-4
                                            ub = (float)((px4 - px1)
                                                                 * (py1 - py7)
                                                         - (py4 - py1)
                                                                 * (px1 - px7))
                                                    / ((py8 - py7) * (px4 - px1)
                                                       - (px8 - px7)
                                                               * (py4 - py1));
                                            if ((0 <= ua && ua <= 1)
                                                && (0 <= ub && ub <= 1))
                                                return 1;
                                            else {
                                                ua = (float)((px8 - px7)
                                                                     * (py3
                                                                        - py7)
                                                             - (py8 - py7)
                                                                     * (px3
                                                                        - px7))
                                                        / ((py8 - py7)
                                                                   * (px2 - px3)
                                                           - (px8 - px7)
                                                                   * (py2
                                                                      - py3)); // 3-4
                                                ub = (float)((px2 - px3)
                                                                     * (py3
                                                                        - py7)
                                                             - (py2 - py3)
                                                                     * (px3
                                                                        - px7))
                                                        / ((py8 - py7)
                                                                   * (px2 - px3)
                                                           - (px8 - px7)
                                                                   * (py2
                                                                      - py3));
                                                if ((0 <= ua && ua <= 1)
                                                    && (0 <= ub && ub <= 1))
                                                    return 1;
                                                else {
                                                    ua = (float)((px5 - px8)
                                                                         * (py3
                                                                            - py8)
                                                                 - (py5 - py8)
                                                                         * (px3
                                                                            - px8))
                                                            / ((py5 - py8)
                                                                       * (px4
                                                                          - px3)
                                                               - (px5 - px8)
                                                                       * (py4
                                                                          - py3)); // 4-1
                                                    ub = (float)((px4 - px3)
                                                                         * (py3
                                                                            - py8)
                                                                 - (py4 - py3)
                                                                         * (px3
                                                                            - px8))
                                                            / ((py5 - py8)
                                                                       * (px4
                                                                          - px3)
                                                               - (px5 - px8)
                                                                       * (py4
                                                                          - py3));
                                                    if ((0 <= ua && ua <= 1)
                                                        && (0 <= ub && ub <= 1))
                                                        return 1;
                                                    else {
                                                        ua = (float)((px6 - px5)
                                                                             * (py3
                                                                                - py5)
                                                                     - (py6
                                                                        - py5)
                                                                             * (px3
                                                                                - px5))
                                                                / ((py6 - py5)
                                                                           * (px4
                                                                              - px3)
                                                                   - (px6 - px5)
                                                                           * (py4
                                                                              - py3)); // 4-2
                                                        ub = (float)((px4 - px3)
                                                                             * (py3
                                                                                - py5)
                                                                     - (py4
                                                                        - py3)
                                                                             * (px3
                                                                                - px5))
                                                                / ((py6 - py5)
                                                                           * (px4
                                                                              - px3)
                                                                   - (px6 - px5)
                                                                           * (py4
                                                                              - py3));
                                                        if ((0 <= ua && ua <= 1)
                                                            && (0 <= ub
                                                                && ub <= 1))
                                                            return 1;
                                                        else {
                                                            ua = (float)((px6
                                                                          - px7)
                                                                                 * (py3
                                                                                    - py7)
                                                                         - (py6
                                                                            - py7)
                                                                                 * (px3
                                                                                    - px7))
                                                                    / ((py6
                                                                        - py7)
                                                                               * (px4
                                                                                  - px3)
                                                                       - (px6
                                                                          - px7)
                                                                               * (py4
                                                                                  - py3)); // 4-3
                                                            ub = (float)((px4
                                                                          - px3)
                                                                                 * (py3
                                                                                    - py7)
                                                                         - (py4
                                                                            - py3)
                                                                                 * (px3
                                                                                    - px7))
                                                                    / ((py6
                                                                        - py7)
                                                                               * (px4
                                                                                  - px3)
                                                                       - (px6
                                                                          - px7)
                                                                               * (py4
                                                                                  - py3));
                                                            if ((0 <= ua
                                                                 && ua <= 1)
                                                                && (0 <= ub
                                                                    && ub <= 1))
                                                                return 1;
                                                            else {
                                                                ua = (float)((px8
                                                                              - px7)
                                                                                     * (py3
                                                                                        - py7)
                                                                             - (py8
                                                                                - py7)
                                                                                     * (px3
                                                                                        - px7))
                                                                        / ((py8
                                                                            - py7)
                                                                                   * (px4
                                                                                      - px3)
                                                                           - (px8
                                                                              - px7)
                                                                                   * (py4
                                                                                      - py3)); // 4-4
                                                                ub = (float)((px4
                                                                              - px3)
                                                                                     * (py3
                                                                                        - py7)
                                                                             - (py4
                                                                                - py3)
                                                                                     * (px3
                                                                                        - px7))
                                                                        / ((py8
                                                                            - py7)
                                                                                   * (px4
                                                                                      - px3)
                                                                           - (px8
                                                                              - px7)
                                                                                   * (py4
                                                                                      - py3));
                                                                if ((0 <= ua
                                                                     && ua <= 1)
                                                                    && (0 <= ub
                                                                        && ub <= 1))
                                                                    return 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int SectPT(
        int xt1,
        int yt1,
        int xt2,
        int yt2,
        int xt3,
        int yt3,
        int px4,
        int py4,
        int px5,
        int py5,
        int px6,
        int py6,
        int px7,
        int py7)
{
    float ua, ub;
    ua = (float)((px5 - px4) * (yt1 - py4) - (py5 - py4) * (xt1 - px4))
            / ((py5 - py4) * (xt2 - xt1) - (px5 - px4) * (yt2 - yt1)); // 1-1
    ub = (float)((xt2 - xt1) * (yt1 - py4) - (yt2 - yt1) * (xt1 - px4))
            / ((py5 - py4) * (xt2 - xt1) - (px5 - px4) * (yt2 - yt1));
    if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
        return 1;
    else {
        ua = (float)((px6 - px5) * (yt1 - py5) - (py6 - py5) * (xt1 - px5))
                / ((py6 - py5) * (xt2 - xt1)
                   - (px6 - px5) * (yt2 - yt1)); // 1-2
        ub = (float)((xt2 - xt1) * (yt1 - py5) - (yt2 - yt1) * (xt1 - px5))
                / ((py6 - py5) * (xt2 - xt1) - (px6 - px5) * (yt2 - yt1));
        ;
        if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
            return 1;
        else {
            ua = (float)((px6 - px7) * (yt1 - py7) - (py6 - py7) * (xt1 - px7))
                    / ((py6 - py7) * (xt2 - xt1)
                       - (px6 - px7) * (yt2 - yt1)); // 1-3
            ub = (float)((xt2 - xt1) * (yt1 - py7) - (yt2 - yt1) * (xt1 - px7))
                    / ((py6 - py7) * (xt2 - xt1) - (px6 - px7) * (yt2 - yt1));
            if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
                return 1;
            else {
                ua = (float)((px5 - px4) * (yt1 - py4)
                             - (py5 - py4) * (xt1 - px4))
                        / ((py5 - py4) * (xt3 - xt1)
                           - (px5 - px4) * (yt3 - yt1)); // 2-1
                ub = (float)((xt3 - xt1) * (yt1 - py4)
                             - (yt3 - yt1) * (xt1 - px4))
                        / ((py5 - py4) * (xt3 - xt1)
                           - (px5 - px4) * (yt3 - yt1));
                if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
                    return 1;
                else {
                    ua = (float)((px6 - px5) * (yt1 - py5)
                                 - (py6 - py5) * (xt1 - px5))
                            / ((py6 - py5) * (xt3 - xt1)
                               - (px6 - px5) * (yt3 - yt1)); // 2-2
                    ub = (float)((xt3 - xt1) * (yt1 - py5)
                                 - (yt3 - yt1) * (xt1 - px5))
                            / ((py6 - py5) * (xt3 - xt1)
                               - (px6 - px5) * (yt3 - yt1));
                    if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
                        return 1;
                    else {
                        ua = (float)((px6 - px7) * (yt1 - py7)
                                     - (py6 - py7) * (xt1 - px7))
                                / ((py6 - py7) * (xt3 - xt1)
                                   - (px6 - px7) * (yt3 - yt1)); // 2-3
                        ub = (float)((xt3 - xt1) * (yt1 - py7)
                                     - (yt3 - yt1) * (xt1 - px7))
                                / ((py6 - py7) * (xt3 - xt1)
                                   - (px6 - px7) * (yt3 - yt1));
                        if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
                            return 1;
                        else {
                            ua = (float)((px5 - px4) * (yt3 - py4)
                                         - (py5 - py4) * (xt3 - px4))
                                    / ((py5 - py4) * (xt2 - xt3)
                                       - (px5 - px4) * (yt2 - yt3)); // 3-1
                            ub = (float)((xt2 - xt3) * (yt3 - py4)
                                         - (yt2 - yt3) * (xt3 - px4))
                                    / ((py5 - py4) * (xt2 - xt3)
                                       - (px5 - px4) * (yt2 - yt3));
                            if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
                                return 1;
                            else {
                                ua = (float)((px6 - px5) * (yt3 - py5)
                                             - (py6 - py5) * (xt3 - px5))
                                        / ((py6 - py5) * (xt2 - xt3)
                                           - (px6 - px5) * (yt2 - yt3)); // 3-2
                                ub = (float)((xt2 - xt3) * (yt3 - py5)
                                             - (yt2 - yt3) * (xt3 - px5))
                                        / ((py6 - py5) * (xt2 - xt3)
                                           - (px6 - px5) * (yt2 - yt3));
                                if ((0 <= ua && ua <= 1)
                                    && (0 <= ub && ub <= 1))
                                    return 1;
                                else {
                                    ua = (float)((px6 - px7) * (yt3 - py7)
                                                 - (py6 - py7) * (xt3 - px7))
                                            / ((py6 - py7) * (xt2 - xt3)
                                               - (px6 - px7)
                                                       * (yt2 - yt3)); // 3-3
                                    ub = (float)((xt2 - xt3) * (yt3 - py7)
                                                 - (yt2 - yt3) * (xt3 - px7))
                                            / ((py6 - py7) * (xt2 - xt3)
                                               - (px6 - px7) * (yt2 - yt3));
                                    if ((0 <= ua && ua <= 1)
                                        && (0 <= ub && ub <= 1))
                                        return 1;
                                    else {
                                        ua = (float)((px4 - px7) * (yt1 - py7)
                                                     - (py4 - py7)
                                                             * (xt1 - px7))
                                                / ((py4 - py7) * (xt2 - xt1)
                                                   - (px4 - px7)
                                                           * (yt2
                                                              - yt1)); // 1-4
                                        ub = (float)((xt2 - xt1) * (yt1 - py7)
                                                     - (yt2 - yt1)
                                                             * (xt1 - px7))
                                                / ((py4 - py7) * (xt2 - xt1)
                                                   - (px4 - px7) * (yt2 - yt1));
                                        if ((0 <= ua && ua <= 1)
                                            && (0 <= ub && ub <= 1))
                                            return 1;
                                        else {
                                            ua = (float)((px4 - px7)
                                                                 * (yt1 - py7)
                                                         - (py4 - py7)
                                                                 * (xt1 - px7))
                                                    / ((py4 - py7) * (xt3 - xt1)
                                                       - (px4 - px7)
                                                               * (yt3
                                                                  - yt1)); // 2-4
                                            ub = (float)((xt3 - xt1)
                                                                 * (yt1 - py7)
                                                         - (yt3 - yt1)
                                                                 * (xt1 - px7))
                                                    / ((py4 - py7) * (xt3 - xt1)
                                                       - (px4 - px7)
                                                               * (yt3 - yt1));
                                            if ((0 <= ua && ua <= 1)
                                                && (0 <= ub && ub <= 1))
                                                return 1;
                                            else {
                                                ua = (float)((px4 - px7)
                                                                     * (yt3
                                                                        - py7)
                                                             - (py4 - py7)
                                                                     * (xt3
                                                                        - px7))
                                                        / ((py4 - py7)
                                                                   * (xt2 - xt3)
                                                           - (px4 - px7)
                                                                   * (yt2
                                                                      - yt3)); // 3-4
                                                ub = (float)((xt2 - xt3)
                                                                     * (yt3
                                                                        - py7)
                                                             - (yt2 - yt3)
                                                                     * (xt3
                                                                        - px7))
                                                        / ((py4 - py7)
                                                                   * (xt2 - xt3)
                                                           - (px4 - px7)
                                                                   * (yt2
                                                                      - yt3));
                                                if ((0 <= ua && ua <= 1)
                                                    && (0 <= ub && ub <= 1))
                                                    return 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int SectTT(
        int xt1,
        int yt1,
        int xt2,
        int yt2,
        int xt3,
        int yt3,
        int xt4,
        int yt4,
        int xt5,
        int yt5,
        int xt6,
        int yt6)
{
    float ua, ub;
    ua = (float)((xt5 - xt4) * (yt1 - yt4) - (yt5 - yt4) * (xt1 - xt4))
            / ((yt5 - yt4) * (xt2 - xt1) - (xt5 - xt4) * (yt2 - yt1)); // 1-1
    ub = (float)((xt2 - xt1) * (yt1 - yt4) - (yt2 - yt1) * (xt1 - xt4))
            / ((yt5 - yt4) * (xt2 - xt1) - (xt5 - xt4) * (yt2 - yt1));
    if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
        return 1;
    else {
        ua = (float)((xt6 - xt4) * (yt1 - yt4) - (yt6 - yt4) * (xt1 - xt4))
                / ((yt6 - yt4) * (xt2 - xt1)
                   - (xt6 - xt4) * (yt2 - yt1)); // 1-2
        ub = (float)((xt2 - xt1) * (yt1 - yt4) - (yt2 - yt1) * (xt1 - xt4))
                / ((yt6 - yt4) * (xt2 - xt1) - (xt6 - xt4) * (yt2 - yt1));
        if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
            return 1;
        else {
            ua = (float)((xt6 - xt5) * (yt1 - yt5) - (yt6 - yt5) * (xt1 - xt5))
                    / ((yt6 - yt5) * (xt2 - xt1)
                       - (xt6 - xt5) * (yt2 - yt1)); // 1-3
            ub = (float)((xt2 - xt1) * (yt1 - yt5) - (yt2 - yt1) * (xt1 - xt5))
                    / ((yt6 - yt5) * (xt2 - xt1) - (xt6 - xt5) * (yt2 - yt1));
            if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
                return 1;
            else {
                ua = (float)((xt5 - xt4) * (yt1 - yt4)
                             - (yt5 - yt4) * (xt1 - xt4))
                        / ((yt5 - yt4) * (xt3 - xt1)
                           - (xt5 - xt4) * (yt3 - yt1)); // 2-1
                ub = (float)((xt3 - xt1) * (yt1 - yt4)
                             - (yt3 - yt1) * (xt1 - xt4))
                        / ((yt5 - yt4) * (xt3 - xt1)
                           - (xt5 - xt4) * (yt3 - yt1));
                if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
                    return 1;
                else {
                    ua = (float)((xt6 - xt4) * (yt1 - yt4)
                                 - (yt6 - yt4) * (xt1 - xt4))
                            / ((yt6 - yt4) * (xt3 - xt1)
                               - (xt6 - xt4) * (yt3 - yt1)); // 2-2
                    ub = (float)((xt3 - xt1) * (yt1 - yt4)
                                 - (yt3 - yt1) * (xt1 - xt4))
                            / ((yt6 - yt4) * (xt3 - xt1)
                               - (xt6 - xt4) * (yt3 - yt1));
                    if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
                        return 1;
                    else {
                        ua = (float)((xt6 - xt5) * (yt1 - yt5)
                                     - (yt6 - yt5) * (xt1 - xt5))
                                / ((yt6 - yt5) * (xt3 - xt1)
                                   - (xt6 - xt5) * (yt3 - yt1)); // 2-3
                        ub = (float)((xt3 - xt1) * (yt1 - yt5)
                                     - (yt3 - yt1) * (xt1 - xt5))
                                / ((yt6 - yt5) * (xt3 - xt1)
                                   - (xt6 - xt5) * (yt3 - yt1));
                        if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
                            return 1;
                        else {
                            ua = (float)((xt5 - xt4) * (yt3 - yt4)
                                         - (yt5 - yt4) * (xt3 - xt4))
                                    / ((yt5 - yt4) * (xt2 - xt3)
                                       - (xt5 - xt4) * (yt2 - yt3)); // 3-1
                            ub = (float)((xt2 - xt3) * (yt3 - yt4)
                                         - (yt2 - yt3) * (xt3 - xt4))
                                    / ((yt5 - yt4) * (xt2 - xt3)
                                       - (xt5 - xt4) * (yt2 - yt3));
                            if ((0 <= ua && ua <= 1) && (0 <= ub && ub <= 1))
                                return 1;
                            else {
                                ua = (float)((xt6 - xt4) * (yt3 - yt4)
                                             - (yt6 - yt4) * (xt3 - xt4))
                                        / ((yt6 - yt4) * (xt2 - xt3)
                                           - (xt6 - xt4) * (yt2 - yt3)); // 3-2
                                ub = (float)((xt2 - xt3) * (yt3 - yt4)
                                             - (yt2 - yt3) * (xt3 - xt4))
                                        / ((yt6 - yt4) * (xt2 - xt3)
                                           - (xt6 - xt4) * (yt2 - yt3));
                                if ((0 <= ua && ua <= 1)
                                    && (0 <= ub && ub <= 1))
                                    return 1;
                                else {
                                    ua = (float)((xt6 - xt5) * (yt3 - yt5)
                                                 - (yt6 - yt5) * (xt3 - xt5))
                                            / ((yt6 - yt5) * (xt2 - xt3)
                                               - (xt6 - xt5)
                                                       * (yt2 - yt3)); // 3-3
                                    ub = (float)((xt2 - xt3) * (yt3 - yt5)
                                                 - (yt2 - yt3) * (xt3 - xt5))
                                            / ((yt6 - yt5) * (xt2 - xt3)
                                               - (xt6 - xt5) * (yt2 - yt3));
                                    if ((0 <= ua && ua <= 1)
                                        && (0 <= ub && ub <= 1))
                                        return 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int SectPC(
        int x1,
        int u1,
        int r1,
        int px1,
        int py1,
        int px2,
        int py2,
        int px3,
        int py3,
        int px4,
        int py4)
{
    float OA, OB, OC, OD, rast1, rast2, rast3, rast4;
    OA = sqrt(pow(x1 - px1, 2) + pow(u1 - py1, 2));
    OB = sqrt(pow(x1 - px2, 2) + pow(u1 - py2, 2));
    OC = sqrt(pow(x1 - px3, 2) + pow(u1 - py3, 2));
    OD = sqrt(pow(x1 - px4, 2) + pow(u1 - py4, 2));
    rast1 = abs(
            ((py2 - py1) * x1 + (px1 - px2) * u1 + (px2 * py1 - px1 * py2))
            / sqrt(pow(px1 - px2, 2) + pow(py1 - py2, 2)));
    rast2 = abs(
            ((py4 - py1) * x1 + (px1 - px4) * u1 + (px4 * py1 - px1 * py4))
            / sqrt(pow(px1 - px4, 2) + pow(py1 - py4, 2)));
    rast3 = abs(
            ((py2 - py3) * x1 + (px3 - px2) * u1 + (px2 * py3 - px3 * py2))
            / sqrt(pow(px3 - px2, 2) + pow(py3 - py2, 2)));
    rast4 = abs(
            ((py4 - py3) * x1 + (px3 - px4) * u1 + (px4 * py3 - px3 * py4))
            / sqrt(pow(px3 - px4, 2) + pow(py3 - py4, 2)));
    if (OC <= r1 && OA <= r1 && OB <= r1 && OD <= r1)
        return 0;
    if (((OC >= r1 && OB >= r1 && rast3 >= r1)
         && (OC >= r1 && OD >= r1 && rast4 >= r1)
         && (OA >= r1 && OD >= r1 && rast2 >= r1)
         && (OA >= r1 && OB >= r1 && rast1 >= r1))
        == 0) {
        return 1;
    }
    return 0;
}

int SectTC(
        int x1,
        int u1,
        int r1,
        int xt1,
        int yt1,
        int xt2,
        int yt2,
        int xt3,
        int yt3)
{
    float OA, OB, OC, rast1, rast2, rast3;
    OA = sqrt(pow(x1 - xt1, 2) + pow(u1 - yt1, 2));
    OB = sqrt(pow(x1 - xt2, 2) + pow(u1 - yt2, 2));
    OC = sqrt(pow(x1 - xt3, 2) + pow(u1 - yt3, 2));
    rast1 = ((yt2 - yt1) * x1 + (xt1 - xt2) * u1 + (xt2 * yt1 - xt1 * yt2))
            / sqrt(pow(xt1 - xt2, 2) + pow(yt1 - yt2, 2));
    if (rast1 < 0)
        rast1 *= -1;
    rast2 = ((yt3 - yt1) * x1 + (xt1 - xt3) * u1 + (xt3 * yt1 - xt1 * yt3))
            / sqrt(pow(xt1 - xt3, 2) + pow(yt1 - yt3, 2));
    if (rast2 < 0)
        rast2 *= -1;
    rast3 = ((yt3 - yt2) * x1 + (xt2 - xt3) * u1 + (xt3 * yt2 - xt2 * yt3))
            / sqrt(pow(xt2 - xt3, 2) + pow(yt2 - yt3, 2));
    if (rast3 < 0)
        rast3 *= -1;
    if (OC <= r1 && OA <= r1 && OB <= r1)
        return 0;
    if (((OC >= r1 && OB >= r1 && rast3 >= r1)
         && (OA >= r1 && OC >= r1 && rast2 >= r1)
         && (OA >= r1 && OB >= r1 && rast1 >= r1))
        == 0) {
        return 1;
    }
    return 0;
}

int SectCC(int x1, int u1, int r1, int x2, int u2, int r2)
{
    int t;
    if (r1 > r2) {
        t = r1;
        r1 = r2;
        r2 = t;
    }
    float nm;
    nm = sqrt(pow(x2 - x1, 2) + pow(u2 - u1, 2));
    if ((nm <= r1 + r2) && (r2 <= r1 + nm))
        return 1;
    return 0;
}

int Str(char D[])
{
    int bb = 0;
    int x1, u1, r1, xt1, xt2, xt3, yt1, yt2, yt3, px1, py1,
            px2, py2, px3, py3, px4, py4;
    char FI1[100], FI2[100], FI3[245];
    char B[] = "circle", E[] = "exit", T[] = "triangle", P[] = "polygon";
    char A[8], C[8], F[8], H[8], G[8], J[8], K[8], O[8];
    int i = 0, d = 0;
    if (strcmp(E, D) != 0)
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
    char D[100];

    strcpy(D, "circle(0,0,15)");
    a = 15;
    x = Str(D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "circle(-6,-6,15)");
    a = 3;
    x = Str(D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "circle(-6)");
    a = 0;
    x = Str(D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "circle(555,-222,0)");
    a = 0;
x = Str(D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "aafsdfwefw(-6,-6,15)");
    a = 0;
x = Str(D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "circle()");
    a = 0;
x = Str(D);
    ASSERT_EQUAL(x, a);

strcpy(D, "exit");
    a = 3;
x = Str(D);
    ASSERT_EQUAL(a, x);

strcpy(D, "exit1s1");
    a = 0;
x = Str(D);
    ASSERT_EQUAL(a, x);

    strcpy(D, "triangle(1,1,1,1,2,2)");
    a = 0;
x = Str(D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "triangle(1,1,1,1,2,2)");
    a = 0;
x = Str(D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "triangle(1,1,2,2,2,2)");
    a = 0;
x = Str(D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "triangle(0,0,0,5,5,0)");
    a = 10;
x = Str(D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "triangle(-10,-10,0,5,-7,15)");
    a = -7;
 x = Str(D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "triangle()");
    a = 0;
x = Str(D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "triangle(5,5,6,6)");
    a = 0;
x = Str(D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "triangle(5,6,6,7,8)");
    a = 0;
x = Str(D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "polygon(0,0,0,5,5,5,5,0)");
    a = 20;
x = Str(D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "polygon(-5,12)");
    a = 0;
x = Str(D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "polygon(-3,-3,-3,3,3,3,3,-3)");
    a = 0;
x = Str(D);
    ASSERT_EQUAL(x, a);

    strcpy(D, "polygon(0,-3,3,3,0,3,-5,3)");
    a = 4;
x = Str(D);
    ASSERT_EQUAL(x, a);
}

CTEST(intersect, CC)
{
    int a, x;
    int x1, u1, x2, u2, r1, r2;
    x1 = 0;
    u1 = 0;
    r1 = 5;
    x2 = 10;
    u2 = 20;
    r2 = 3;
    a = 0;
    x = SectCC(x1, u1, r1, x2, u2, r2);
    ASSERT_EQUAL(x, a);

    x1 = 0;
    u1 = 0;
    r1 = 5;
    x2 = 3;
    u2 = 3;
    r2 = 3;
    a = 1;
    x = SectCC(x1, u1, r1, x2, u2, r2);
    ASSERT_EQUAL(x, a);

    x1 = 0;
    u1 = 0;
    r1 = 5;
    x2 = 0;
    u2 = 0;
    r2 = 3;
    a = 0;
    x = SectCC(x1, u1, r1, x2, u2, r2);
    ASSERT_EQUAL(x, a);

    x1 = 0;
    u1 = 0;
    r1 = 5;
    x2 = 5;
    u2 = 6;
    r2 = 4;
    a = 1;
    x = SectCC(x1, u1, r1, x2, u2, r2);
    ASSERT_EQUAL(x, a);

    x1 = 0;
    u1 = 0;
    r1 = 5;
    x2 = -10;
    u2 = 0;
    r2 = 6;
    a = 1;
    x = SectCC(x1, u1, r1, x2, u2, r2);
    ASSERT_EQUAL(x, a);
}

CTEST(intersect, TC)
{
    int a, x;
    int x1, u1, r1, xt1, xt2, xt3, yt1, yt2, yt3;

    x1 = 0;
    u1 = 0;
    r1 = 5;
    xt1 = 0;
    yt1 = 0;
    xt2 = 0;
    yt2 = 10;
    xt3 = 10;
    yt3 = 0;
    a = 1;
    x = SectTC(x1, u1, r1, xt1, yt1, xt2, yt2, xt3, yt3);
    ASSERT_EQUAL(x, a);

    x1 = 0;
    u1 = 0;
    r1 = 10;
    xt1 = 0;
    yt1 = 0;
    xt2 = 0;
    yt2 = 5;
    xt3 = 5;
    yt3 = 0;
    a = 0;
    x = SectTC(x1, u1, r1, xt1, yt1, xt2, yt2, xt3, yt3);
    ASSERT_EQUAL(x, a);

    x1 = -10;
    u1 = -10;
    r1 = 3;
    xt1 = 0;
    yt1 = 0;
    xt2 = 0;
    yt2 = 5;
    xt3 = 5;
    yt3 = 0;
    a = 0;
    x = SectTC(x1, u1, r1, xt1, yt1, xt2, yt2, xt3, yt3);
    ASSERT_EQUAL(a, x);

    x1 = 0;
    u1 = 0;
    r1 = 5;
    xt1 = -20;
    yt1 = -20;
    xt2 = 20;
    yt2 = 20;
    xt3 = 20;
    yt3 = -20;
    a = 1;
    x = SectTC(x1, u1, r1, xt1, yt1, xt2, yt2, xt3, yt3);
    ASSERT_EQUAL(a, x);

    x1 = 0;
    u1 = 0;
    r1 = 5;
    xt1 = 10;
    yt1 = 10;
    xt2 = 15;
    yt2 = 10;
    xt3 = 12;
    yt3 = 22;
    a = 0;
    x = SectTC(x1, u1, r1, xt1, yt1, xt2, yt2, xt3, yt3);
    ASSERT_EQUAL(a, x);

    x1 = 0;
    u1 = 0;
    r1 = 20;
    xt1 = 0;
    yt1 = 0;
    xt2 = 10;
    yt2 = 5;
    xt3 = 0;
    yt3 = 10;
    a = 0;
    x = SectTC(x1, u1, r1, xt1, yt1, xt2, yt2, xt3, yt3);
    ASSERT_EQUAL(a, x);
}

CTEST(intersect, PC)
{
    int a, x;
    int x1, u1, r1, px1, px2, px3, px4, py1, py2, py3, py4;
    x1 = 0;
    u1 = 0;
    r1 = 5;
    px1 = 0;
    py1 = 0;
    px2 = 0;
    py2 = 10;
    px3 = 10;
    py3 = 10;
    px4 = 10;
    py4 = 0;
    a = 1;
    x = SectPC(x1, u1, r1, px1, py1, px2, py2, px3, py3, px4, py4);
    ASSERT_EQUAL(a, x);

    x1 = 0;
    u1 = 0;
    r1 = 3;
    px1 = 10;
    py1 = 10;
    px2 = 10;
    py2 = 15;
    px3 = 15;
    py3 = 15;
    px4 = 15;
    py4 = 10;
    a = 0;
    x = SectPC(x1, u1, r1, px1, py1, px2, py2, px3, py3, px4, py4);
    ASSERT_EQUAL(a, x);

    x1 = 0;
    u1 = 0;
    r1 = 100;
    px1 = 10;
    py1 = 10;
    px2 = 10;
    py2 = 15;
    px3 = 15;
    py3 = 14;
    px4 = 15;
    py4 = 11;
    a = 0;
    x = SectPC(x1, u1, r1, px1, py1, px2, py2, px3, py3, px4, py4);
    ASSERT_EQUAL(a, x);

    x1 = 0;
    u1 = 0;
    r1 = 3;
    px1 = -10;
    py1 = -10;
    px2 = -10;
    py2 = 10;
    px3 = 10;
    py3 = 10;
    px4 = 10;
    py4 = -10;
    a = 0;
    x = SectPC(x1, u1, r1, px1, py1, px2, py2, px3, py3, px4, py4);
    ASSERT_EQUAL(a, x);

    x1 = 0;
    u1 = 0;
    r1 = 5;
    px1 = -10;
    py1 = -10;
    px2 = 10;
    py2 = 10;
    px3 = 10;
    py3 = -5;
    px4 = -5;
    py4 = -10;
    a = 1;
    x = SectPC(x1, u1, r1, px1, py1, px2, py2, px3, py3, px4, py4);
    ASSERT_EQUAL(a, x);
}

CTEST(intersect, TT)
{
    int a, x;
    int xt1, yt1, xt2, yt2, xt3, yt3, xt4, yt4, xt5, yt5, xt6, yt6;
    xt1 = 0;
    yt1 = 0;
    xt2 = 0;
    yt2 = 5;
    xt3 = 5;
    yt3 = 0;
    xt4 = 2;
    yt4 = 2;
    xt5 = 2;
    yt5 = 10;
    xt6 = 10;
    yt6 = 2;
    a = 1;
    x = SectTT(xt1, yt1, xt2, yt2, xt3, yt3, xt4, yt4, xt5, yt5, xt6, yt6);
    ASSERT_EQUAL(a, x);

    xt1 = 0;
    yt1 = 0;
    xt2 = 0;
    yt2 = 20;
    xt3 = 20;
    yt3 = 0;
    xt4 = 1;
    yt4 = 1;
    xt5 = 1;
    yt5 = 6;
    xt6 = 6;
    yt6 = 1;
    a = 0;
    x = SectTT(xt1, yt1, xt2, yt2, xt3, yt3, xt4, yt4, xt5, yt5, xt6, yt6);
    ASSERT_EQUAL(a, x);

    xt1 = 0;
    yt1 = 0;
    xt2 = 0;
    yt2 = 20;
    xt3 = 20;
    yt3 = 0;
    xt4 = -20;
    yt4 = -20;
    xt5 = -20;
    yt5 = -40;
    xt6 = -40;
    yt6 = -20;
    a = 0;
    x = SectTT(xt1, yt1, xt2, yt2, xt3, yt3, xt4, yt4, xt5, yt5, xt6, yt6);
    ASSERT_EQUAL(a, x);

    xt1 = -10;
    yt1 = 0;
    xt2 = 0;
    yt2 = 0;
    xt3 = 0;
    yt3 = -10;
    xt4 = 0;
    yt4 = -10;
    xt5 = 10;
    yt5 = 0;
    xt6 = 10;
    yt6 = -10;
    a = 1;
    x = SectTT(xt1, yt1, xt2, yt2, xt3, yt3, xt4, yt4, xt5, yt5, xt6, yt6);
    ASSERT_EQUAL(a, x);
}

CTEST(intersect, PT)
{
    int a, x;
    int xt1, yt1, xt2, yt2, xt3, yt3, px1, py1, px2, py2, px3, py3, px4, py4;
    xt1 = 2;
    yt1 = 2;
    xt2 = 2;
    yt2 = 5;
    xt3 = 5;
    yt3 = 2;
    px1 = 0;
    py1 = 0;
    px2 = 0;
    py2 = 10;
    px3 = 10;
    py3 = 10;
    px4 = 10;
    py4 = 0;
    a = 0;
    x = SectPT(
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
    ASSERT_EQUAL(a, x);

    xt1 = 2;
    yt1 = 2;
    xt2 = 2;
    yt2 = 12;
    xt3 = 12;
    yt3 = 2;
    px1 = 3;
    py1 = 3;
    px2 = 3;
    py2 = 5;
    px3 = 5;
    py3 = 5;
    px4 = 5;
    py4 = 3;
    a = 0;
    x = SectPT(
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
    ASSERT_EQUAL(a, x);

    xt1 = 0;
    yt1 = 0;
    xt2 = 0;
    yt2 = 10;
    xt3 = 10;
    yt3 = 0;
    px1 = -3;
    py1 = -3;
    px2 = -3;
    py2 = 3;
    px3 = 3;
    py3 = 3;
    px4 = 3;
    py4 = -3;
    a = 1;
    x = SectPT(
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
    ASSERT_EQUAL(a, x);

    xt1 = 0;
    yt1 = 0;
    xt2 = 0;
    yt2 = 10;
    xt3 = 10;
    yt3 = 0;
    px1 = -3;
    py1 = 0;
    px2 = -3;
    py2 = 3;
    px3 = 1;
    py3 = 3;
    px4 = 1;
    py4 = 1;
    a = 1;
    x = SectPT(
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
    ASSERT_EQUAL(a, x);
}

CTEST(intersect, PP)
{
    int a, x;
    int px1, py1, px2, py2, px3, py3, px4, py4, px5, py5, px6, py6, px7, py7,
            px8, py8;

    px1 = -3;
    py1 = -3;
    px2 = -3;
    py2 = 3;
    px3 = 3;
    py3 = 3;
    px4 = 3;
    py4 = -3;
    px5 = 10;
    py5 = 10;
    px6 = 10;
    py6 = -10;
    px7 = -10;
    py7 = -10;
    px8 = -10;
    py8 = 10;
    a = 0;
    x = SectPP(
            px1,
            py1,
            px2,
            py2,
            px3,
            py3,
            px4,
            py4,
            px5,
            py5,
            px6,
            py6,
            px7,
            py7,
            px8,
            py8);
    ASSERT_EQUAL(a, x);

    px5 = -3;
    py5 = -3;
    px6 = -3;
    py6 = 3;
    px7 = 3;
    py7 = 3;
    px8 = 3;
    py8 = -3;
    px1 = 10;
    py1 = 10;
    px2 = 10;
    py2 = -10;
    px3 = -10;
    py3 = -10;
    px4 = -10;
    py4 = 10;
    a = 0;
    x = SectPP(
            px1,
            py1,
            px2,
            py2,
            px3,
            py3,
            px4,
            py4,
            px5,
            py5,
            px6,
            py6,
            px7,
            py7,
            px8,
            py8);
    ASSERT_EQUAL(a, x);

    px1 = -3;
    py1 = -3;
    px2 = -3;
    py2 = 3;
    px3 = 3;
    py3 = 3;
    px4 = 3;
    py4 = -3;
    px5 = 0;
    py5 = 0;
    px6 = 0;
    py6 = 10;
    px7 = 10;
    py7 = 10;
    px8 = 10;
    py8 = 0;
    a = 1;
    x = SectPP(
            px1,
            py1,
            px2,
            py2,
            px3,
            py3,
            px4,
            py4,
            px5,
            py5,
            px6,
            py6,
            px7,
            py7,
            px8,
            py8);
    ASSERT_EQUAL(a, x);

    px1 = -3;
    py1 = -3;
    px2 = -3;
    py2 = 3;
    px3 = 3;
    py3 = 3;
    px4 = 3;
    py4 = -3;
    px5 = -3;
    py5 = -3;
    px6 = -3;
    py6 = 3;
    px7 = 3;
    py7 = 3;
    px8 = 3;
    py8 = -3;
    a = 1;
    x = SectPP(
            px1,
            py1,
            px2,
            py2,
            px3,
            py3,
            px4,
            py4,
            px5,
            py5,
            px6,
            py6,
            px7,
            py7,
            px8,
            py8);
    ASSERT_EQUAL(a, x);
}
