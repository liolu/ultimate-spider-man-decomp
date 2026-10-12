#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020272e0();
// clang-format off
asm void func_02027324(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    str r1, [r4, #0x24]
    str r2, [r4, #0x20]
    add ip, r4, #0x1c
    cmp r2, #0x0
    swpb r3, r3, [ip]
    beq L_02027354
    cmp r2, #0x1
    beq L_02027364
    cmp r2, #0x2
    bne L_02027370
L_02027354:
    ldrh r0, [r1, #0x4]
    mov r0, r0, lsl #0x2
    str r0, [r4, #0x28]
    b L_02027370
L_02027364:
    bl func_020272e0
    mov r0, r0, lsl #0x2
    str r0, [r4, #0x28]
L_02027370:
    add r1, r4, #0x1d
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
