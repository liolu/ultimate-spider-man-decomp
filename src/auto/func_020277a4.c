#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffe78c();
extern void func_020271b0();
extern void func_02027628();
extern void func_0202f5a0();
extern void func_02064fbc();
extern void func_02064fc8();
extern char data_020f90b4[];
// clang-format off
asm void func_020277a4(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r4, r1
    mov r1, #0x1
    mov r5, r0
    bl func_0202f5a0
    ldr r0, =data_020f90b4
    add r1, r5, #0x1c
    mov r2, #0x0
    str r0, [r5, #0x0]
    swpb r0, r2, [r1]
    add r1, r5, #0x1d
    swpb r0, r2, [r1]
    mvn r1, #0x0
    str r2, [r5, #0x20]
    ldr r2, [r4, #0x0]
    mov r0, r5
    str r2, [r5, #0x24]
    ldr r2, [r4, #0x0]
    ldrh r2, [r2, #0x4]
    mov r2, r2, lsl #0x2
    str r2, [r5, #0x28]
    str r1, [r5, #0x38]
    bl func_02027628
    ldr r1, [r5, #0x2c]
    mov r0, #0x18
    ldr r1, [r1, #0x8]
    str r1, [r5, #0x30]
    bl func_02064fc8
    movs r7, r0
    beq L_0202785c
    ldr r6, [r5, #0x30]
    mov r0, #0x28
    mul r0, r6, r0
    str r6, [r7, #0x0]
    str r6, [r7, #0x8]
    str r6, [r7, #0x10]
    bl func_02064fbc
    mov r6, r6, lsl #0x4
    str r0, [r7, #0x4]
    mov r0, r6
    bl func_02064fbc
    str r0, [r7, #0xc]
    mov r0, r6
    bl func_02064fbc
    str r0, [r7, #0x14]
L_0202785c:
    str r7, [r5, #0x18]
    ldr r0, [r5, #0x2c]
    ldr r1, [r5, #0x18]
    ldr r2, [r5, #0x28]
    bl func_01ffe78c
    ldr r0, [r5, #0x30]
    mov r0, r0, lsl #0x2
    bl func_02064fbc
    str r0, [r5, #0x34]
    ldr r1, [r4, #0x4]
    mov r0, r5
    bl func_020271b0
    mov r0, r5
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
