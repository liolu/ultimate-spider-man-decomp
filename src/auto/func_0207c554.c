#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0208556c();
extern char data_0211c0f8[];
extern char data_0211ca94[];
// clang-format off
asm void func_0207c554(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r1, =data_0211ca94
    mov r4, r0
    str r1, [r4, #0x0]
    add r6, r4, #0xc
    add r5, r4, #0x15c
L_0207c56c:
    add r0, r6, #0x4
    bl func_0208556c
    add r6, r6, #0x1c
    cmp r6, r5
    bne L_0207c56c
    ldr r0, =data_0211c0f8
    add r2, r4, #0x8000
    str r0, [r4, #0x0]
    mov r3, #0x0
    str r3, [r2, #0x264]
    str r3, [r2, #0x268]
    str r3, [r2, #0x26c]
    str r3, [r2, #0x270]
    str r3, [r2, #0x274]
    str r3, [r2, #0x278]
    add r1, r2, #0x2dc
    swpb r0, r3, [r1]
    str r3, [r2, #0x2e0]
    str r3, [r2, #0x2e4]
    str r3, [r2, #0x2e8]
    mov r1, r3
    mvn r2, #0x0
L_0207c5c4:
    add r0, r4, r3, lsl #0x3
    add r0, r0, #0x8000
    str r2, [r0, #0x27c]
    add r3, r3, #0x1
    str r1, [r0, #0x280]
    cmp r3, #0xc
    blo L_0207c5c4
    mov r0, r4
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
