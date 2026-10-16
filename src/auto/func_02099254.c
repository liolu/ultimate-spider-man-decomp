/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02071790 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0207/func_02071790.c (license: MIT), reused
 * by tools/donor_match.py */
// clang-format off
#pragma ipa file
asm void func_02099254(void) {
    ldr r4, [r0, #0x2c]
    ldr r5, [r0, #0x30]
    ldr r6, [r0, #0x34]
    ldr r7, [r0, #0x38]
    ldr r8, [r0, #0x3c]
    ldr r9, [r0, #0x40]
    ldr r10, [r0, #0x44]
    ldr r11, [r0, #0x48]
    ldr sp, [r0, #0x5c]
    ldr r12, [r0, #0x64]
    sub sp, sp, r12
    mov pc, r2
}
// clang-format on
