#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff99f4();
extern void func_02024c20();
extern void func_02064fc8();
extern void func_0206fc1c();
extern void r2();
extern char data_02118d30[];
extern char data_0213a758[];
// clang-format off
asm void func_0206054c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r4, r0
    mov r0, #0x40
    mov r5, r1
    bl func_02064fc8
    movs r1, r0
    beq L_0206057c
    ldr r1, =data_0213a758
    mov r2, #0x0
    bl func_02024c20
    mov r1, r0
L_0206057c:
    mov ip, #0x0
    str ip, [sp, #0x0]
    mov r0, r4
    mov r2, r5
    mov r3, #0x1
    str ip, [sp, #0x4]
    bl func_0206fc1c
    ldr r0, =data_02118d30
    add r2, r4, #0xc8
    str r0, [r4, #0x0]
    mov r1, #0x0
    swpb r0, r1, [r2]
    add r2, r4, #0xd0
    str r1, [r4, #0xcc]
    swpb r0, r1, [r2]
    add r2, r4, #0xd4
    swpb r0, r1, [r2]
    add r2, r4, #0xd5
    swpb r0, r1, [r2]
    add r3, r4, #0x1c
    ldrb r2, [r3, #0x0]
    mov r0, r4
    bic r2, r2, #0x8
    swpb r2, r2, [r3]
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x8c]
    blx r2
    add r3, r4, #0x1c
    ldrb r2, [r3, #0x0]
    ldr r1, =0x1ae
    mov r0, r4
    orr r2, r2, #0x20
    swpb r2, r2, [r3]
    bl func_01ff99f4
    mov r0, r4
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
