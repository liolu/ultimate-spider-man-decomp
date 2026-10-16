/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0209535c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_protection.c (license:
 * none), reused by tools/donor_match.py */
// clang-format off
asm void func_0209535c(void) {
    mrc     p15, 0, r0, c1, c0, 0
    bic     r0, r0, #1
    mcr     p15, 0, r0, c1, c0, 0
    bx      lr
}
// clang-format on
