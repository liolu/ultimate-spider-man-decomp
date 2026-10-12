#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffd748();
extern void func_02001244();
extern void func_0200b62c();
extern void func_020147c8();
extern void func_020224ac();
extern void func_02026d80();
extern void func_02028de0();
extern void func_02028f4c();
extern void func_0202f358();
extern void func_0202f518();
extern void func_0202f550();
extern void func_0202f5f0();
extern void func_0202f728();
extern void func_0202f75c();
extern void func_0204a9c8();
extern void func_0205a024();
extern void func_0205cb34();
extern void func_0205cb68();
extern void func_02064fc8();
extern void func_0207036c();
extern void func_0207c4f8();
extern void func_0207c514();
extern void func_0207c8e4();
extern void func_0207c92c();
extern void func_0207dee8();
extern void func_0207df7c();
extern void func_020833fc();
extern void func_02083460();
extern void func_02086984();
extern void func_020869ac();
extern void func_02086aec();
extern void func_02086b20();
extern void func_0208778c();
extern void func_0208d410();
extern void func_0208dcf8();
extern void func_020a0a08();
extern char data_020afcbc[];
extern char data_020b42dc[];
extern char data_020d9660[];
extern char data_02119f54[];
extern char data_02119f60[];
extern char data_02119f74[];
extern char data_02119fa0[];
extern char data_02119fbc[];
extern char data_0213d588[];
extern char data_02146128[];
extern char data_02147ad8[];
extern char data_02147adc[];
extern char data_02147ae0[];
extern char data_02147ae4[];
extern char data_02147ae8[];
extern char data_0214876c[];
extern char data_02150c58[];
extern char data_ov000_0215604c[];
extern char func_0206792c[];
extern char func_020679d8[];
// clang-format off
asm void main(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xb4
    bl func_0207c92c
    bl func_0207df7c
    ldr r0, =data_0214876c
    ldr r1, =data_02119f60
    ldr r2, =data_02119f74
    ldr r3, =data_02119fa0
    bl func_0207c514
    bl func_0205cb68
    bl func_020a0a08
    bl func_0208d410
    ldr r0, =func_020679d8
    bl func_0208dcf8
    bl func_02001244
    ldr r2, =func_0206792c
    ldr r1, =data_02150c58
    add r0, sp, #0x0
    str r2, [r1, #0x0]
    mov r1, #0x1
    bl func_0202f550
    mov r0, #0x3c
    bl func_02064fc8
    movs r1, r0
    beq L_02000b8c
    bl func_020147c8
    mov r1, r0
L_02000b8c:
    add r0, sp, #0x0
    mov r2, #0x1
    bl func_0202f358
    mov r0, #0x4
    bl func_02064fc8
    movs r1, r0
    beq L_02000bb0
    bl func_020224ac
    mov r1, r0
L_02000bb0:
    add r0, sp, #0x0
    mov r2, #0x1
    bl func_0202f358
    mov r0, #0xc
    bl func_02064fc8
    movs r1, r0
    beq L_02000bd4
    bl func_0200b62c
    mov r1, r0
L_02000bd4:
    add r0, sp, #0x0
    mov r2, #0x1
    bl func_0202f358
    mov r0, #0x4
    bl func_02064fc8
    movs r1, r0
    beq L_02000bf8
    bl func_0205a024
    mov r1, r0
L_02000bf8:
    add r0, sp, #0x0
    mov r2, #0x1
    bl func_0202f358
    mov r0, #0x1b4
    bl func_02064fc8
    movs r1, r0
    beq L_02000c1c
    bl func_0208778c
    mov r1, r0
L_02000c1c:
    add r0, sp, #0x0
    mov r2, #0x1
    bl func_0202f358
    add r0, sp, #0x18
    bl func_0202f75c
    ldr r1, =data_020d9660
    add r0, sp, #0x30
    bl func_02083460
    add r0, sp, #0x5c
    bl func_020869ac
    add r0, sp, #0x40
    mov r1, #0x32
    bl func_02086b20
    ldr r0, =data_02147ad8
    add r3, sp, #0x0
    str r3, [r0, #0x0]
    ldr r1, =data_02147ae4
    add r2, sp, #0x18
    str r2, [r1, #0x0]
    ldr r0, =data_02147ae8
    add r4, sp, #0x30
    str r4, [r0, #0x0]
    ldr r1, =data_02147ae0
    add r3, sp, #0x5c
    ldr r0, =data_02147adc
    add r2, sp, #0x40
    str r3, [r1, #0x0]
    str r2, [r0, #0x0]
    bl func_02028de0
    cmp r0, #0x0
    beq L_02000ca4
    ldr r0, =data_020b42dc
    bl func_0202f5f0
    b L_02000d08
L_02000ca4:
    bl func_02028f4c
    ldr r1, =data_02146128
    bl func_0204a9c8
    mov r0, #0x2
    mov r1, #0x0
    mov r2, #0x10
    bl func_0207036c
    ldr r3, =0x1ffd738
    ldr r1, =data_ov000_0215604c
    ldr ip, =data_020afcbc
    ldr r5, =data_02119fbc
    ldr r0, =data_02119f54
    str r1, [r3, #0x0]
    add r4, sp, #0x50
    ldmia r0, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    mov r0, r4
    add r2, r3, #0xc
    mov r4, #0x1
    swpb r1, r4, [r2]
    str ip, [r3, #0x4]
    str r5, [r3, #0x8]
    add r3, r3, #0xd
    swpb r1, r4, [r3]
    bl func_0202f5f0
L_02000d08:
    ldr r0, =data_0213d588
    bl func_02026d80
    cmp r0, #0x0
    beq L_02000d38
    ldr r4, =data_0213d588
    add r5, sp, #0x0
L_02000d20:
    mov r0, r5
    bl func_01ffd748
    mov r0, r4
    bl func_02026d80
    cmp r0, #0x0
    bne L_02000d20
L_02000d38:
    add r0, sp, #0x40
    bl func_02086aec
    add r0, sp, #0x5c
    bl func_02086984
    add r0, sp, #0x30
    bl func_020833fc
    add r0, sp, #0x18
    bl func_0202f728
    add r0, sp, #0x0
    bl func_0202f518
    bl func_0207dee8
    ldr r0, =data_0214876c
    bl func_0207c4f8
    bl func_0205cb34
    bl func_0207c8e4
    add sp, sp, #0xb4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
