#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003e14();
extern void func_0208580c();
extern char data_0211f110[];
extern char data_0211f11c[];
// clang-format off
asm void func_0200fc24(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r6, r1
    ldr r1, [r6, #0x0]
    mov r7, r0
    mov r5, r2
    mov r4, r3
    cmp r1, #0xc
    beq L_0200fc50
    cmp r1, #0x3d
    bne L_0200fc80
L_0200fc50:
    ldr r0, [r7, #0x164]
    mov r2, #0x0
    ldr r0, [r0, #0xbc]
    ldr r1, =data_0211f110
    mov r3, r2
    bl func_0208580c
    ldr r0, [r7, #0x164]
    add r1, r0, #0x1e
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x2
    swpb r0, r0, [r1]
    b L_0200fcb8
L_0200fc80:
    ldr r0, [r7, #0x164]
    ldr r1, =data_0211f11c
    ldr r0, [r0, #0xbc]
    ldr r2, [r0, #0x9c]
    cmp r2, r1
    beq L_0200fca4
    mov r2, #0x0
    mov r3, #0x1
    bl func_0208580c
L_0200fca4:
    ldr r0, [r7, #0x164]
    add r1, r0, #0x1e
    ldrb r0, [r1, #0x0]
    bic r0, r0, #0x2
    swpb r0, r0, [r1]
L_0200fcb8:
    mov r0, r7
    mov r1, r6
    mov r2, r5
    mov r3, r4
    bl func_02003e14
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
