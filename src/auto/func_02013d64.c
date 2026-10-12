#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02064fc8();
extern void func_0207036c();
extern void func_02081258();
extern char data_02143e44[];
extern char data_02150bb8[];
// clang-format off
asm void func_02013d64(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r2, =data_02150bb8
    ldr r3, =data_02143e44
    mov r5, r0
    mov r4, r1
    mov r1, #0x0
    add ip, r2, #0x1
    mov r2, #0x1
    mov r0, #0x2
    str r1, [r3, #0x14]
    swpb r3, r2, [ip]
    bl func_0207036c
    ldr r0, =0x538
    bl func_02064fc8
    cmp r0, #0x0
    beq L_02013db0
    mov r1, r4
    bl func_02081258
L_02013db0:
    str r0, [r5, #0x24]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
