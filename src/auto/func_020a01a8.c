/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207bfe4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/spi/pm.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
typedef s32 BOOL;
typedef void (*UnkPmCallback)(u32 result, void *arg);
extern u32 data_02155f5c;
extern u32 func_020a06d4(u32 type, UnkPmCallback callback, void *arg);
extern u32 func_020a0698(u32 type);
extern BOOL func_020a01a8(u32 sw, u32 backLight, BOOL skipWait, BOOL isSync);
u32 func_020a06d4(u32 type, UnkPmCallback callback, void *arg);
u32 func_020a0698(u32 type);
BOOL func_020a01a8(u32 sw, u32 backLight, BOOL skipWait, BOOL isSync) {
    switch (sw) {
        case 1:
            if (!skipWait) {
                if ((u32) ((*(vu32 *) 0x027ffc3c) - data_02155f5c) <= 7) {
                    return 0;
                }
            }
            if (backLight) {
                if (isSync) {
                    func_020a0698(backLight);
                } else {
                    func_020a06d4(backLight, 0, 0);
                }
            }
            (*(vu16 *) 0x04000304) |= 1;
            break;
        case 0:
            (*(vu16 *) 0x04000304) &= ~1;
            data_02155f5c = (*(vu32 *) 0x027ffc3c);
            if (backLight) {
                if (isSync) {
                    func_020a0698(backLight);
                } else {
                    func_020a06d4(backLight, 0, 0);
                }
            }
            break;
    }
    return 1;
}
