#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f358();
extern void func_0202f550();
extern void func_0202f64c();
extern void func_0202f66c();
extern void func_0204f77c();
extern void func_020593c8();
extern void func_02064fc8();
extern char data_021170f8[];
extern char data_021460fc[];
// clang-format off
asm void func_020572e8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r4, r2
    mov r5, r1
    bl func_0202f66c
    mov r2, r0
    mov r0, r6
    mov r1, r4
    bl func_0204f77c
    ldr r0, =data_021170f8
    mov r1, #0x0
    str r0, [r6, #0x0]
    str r5, [r6, #0x28]
    str r1, [r6, #0x2c]
    str r1, [r6, #0x30]
    str r1, [r6, #0x34]
    str r1, [r6, #0x38]
    str r1, [r6, #0x3c]
    str r1, [r6, #0x40]
    str r1, [r6, #0x44]
    add r2, r6, #0x48
    swpb r0, r1, [r2]
    mvn r2, #0x0
    add r0, r6, #0x50
    str r2, [r6, #0x4c]
    bl func_0202f550
    mov r0, #0x50
    bl func_02064fc8
    cmp r0, #0x0
    beq L_02057370
    mov r2, #0x0
    ldr r1, =data_021460fc
    mov r3, r2
    bl func_020593c8
L_02057370:
    str r0, [r6, #0x3c]
    ldr r1, [r6, #0x3c]
    add r0, r6, #0x50
    mov r2, #0x1
    bl func_0202f358
    mov r0, r6
    bl func_0202f64c
    mov r0, r6
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
