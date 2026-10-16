/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* do_autoload from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/crt0/do_autoload.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
extern u32 BuildInfo[];
extern void AutoloadCallback(int arg);
// clang-format off
asm void func_020009b8(void)
{
    ldr r0, =BuildInfo
    ldr r1, [r0]
    ldr r2, [r0, #4]
    ldr r3, [r0, #8]
next_block:
    cmp r1, r2
    beq done
    ldr r4, [r1], #4
    ldr r5, [r1], #4
    add r6, r4, r5
copy:
    cmp r4, r6
    ldrmi r7, [r3], #4
    strmi r7, [r4], #4
    bmi copy
    ldr r5, [r1], #4
    add r6, r4, r5
    mov r7, #0
clear:
    cmp r4, r6
    strcc r7, [r4], #4
    bcc clear
    beq next_block
done:
    b AutoloadCallback
}
// clang-format on
