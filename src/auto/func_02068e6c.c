#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02086e20();
extern void func_02086f18();
extern char data_0213b6e0[];
// clang-format off
asm void func_02068e6c(void) {
    stmfd sp!, {r4, lr}
    ldr r2, [r1, #0x0]
    mov r4, r0
    cmp r2, #0x26
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldr r0, [r1, #0x4]
    cmp r0, #0x0
    bne L_02068ec8
    add r1, r4, #0x24
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x28]
    bl func_02086e20
    ldr r2, [r0, #0x0]
    ldr r1, =data_0213b6e0
    str r2, [r4, #0xc]
    ldr r0, [r0, #0x4]
    str r0, [r4, #0x10]
    ldr r0, [r1, #0x0]
    str r0, [r4, #0x14]
    ldmfd sp!, {r4, lr}
    bx lr
L_02068ec8:
    cmp r0, #0x1
    bne L_02068ee4
    ldr r0, [r4, #0x2c]
    add r1, r4, #0x4
    bl func_02086f18
    ldmfd sp!, {r4, lr}
    bx lr
L_02068ee4:
    cmp r0, #0x2
    ldmnefd sp!, {r4, lr}
    bxne lr
    add r1, r4, #0x24
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0x26
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r1, r4, #0x18
    ldr r0, [r4, #0x2c]
    bl func_02086f18
    ldr r0, =data_0213b6e0
    ldr r0, [r0, #0x0]
    str r0, [r4, #0x20]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
