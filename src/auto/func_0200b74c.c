#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9b28();
extern void func_0200b6bc();
extern void func_0207c284();
extern void func_0208580c();
extern void r1();
extern char data_0214876c[];
// clang-format off
asm void func_0200b74c(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    mov r4, r0
    mov r0, #0x0
    str r0, [r4, #0x78]
    ldr r0, [r4, #0x17c]
    cmp r0, #0x0
    beq L_0200b788
    cmp r0, #0x0
    beq L_0200b780
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x4]
    blx r1
L_0200b780:
    mov r0, #0x0
    str r0, [r4, #0x17c]
L_0200b788:
    ldr r1, [r4, #0x178]
    ldr r0, [r1, #0x4]
    cmp r0, #0x0
    bne L_0200b7ac
    mov r0, r4
    bl func_0200b6bc
    mov r0, r4
    bl func_01ff9b28
    b L_0200b804
L_0200b7ac:
    mov r2, #0x0
    str r2, [sp, #0x0]
    ldr r1, [r1, #0x10]
    ldr r0, =data_0214876c
    mov r3, r2
    bl func_0207c284
    ldr r1, [r4, #0x178]
    ldr r0, [r4, #0xbc]
    ldr r1, [r1, #0x4]
    mov r2, #0x0
    mov r3, #0x1
    bl func_0208580c
    ldr r3, [r4, #0xbc]
    mov r2, #0x0
    add r1, r3, #0x96
    swpb r0, r2, [r1]
    add r1, r3, #0x97
    swpb r0, r2, [r1]
    add r1, r4, #0x1c
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x80
    swpb r0, r0, [r1]
L_0200b804:
    mov r0, #0x1
    str r0, [r4, #0x180]
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
