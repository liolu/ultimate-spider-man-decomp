/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u8 vu8;
typedef struct {
    u16 lcdc;
    u16 bg;
    u16 obj;
    u16 arm7;
    u16 tex;
    u16 texPltt;
    u16 clearImage;
    u16 bgExtPltt;
    u16 objExtPltt;
    u16 subBg;
    u16 subObj;
    u16 subBgExtPltt;
    u16 subObjExtPltt;
} UnkGxVramState;
extern UnkGxVramState data_02151b24;
extern UnkGxVramState data_02151b24;
void func_020926fc(u32 lcdc);

/* GX_SetBankForSubBg from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx_vramcnt.c (license: none),
 * reused by tools/donor_match.py */
void func_02091d68(s32 subBg) {
    data_02151b24.lcdc  = ~subBg & (data_02151b24.lcdc | data_02151b24.subBg);
    data_02151b24.subBg = subBg;

    switch (subBg) {
        case 0x004:
            (*(vu8 *) 0x04000242) = 0x84;
            break;
        case 0x180:
            (*(vu8 *) 0x04000249) = 0x81;
        case 0x080:
            (*(vu8 *) 0x04000248) = 0x81;
            break;
        case 0x000:
        default:
            break;
    }
    func_020926fc(data_02151b24.lcdc);
}
