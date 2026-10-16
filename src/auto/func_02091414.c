/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FX_Atan from https://github.com/ntrtwl/NitroSDK libraries/fx/src/fx_atan.c (license: none), reused by tools/donor_match.py
 */
typedef signed short int s16;
typedef signed long s32;
typedef s32 fx32;
typedef s16 fx16;
extern fx16 func_02091414(fx32 x);
extern fx32 func_02090f10(fx32 denom);
extern const fx16 data_020eacd8[128 + 1];
fx16 func_02091414(fx32 x) {
    if (x >= 0) {
        if (x > ((fx32) 0x0000000000001000L)) {
            return (fx16) (6434 - data_020eacd8[func_02090f10(x) >> 5]);
        } else if (x < ((fx32) 0x0000000000001000L)) {
            return data_020eacd8[x >> 5];
        } else {
            return (fx16) 3217;
        }
    } else {
        if (x < -((fx32) 0x0000000000001000L)) {
            return (fx16) (-6434 + data_020eacd8[func_02090f10(-x) >> 5]);
        } else if (x > -((fx32) 0x0000000000001000L)) {
            return (fx16) -data_020eacd8[-x >> 5];
        } else {
            return (fx16) -3217;
        }
    }
}
