#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02064fbc();
extern char data_020efa10[];
extern char data_021025a8[];
// clang-format off
asm void func_02030f84(void) {
    stmfd sp!, {r4, lr}
    ldr r3, =data_020efa10
    mov r4, r0
    ldr r0, =data_021025a8
    str r3, [r4, #0x0]
    str r0, [r4, #0x0]
    str r1, [r4, #0x4]
    add r1, r4, #0xc
    mov r0, #0x0
    swpb r0, r0, [r1]
    mvn r0, #0x80000000
    str r2, [r4, #0x10]
    str r0, [r4, #0x14]
    ldr r0, [r4, #0x10]
    mov r0, r0, lsl #0x1
    bl func_02064fbc
    str r0, [r4, #0x8]
    ldr r0, [r4, #0x10]
    mov r3, #0x0
    cmp r0, #0x0
    ble L_02030ffc
L_02030fd8:
    ldr r0, [r4, #0x4]
    mov r2, r3, lsl #0x1
    ldrh r1, [r0, r2]
    ldr r0, [r4, #0x8]
    add r3, r3, #0x1
    strh r1, [r0, r2]
    ldr r0, [r4, #0x10]
    cmp r3, r0
    blt L_02030fd8
L_02030ffc:
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
