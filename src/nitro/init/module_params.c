#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_02142aa0[]; /* SDK_AUTOLOAD_LIST */
extern char data_02142ab8[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_0213b060[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_02142aa0,
    (void *) data_02142ab8,
    (void *) data_0213b060,
    (void *) data_0213b060,
    (void *) 0x02155fc0, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x02007533, /* SDK version 2.0.30003 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
