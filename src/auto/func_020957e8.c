/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
extern u32 func_0209560c(void);
extern u32 func_02095620(u32 state);
extern u32 data_02151ecc;
extern u16 data_02151ed0[9];
u32 func_020957e0(register u32 value);

/* func_02079f00 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_vramexclusive.c (license: none),
 * reused by tools/donor_match.py */
void func_020957e8(u32 bank, u16 lockID) {
    u32 mask;
    u32 enabled = func_0209560c();

    mask = bank & data_02151ecc & 0x1ff;

    while (1) {
        s32 i = 31 - func_020957e0(mask);
        if (i < 0) {
            break;
        }
        mask &= ~(1 << i);
        if (data_02151ed0[i] == lockID) {
            data_02151ed0[i] = 0;
            data_02151ecc &= ~(1 << i);
        }
    }
    func_02095620(enabled);
}
