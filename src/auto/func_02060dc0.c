#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202eabc();
extern void func_0204eab0();
extern void func_0204eb30();
extern void func_0205f3c4();
extern char data_020d45f0[];
extern char data_02118dcc[];
extern char data_02118e4c[];
// clang-format off
asm void func_02060dc0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    ldr r5, [sp, #0x18]
    ldr r4, =data_02118dcc
    str r5, [sp, #0x0]
    str r4, [sp, #0x4]
    mov ip, #0x2
    mov r5, r0
    mov r4, r2
    str ip, [sp, #0x8]
    bl func_0205f3c4
    ldr r1, =data_02118e4c
    ldr r0, =0x9e8
    ldr r2, =0x9e9
    ldr r3, =0x9f8
    str r1, [r5, #0x0]
    add r1, r5, r0
    mov ip, #0x0
    swpb r0, ip, [r1]
    add r1, r5, r2
    swpb r0, ip, [r1]
    add r0, r5, r3
    str ip, [r5, #0x9ec]
    ldr r2, [r4, #0x0]
    ldr r1, [r4, #0x4]
    str r2, [r5, #0x9f0]
    str r1, [r5, #0x9f4]
    bl func_0202eabc
    add r1, r5, #0x1e
    ldrb r0, [r1, #0x0]
    bic r0, r0, #0x2
    swpb r0, r0, [r1]
    bl func_0204eb30
    ldr r1, =data_020d45f0
    bl func_0204eab0
    mov r0, r5
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
