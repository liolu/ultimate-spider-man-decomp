#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020257fc();
extern void func_02025858();
extern void func_0202f284();
// clang-format off
asm void func_02025ff0(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r2, [r1, #0x0]
    cmp r2, #0xa
    bne L_020260d8
    ldr r2, [r1, #0x4]
    cmp r2, #0x6
    addls pc, pc, r2, lsl #0x2
    b L_020260c8
L_02026014:
    b L_020260c8
    b L_020260a0
    b L_020260b4
    b L_02026030
    b L_02026050
    b L_02026070
    b L_02026088
L_02026030:
    add r2, r0, #0x15
    mov r3, #0x1
    swpb r1, r3, [r2]
    add sp, sp, #0x4
    add r1, r0, #0x16
    swpb r0, r3, [r1]
    ldmfd sp!, {lr}
    bx lr
L_02026050:
    add r2, r0, #0x15
    mov r3, #0x0
    swpb r1, r3, [r2]
    add sp, sp, #0x4
    add r1, r0, #0x16
    swpb r0, r3, [r1]
    ldmfd sp!, {lr}
    bx lr
L_02026070:
    add r1, r0, #0x15
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_02026088:
    add r1, r0, #0x16
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_020260a0:
    ldr r1, [r1, #0x8]
    bl func_02025858
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_020260b4:
    ldr r1, [r1, #0x8]
    bl func_020257fc
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_020260c8:
    bl func_0202f284
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_020260d8:
    bl func_0202f284
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
