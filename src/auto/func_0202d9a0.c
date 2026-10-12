#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200d6e8();
extern void func_020277a4();
extern void func_02028dfc();
extern void func_02028f4c();
extern void func_0202a3a8();
extern void func_0202a4c4();
extern void func_0202d454();
extern void func_0202d558();
extern void func_0202dc04();
extern void func_0202deb8();
extern void func_0202e0bc();
extern void func_0202f358();
extern void func_0202f5a0();
extern void func_0202f64c();
extern void func_0204a950();
extern void func_02064fc8();
extern void func_0206570c();
extern char data_0210151c[];
extern char data_0210153c[];
extern char data_02101548[];
extern char data_02101558[];
extern char data_02143e44[];
extern char data_02146128[];
// clang-format off
asm void func_0202d9a0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x8
    mov r7, r1
    mov r1, #0x1
    mov r8, r0
    bl func_0202f5a0
    ldr r0, =data_0210151c
    add r4, r8, #0x18
    str r0, [r8, #0x0]
    ldmia r7, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    ldr r0, [r7, #0x8]
    ldr r1, [r7, #0x0]
    ldr r0, [r0, #0x0]
    ldr r2, [r7, #0x4]
    ldr r3, [r0, #0x0]
    add r0, r8, #0x28
    bl func_0202a4c4
    mov r0, #0x0
    str r0, [r8, #0xc8]
    str r0, [r8, #0xd0]
    str r0, [r8, #0xd4]
    str r0, [r8, #0xd8]
    ldr r0, [r7, #0x4]
    bl func_0206570c
    mov r2, r0
    mov r0, #0x0
    ldr r1, [r7, #0x4]
    bl func_0200d6e8
    strh r0, [r8, #0xdc]
    mov r6, #0x0
    add r1, r8, #0xde
    swpb r0, r6, [r1]
    add r1, r8, #0xe8
    str r6, [r8, #0xe0]
    str r6, [r8, #0xe4]
    swpb r0, r6, [r1]
    mov r0, #0x1
    add r1, r8, #0xe9
    swpb r0, r0, [r1]
    add r0, r8, #0x28
    bl func_0202a3a8
    cmp r0, #0x0
    ble L_0202daa4
    add r4, sp, #0x0
    add r9, r8, #0x28
    mov r10, #0x1
    mov r5, #0x8
L_0202da60:
    mov r0, r5
    bl func_02064fc8
    cmp r0, #0x0
    beq L_0202da78
    mov r1, r4
    bl func_0202e0bc
L_0202da78:
    add r1, r8, r6, lsl #0x2
    str r0, [r1, #0x48]
    ldr r1, [r1, #0x48]
    mov r0, r8
    mov r2, r10
    bl func_0202f358
    mov r0, r9
    add r6, r6, #0x1
    bl func_0202a3a8
    cmp r6, r0
    blt L_0202da60
L_0202daa4:
    mov r0, #0x3c
    bl func_02064fc8
    cmp r0, #0x0
    beq L_0202dabc
    ldr r1, [r7, #0x8]
    bl func_020277a4
L_0202dabc:
    str r0, [r8, #0xcc]
    ldr r1, [r8, #0xcc]
    mov r0, r8
    mov r2, #0x1
    bl func_0202f358
    ldrh r0, [r8, #0xdc]
    bl func_0202deb8
    ldr r2, [r8, #0x24]
    mvn r1, #0x0
    cmp r2, r1
    movne r0, r2
    mvn r1, #0x0
    cmp r0, r1
    strne r0, [r8, #0xc8]
    mov r0, r8
    bl func_0202f64c
    ldr r0, =data_02143e44
    ldrb r1, [r0, #0x0]
    cmp r1, #0x0
    beq L_0202db24
    bl func_02028f4c
    ldr r1, =data_02146128
    bl func_0204a950
    bl func_02028dfc
    bl func_0202dc04
    b L_0202db68
L_0202db24:
    ldrb r0, [r0, #0x1]
    cmp r0, #0x0
    beq L_0202db5c
    ldr r0, =data_0210153c
    bl func_0206570c
    mov r2, r0
    ldr r1, =data_0210153c
    mov r0, #0x0
    bl func_0200d6e8
    ldrh r1, [r8, #0xdc]
    cmp r1, r0
    bne L_0202db5c
    bl func_0202dc04
    b L_0202db68
L_0202db5c:
    mov r0, r8
    mov r1, #0xe
    bl func_0202d454
L_0202db68:
    ldr r1, [r8, #0xc8]
    mov r0, r8
    mov r2, #0x2
    bl func_0202d558
    ldr r0, =data_02101548
    bl func_0206570c
    mov r2, r0
    ldr r1, =data_02101548
    mov r0, #0x0
    bl func_0200d6e8
    ldrh r1, [r8, #0xdc]
    ldr r2, =data_02143e44
    cmp r1, r0
    moveq r1, #0x1
    movne r1, #0x0
    swpb r1, r1, [r2]
    ldr r0, =data_02101558
    bl func_0206570c
    mov r2, r0
    ldr r1, =data_02101558
    mov r0, #0x0
    bl func_0200d6e8
    ldrh r1, [r8, #0xdc]
    cmp r1, r0
    ldr r1, =data_02143e44
    moveq r3, #0x1
    movne r3, #0x0
    add r2, r1, #0x1
    swpb r1, r3, [r2]
    mov r0, r8
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on
