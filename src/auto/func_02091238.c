/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02148538 from https://github.com/RonyxDumb/mkds src/arm9/02148538_func_02148538.c (license: none), reused by
 * tools/donor_match.py */
typedef signed short int s16;
typedef signed long s32;
typedef s32 fx32;
typedef s16 fx16;
extern fx16 func_02091238(fx32 y, fx32 x);
extern fx32 func_02090f2c(fx32 numer, fx32 denom);
extern const fx16 data_020eacd8[128 + 1];
#pragma thumb off
fx16 func_02091238(fx32 y, fx32 x) {
    fx32 a, b, c;
    int sgn;

    if (y > 0) {
        if (x > 0) {
            if (x > y) {
                a   = y;
                b   = x;
                c   = 0;
                sgn = 1;
            } else if (x < y) {
                a   = x;
                b   = y;
                c   = 6434;
                sgn = 0;
            } else {
                return (fx16) 3217;
            }
        } else if (x < 0) {
            x = -x;
            if (x < y) {
                a   = x;
                b   = y;
                c   = 6434;
                sgn = 1;
            } else if (x > y) {
                a   = y;
                b   = x;
                c   = 12868;
                sgn = 0;
            } else {
                return (fx16) 9651;
            }
        } else {
            return (fx16) 6434;
        }
    } else if (y < 0) {
        y = -y;
        if (x < 0) {
            x = -x;
            if (x > y) {
                a   = y;
                b   = x;
                c   = -12868;
                sgn = 1;
            } else if (x < y) {
                a   = x;
                b   = y;
                c   = -6434;
                sgn = 0;
            } else {
                return (fx16) -9651;
            }
        } else if (x > 0) {
            if (x < y) {
                a   = x;
                b   = y;
                c   = -6434;
                sgn = 1;
            } else if (x > y) {
                a   = y;
                b   = x;
                c   = 0;
                sgn = 0;
            } else {
                return (fx16) -3217;
            }
        } else {
            return (fx16) -6434;
        }
    } else {
        if (x >= 0) {
            return 0;
        } else {
            return (fx16) 12868;
        }
    }

    if (b == 0) {
        return 0;
    }
    if (sgn) {
        return (fx16) (c + data_020eacd8[func_02090f2c(a, b) >> 5]);
    } else {
        return (fx16) (c - data_020eacd8[func_02090f2c(a, b) >> 5]);
    }
}
