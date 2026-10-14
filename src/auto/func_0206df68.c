/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0206df68(void *arg0) {
    void *temp_ip;

    if ((arg0 == NULL) || (temp_ip = M2C_FIELD(arg0, void **, 0x1C), (temp_ip == NULL))) {
        return -2;
    }
    M2C_FIELD(temp_ip, s32 *, 0x18)   = 0;
    M2C_FIELD(arg0, s32 *, 0x14)      = (s32) M2C_FIELD(temp_ip, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 8)         = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x18)      = 0;
    M2C_FIELD(temp_ip, s32 *, 0)      = 0;
    M2C_FIELD(temp_ip, s32 *, 4)      = 0;
    M2C_FIELD(temp_ip, s32 *, 0xC)    = 0;
    M2C_FIELD(temp_ip, s32 *, 0x20)   = 0;
    M2C_FIELD(temp_ip, s32 *, 0x24)   = 0;
    M2C_FIELD(temp_ip, s32 *, 0x30)   = 0;
    M2C_FIELD(temp_ip, s32 *, 0x34)   = 0;
    M2C_FIELD(temp_ip, void **, 0x64) = (void *) (temp_ip + 0x528);
    M2C_FIELD(temp_ip, void **, 0x48) = (void *) M2C_FIELD(temp_ip, void **, 0x64);
    M2C_FIELD(temp_ip, void **, 0x44) = (void *) M2C_FIELD(temp_ip, void **, 0x48);
    return 0;
}
