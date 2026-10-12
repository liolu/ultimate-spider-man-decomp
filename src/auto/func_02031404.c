#include "m2c.h"

extern s32 data_02143404;
extern s32 data_0214340c;

s32 func_02031404(void) {
    if (data_02143404 != data_0214340c) {
        return 1;
    }
    return 0;
}
