#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_02000e8c();
extern void func_020012d0();
extern void func_02003cd8();
extern void func_02003dc8();
extern void func_02003fec();
extern void func_02005518();
extern void func_02006428();
extern void func_0202718c();
extern void r1();
extern void r2();
extern void r5();
extern char data_020a77d8[];
// clang-format off
asm void func_02004e44(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r2, [r0, #0x0]
    mov r6, r0
    ldr r2, [r2, #0x148]
    mov r5, r1
    blx r2
    mov r4, r0
    mov r0, r6
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x14c]
    blx r1
    mov r1, r0
    mov r0, r4
    bl func_0202718c
    mov r4, r0
    mov r0, r6
    mov r1, #0x0
    bl func_02003fec
    mov r0, r6
    mov r1, r4
    mov r2, #0x0
    bl func_02003cd8
    ldr r0, =0x191
    mov r2, #0x0
    add r1, r6, r0
    swpb r0, r2, [r1]
    ldrb r0, [r6, #0x1d8]
    cmp r0, #0x0
    ldrne r1, [r6, #0x50]
    ldrne r0, [r6, #0x18c]
    strne r1, [r0, #0x0]
    ldr r0, [r6, #0xa4]
    add r1, r5, #0x8
    add r0, r0, #0x4
    bl func_02000e8c
    ldr r0, [r6, #0xa4]
    add r1, r5, #0x14
    add r0, r0, #0x1c
    bl func_02000e8c
    ldr r0, =data_020a77d8
    bl func_020012d0
    mov r1, r0
    mov r0, r6
    bl func_02003dc8
    ldr r0, [r5, #0x4]
    cmp r0, #0x17
    bgt L_02004f60
    cmp r0, #0x17
    bge L_02004fbc
    cmp r0, #0xa
    bgt L_02004f3c
    cmp r0, #0xa
    bge L_02004fbc
    cmp r0, #0x4
    bgt L_02004fe4
    cmp r0, #0x2
    blt L_02004fe4
    cmp r0, #0x2
    beq L_02004fbc
    cmp r0, #0x4
    beq L_02004fbc
    b L_02004fe4
L_02004f3c:
    cmp r0, #0xe
    bgt L_02004fe4
    cmp r0, #0xd
    blt L_02004fe4
    cmp r0, #0xd
    beq L_02004fbc
    cmp r0, #0xe
    beq L_02004fbc
    b L_02004fe4
L_02004f60:
    cmp r0, #0x41
    bgt L_02004f7c
    cmp r0, #0x41
    bge L_02004fbc
    cmp r0, #0x3c
    beq L_02004fa0
    b L_02004fe4
L_02004f7c:
    cmp r0, #0x44
    bgt L_02004fe4
    cmp r0, #0x43
    blt L_02004fe4
    cmp r0, #0x43
    beq L_02004fcc
    cmp r0, #0x44
    beq L_02004fbc
    b L_02004fe4
L_02004fa0:
    mov r0, r6
    ldr r2, [r0, #0x0]
    mov r1, r5
    ldr r2, [r2, #0x134]
    blx r2
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02004fbc:
    mov r0, r6
    bl func_02005518
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02004fcc:
    mov r0, r6
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xfc]
    blx r1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02004fe4:
    mov r0, r6
    bl func_02006428
    cmp r0, #0x0
    bne L_02005014
    mov r0, r6
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x12c]
    blx r1
    mov r0, r6
    bl func_02005518
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02005014:
    add r1, r6, #0x1e
    ldrb r0, [r1, #0x0]
    mov r2, #0x0
    mov r3, #0x3
    bic r0, r0, #0x1
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
    mov r1, #0x2
    str r3, [r6, #0x1bc]
    mov r0, r6
    str r1, [r6, #0x1b8]
    ldr r5, [r0, #0x0]
    mov r1, r4
    ldr r5, [r5, #0xc8]
    mov r3, r2
    blx r5
    mov r0, r6
    add r1, r6, #0x1d0
    bl func_01ff9acc
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
