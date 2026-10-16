/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_ReleaseLockID from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/asm_stubs/auto/OS_ReleaseLockID.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
// clang-format off
#pragma ipa file
asm void func_02093cfc(int nLockId)
{
    ldr     r3, =0x027fffb0
    cmp     r0, #0x60
    addpl   r3, r3, #4
    subpl   r0, r0, #0x60
    submi   r0, r0, #0x40
    mov     r1, #0x80000000
    mov     r1, r1, lsr r0
    ldr     r2, [r3]
    orr     r2, r2, r1
    str     r2, [r3]
    bx      lr
}
// clang-format on
