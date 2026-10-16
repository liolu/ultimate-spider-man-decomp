/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_02091b64();
extern void func_02093804();
extern u32 data_02151b4c;
extern u32 data_02151b60;
extern u32 data_02151b5c;
extern s32 data_02151b58;
extern const struct {
    u16 blk1;
    u16 blk2;
    u16 szBlk1;
} data_020eade8[16];

/* func_0214c6a8 from https://github.com/RonyxDumb/mkds src/arm9/0214c6a8_func_0214c6a8.c (license: none), reused by
 * tools/donor_match.py */
void func_02093804() {
    u32 temp      = func_02091b64();
    data_02151b58 = (s32) temp;
    data_02151b4c = (u32) (data_020eade8[temp].blk1 << 0xC);
    data_02151b5c = (u32) (data_020eade8[temp].blk2 << 0xC);
    data_02151b60 = (u32) (data_020eade8[temp].szBlk1 << 0xC);
}
