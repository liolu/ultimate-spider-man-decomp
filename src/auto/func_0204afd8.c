#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02024c20();
extern void func_0204e6e4();
extern void func_02054c48();
extern void func_02064fc8();
extern void func_0206fb3c();
extern char data_02107c8c[];
extern char data_0213a7b0[];
// clang-format off
asm void func_0204afd8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    ldr r4, [sp, #0x20]
    ldr ip, [sp, #0x24]
    str r4, [sp, #0x0]
    ldrb r4, [sp, #0x28]
    str ip, [sp, #0x4]
    mov ip, #0x0
    str r4, [sp, #0x8]
    mov r4, r0
    mov r6, r2
    str ip, [sp, #0xc]
    bl func_0204e6e4
    ldr r1, =data_02107c8c
    mov r0, #0xc8
    str r1, [r4, #0x0]
    bl func_02064fc8
    movs r5, r0
    beq L_0204b064
    mov r0, #0x40
    bl func_02064fc8
    movs r1, r0
    beq L_0204b044
    ldr r1, =data_0213a7b0
    mov r2, #0x0
    bl func_02024c20
    mov r1, r0
L_0204b044:
    mov ip, #0x0
    str ip, [sp, #0x0]
    mov r0, r5
    mov r2, r6
    mov r3, #0x1
    str ip, [sp, #0x4]
    bl func_0206fb3c
    mov r5, r0
L_0204b064:
    str r5, [r4, #0x3c4]
    ldr r0, [r4, #0x3c4]
    mov r1, #0x2
    ldr r0, [r0, #0xbc]
    ldr r0, [r0, #0x20]
    bl func_02054c48
    mov r0, #0x0
    str r0, [r4, #0x3c8]
    str r0, [r4, #0x3cc]
    add r2, r4, #0x1d
    ldrb r1, [r2, #0x0]
    mov r0, r4
    orr r1, r1, #0x80
    swpb r1, r1, [r2]
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
