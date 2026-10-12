#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f64c();
extern void func_02046b30();
extern void func_02046b78();
extern void func_02046bac();
extern char data_020efa10[];
extern char data_0211811c[];
extern char data_0213b398[];
extern char data_0214610c[];
// clang-format off
asm void func_0205947c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r2, =data_020efa10
    mov r4, r0
    ldr r0, =data_0211811c
    str r2, [r4, #0x0]
    str r0, [r4, #0x0]
    mov r0, #0x0
    str r0, [r4, #0x4]
    ldr r2, =data_0214610c
    str r0, [r4, #0x8]
    ldr ip, [r2, #0x0]
    ldr r3, [r2, #0x4]
    add r0, r4, #0x1c
    str ip, [r4, #0xc]
    str r3, [r4, #0x10]
    ldr r3, [r2, #0x8]
    ldr r2, [r2, #0xc]
    mov r5, r1
    str r3, [r4, #0x14]
    str r2, [r4, #0x18]
    bl func_02046bac
    add r1, r4, #0x48
    swpb r0, r5, [r1]
    add r1, r4, #0x49
    mov r0, #0x1
    swpb r0, r0, [r1]
    mov r2, #0x0
    add r0, r4, #0x1c
    add r1, r4, #0xc
    str r2, [r4, #0x4c]
    bl func_02046b78
    ldr r1, =data_0213b398
    add r0, r4, #0x1c
    bl func_02046b30
    ldrb r0, [r4, #0x49]
    cmp r0, #0x0
    beq L_0205951c
    mov r0, r4
    bl func_0202f64c
L_0205951c:
    mov r0, r4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
