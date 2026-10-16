/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02077594 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_interrupt.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;
extern UnkIrqCallbackInfo data_02151b64[8];
extern void func_02093ba8(u32 dmaNo, void (*func)(void *), void *arg);
extern u32 func_02093b3c(u32 mask);
extern UnkIrqCallbackInfo data_02151b64[8];
void func_02093ba8(u32 dmaNo, void (*func)(void *), void *arg) {
    u32 mask                    = 1 << (dmaNo + 8);
    data_02151b64[dmaNo].func   = func;
    data_02151b64[dmaNo].arg    = arg;
    data_02151b64[dmaNo].enable = func_02093b3c(mask) & mask;
}
u32 func_02093b3c(u32 mask);
