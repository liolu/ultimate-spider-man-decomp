/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* sys_Exit from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/Runtime/src/console_io.c (license: none), reused by
 * tools/donor_match.py */
extern void func_020994b8(void);
// clang-format off
asm void func_020994b8(void) {
    mov     r1, #0
    mov     r0, #0x18
    swi     0x123456
    mov     pc, lr
}
// clang-format on
