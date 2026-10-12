/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02046d7c(M2C_UNK *);                       /* extern */
s32 func_02046d84(M2C_UNK *);                       /* extern */
s32 func_02046d8c(M2C_UNK *);                       /* extern */
s32 *func_02082640(M2C_UNK *, M2C_UNK);             /* extern */
extern M2C_UNK data_02143e44;
extern M2C_UNK data_02150bb8;

void func_020268b0(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0) < 0) {
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0) > func_02046d8c(&data_02143e44)) {
        M2C_FIELD(arg0, s32 *, 0) = func_02046d8c(&data_02143e44);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) < 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) > func_02046d84(&data_02143e44)) {
        M2C_FIELD(arg0, s32 *, 0xC) = func_02046d84(&data_02143e44);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x10) < 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x10) > func_02046d7c(&data_02143e44)) {
        M2C_FIELD(arg0, s32 *, 0x10) = func_02046d7c(&data_02143e44);
    }
    if (M2C_FIELD(&data_02150bb8, u8 *, 1) != 1) {
        return;
    }
    if (*func_02082640(&data_02150bb8, 0) != 3) {
        if ((s32) M2C_FIELD(arg0, s32 *, 4) < 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 4) > func_02046d8c(&data_02143e44)) {
            M2C_FIELD(arg0, s32 *, 4) = func_02046d8c(&data_02143e44);
        }
    } else {
        if ((s32) M2C_FIELD(arg0, s32 *, 4) < 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 4) > (s32) (func_02046d8c(&data_02143e44) + 0x12C)) {
            M2C_FIELD(arg0, s32 *, 4) = (s32) (func_02046d8c(&data_02143e44) + 0x12C);
        }
    }
    if (*func_02082640(&data_02150bb8, 1) != 3) {
        if ((s32) M2C_FIELD(arg0, s32 *, 8) < 0) {
            M2C_FIELD(arg0, s32 *, 8) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 8) <= func_02046d8c(&data_02143e44)) {
            return;
        }
        M2C_FIELD(arg0, s32 *, 8) = func_02046d8c(&data_02143e44);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 8) < 0) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 8) <= (s32) (func_02046d8c(&data_02143e44) + 0x12C)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (func_02046d8c(&data_02143e44) + 0x12C);
}
