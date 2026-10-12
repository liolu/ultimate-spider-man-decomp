#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020034bc();
extern void func_0205b58c();
extern void func_0208c03c();
extern char data_02150c78[];
// clang-format off
asm void func_0205fd78(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    ldrb r1, [r4, #0x776]
    cmp r1, #0x0
    bne L_0205fda8
    mov r1, #0x0
    mov r2, r1
    bl func_0205b58c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0205fda8:
    ldr r5, [r4, #0x4c]
    cmp r5, #0xfa0
    bge L_0205fde8
    ldr r1, [r4, #0x6f4]
    ldr r1, [r1, #0x4c]
    cmp r1, r5
    blt L_0205fde8
    ldr r2, =0x15e
    mov r1, #0x0
    add r4, r4, r2
    swpb r3, r1, [r4]
    mov r2, r1
    bl func_0205b58c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0205fde8:
    ldr r0, =data_02150c78
    bl func_0208c03c
    sub r0, r0, #0xfa0
    cmp r5, r0
    ble L_0205fe3c
    ldr r1, [r4, #0x6f4]
    ldr r0, [r4, #0x4c]
    ldr r1, [r1, #0x4c]
    cmp r1, r0
    bge L_0205fe3c
    ldr r3, =0x15e
    mov r0, r4
    add r4, r4, r3
    mov r3, #0x1
    mov r1, #0x0
    swpb r3, r3, [r4]
    mov r2, r1
    bl func_0205b58c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0205fe3c:
    mov r0, r4
    bl func_020034bc
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
