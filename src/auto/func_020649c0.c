#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02063290();
extern void func_0206339c();
extern char data_020efa10[];
extern char data_02119284[];
// clang-format off
asm void func_020649c0(void) {
    stmfd sp!, {r4, lr}
    ldr ip, =data_020efa10
    mov r4, r0
    ldr r0, =data_02119284
    str ip, [r4, #0x0]
    str r0, [r4, #0x0]
    str r1, [r4, #0x4c4]
    str r2, [r4, #0x4c8]
    ldr r0, =0x4e4
    ldr r1, [sp, #0x8]
    str r3, [r4, #0x4cc]
    ldr r2, =0x4b4
    str r1, [r4, #0x4d0]
    mov r3, #0x0
    str r3, [r4, #0x4e0]
    add r1, r4, r0
    swpb r0, r3, [r1]
    add r1, r4, r2
    swpb r0, r3, [r1]
    add r0, r4, #0x4
    str r3, [r4, #0x4b8]
    str r3, [r4, #0x4bc]
    bl func_02063290
    add r0, r4, #0x25c
    bl func_02063290
    mov r0, r4
    bl func_0206339c
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
