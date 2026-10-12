#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02015034();
extern void r1();
// clang-format off
asm void func_020150d8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    mov r6, r1
    mov r4, r2
    bl func_02015034
    cmp r0, #0x0
    beq L_02015108
    mov r0, r5
    bl func_02015034
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x24]
    blx r1
L_02015108:
    ldr r0, [r5, #0x18]
    cmp r0, #0x4
    ldmgefd sp!, {r4, r5, r6, lr}
    bxge lr
    add r0, r5, r0, lsl #0x2
    str r6, [r0, #0x4]
    ldr r0, [r5, #0x18]
    add r2, r5, #0x18
    add r0, r5, r0
    add r1, r0, #0x14
    swpb r0, r4, [r1]
    ldr r0, [r2, #0x0]
    add r0, r0, #0x1
    str r0, [r2, #0x0]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
