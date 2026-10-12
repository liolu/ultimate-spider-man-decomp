#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f64c();
extern void func_02046b30();
extern void func_02046b78();
extern void func_02046bac();
extern char data_020efa10[];
extern char data_0211811c[];
extern char data_0213b398[];
// clang-format off
asm void func_020593c8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r4, =data_020efa10
    mov r5, r0
    ldr r0, =data_0211811c
    str r4, [r5, #0x0]
    str r0, [r5, #0x0]
    mov r0, #0x0
    str r0, [r5, #0x4]
    str r0, [r5, #0x8]
    ldr ip, [r1, #0x0]
    ldr r0, [r1, #0x4]
    mov r4, r2
    str ip, [r5, #0xc]
    str r0, [r5, #0x10]
    ldr r0, [r1, #0x8]
    ldr r2, [r1, #0xc]
    mov r1, r4
    str r0, [r5, #0x14]
    add r0, r5, #0x1c
    mov r6, r3
    str r2, [r5, #0x18]
    bl func_02046bac
    add r1, r5, #0x48
    swpb r0, r4, [r1]
    add r1, r5, #0x49
    swpb r0, r6, [r1]
    mov r2, #0x0
    add r0, r5, #0x1c
    add r1, r5, #0xc
    str r2, [r5, #0x4c]
    bl func_02046b78
    ldr r1, =data_0213b398
    add r0, r5, #0x1c
    bl func_02046b30
    ldrb r0, [r5, #0x49]
    cmp r0, #0x0
    beq L_02059464
    mov r0, r5
    bl func_0202f64c
L_02059464:
    mov r0, r5
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
