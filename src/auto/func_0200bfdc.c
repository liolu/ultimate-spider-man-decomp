#include "m2c.h"

M2C_UNK func_02054b18(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_02139350;
extern M2C_UNK data_02139358;
extern M2C_UNK data_02139360;
extern M2C_UNK data_02139368;
extern M2C_UNK data_02139370;
extern M2C_UNK data_02139378;
extern M2C_UNK data_02139380;
extern M2C_UNK data_02139388;
extern M2C_UNK data_02139390;
extern M2C_UNK data_02139398;
extern M2C_UNK data_021393a0;
extern M2C_UNK data_021393a8;
extern M2C_UNK data_021393b0;
extern M2C_UNK data_021393b8;
extern M2C_UNK data_021393c0;
extern M2C_UNK data_02150d8c;

void func_0200bfdc(void *arg0) {
    M2C_UNK *var_r1;
    u32 temp_r2;
    u32 temp_r2_2;

    var_r1 = NULL;
    if (M2C_FIELD(arg0, volatile u8 *, 0x2C) != 0) {
        temp_r2 = M2C_FIELD(arg0, volatile s32 *, 0x28) + 1;
        switch (temp_r2) {                          /* switch 1 */
        default:                                    /* switch 1 */
            break;
        case 1:                                     /* switch 1 */
            var_r1 = &data_021393a8;
            break;
        case 2:                                     /* switch 1 */
            var_r1 = &data_02139398;
            break;
        case 3:                                     /* switch 1 */
            var_r1 = &data_02139388;
            break;
        case 4:                                     /* switch 1 */
            var_r1 = &data_021393c0;
            break;
        case 5:                                     /* switch 1 */
            var_r1 = &data_02139368;
            break;
        case 6:                                     /* switch 1 */
            var_r1 = &data_02139358;
            break;
        case 7:                                     /* switch 1 */
            var_r1 = &data_02139350;
            break;
        case 8:                                     /* switch 1 */
            var_r1 = &data_021393b8;
            break;
        }
    } else {
        temp_r2_2 = M2C_FIELD(arg0, volatile s32 *, 0x28) + 1;
        switch (temp_r2_2) {                        /* switch 2 */
        default:                                    /* switch 2 */
            break;
        case 1:                                     /* switch 2 */
            var_r1 = &data_021393a0;
            break;
        case 2:                                     /* switch 2 */
            var_r1 = &data_02139390;
            break;
        case 3:                                     /* switch 2 */
            var_r1 = &data_02139380;
            break;
        case 4:                                     /* switch 2 */
            var_r1 = &data_02139370;
            break;
        case 5:                                     /* switch 2 */
            var_r1 = &data_02139360;
            break;
        case 6:                                     /* switch 2 */
            var_r1 = &data_02139378;
            break;
        case 7:                                     /* switch 2 */
            var_r1 = &data_021393b0;
            break;
        case 8:                                     /* switch 2 */
            var_r1 = &data_02150d8c;
            break;
        }
    }
    func_02054b18(M2C_FIELD(arg0, volatile s32 *, 0x20), var_r1, 0);
}
