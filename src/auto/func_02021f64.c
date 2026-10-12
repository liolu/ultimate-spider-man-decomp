#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200ec8c();
extern void func_02026b3c();
extern void func_02028dfc();
extern void func_02028f2c();
extern void func_0202f5f0();
extern void func_02046e94();
extern void func_02046ed0();
extern void func_02046f10();
extern void func_0204a874();
extern void func_0205c950();
extern void func_02065678();
extern void func_0207036c();
extern char data_020afa94[];
extern char data_020afac4[];
extern char data_020b1468[];
extern char data_020b42c4[];
extern char data_020f8ac4[];
extern char data_020f8ad0[];
extern char data_020f8adc[];
extern char data_020f8ae8[];
extern char data_020f8af4[];
extern char data_020f8b00[];
extern char data_020f8b0c[];
extern char data_020f8b18[];
extern char data_020f8b24[];
extern char data_020f8b30[];
extern char data_020f8b64[];
extern char data_020f8b70[];
extern char data_0213d350[];
extern char data_0213d354[];
extern char data_0213d364[];
extern char data_0213d374[];
extern char data_0213d384[];
extern char data_0213d394[];
extern char data_0213d3a4[];
extern char data_0213d3b4[];
extern char data_0213d3c4[];
extern char data_0213d3dc[];
extern char data_0213d440[];
extern char data_02143e44[];
extern char data_02146128[];
extern char data_ov000_0215605c[];
// clang-format off
asm void func_02021f64(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x78
    mov r0, #0x2
    mov r1, #0x0
    mov r2, #0x1
    bl func_0207036c
    ldr r0, =data_020b42c4
    bl func_0202f5f0
    ldr r0, =data_02143e44
    bl func_02046e94
    ldr r6, [r0, #0x70]
    ldr r0, =data_02143e44
    bl func_02046e94
    ldr r5, [r0, #0x74]
    ldr r0, =data_02143e44
    bl func_02046ed0
    cmp r0, #0x0
    beq L_020220e0
    ldr r0, =data_0213d440
    bl func_02026b3c
    ldr r0, =data_02143e44
    bl func_02046e94
    ldr r4, [r0, #0x68]
    ldr r0, =data_02143e44
    bl func_02046e94
    cmp r6, #0x0
    ldr r3, [r0, #0x6c]
    beq L_0202206c
    mov r0, r5
    mov r1, #0x0
    bl func_0200ec8c
    cmp r0, #0x0
    beq L_02022028
    ldr r4, =data_0213d384
    ldr r1, =data_020f8ac4
    str r0, [r4, #0x4]
    add r3, sp, #0x0
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    add r2, r4, #0xc
    mov ip, #0x1
    swpb r1, ip, [r2]
    add r3, r4, #0xd
    swpb r1, ip, [r3]
    str r6, [r4, #0x0]
    str r5, [r4, #0x8]
    bl func_0202f5f0
    b L_020222b4
L_02022028:
    ldr r4, =data_0213d3a4
    ldr r0, =data_020f8ae8
    add r3, sp, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    ldr lr, =data_020b1468
    add r2, r4, #0xc
    mov ip, #0x1
    swpb r1, ip, [r2]
    add r3, r4, #0xd
    swpb r1, ip, [r3]
    str r6, [r4, #0x0]
    str lr, [r4, #0x4]
    str r5, [r4, #0x8]
    bl func_0202f5f0
    b L_020222b4
L_0202206c:
    cmp r4, #0x0
    beq L_020220b8
    ldr r6, =data_0213d3b4
    ldr r0, =data_020f8adc
    add r5, sp, #0x18
    ldmia r0, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    mov r0, r5
    ldr lr, =data_020b1468
    add r2, r6, #0xc
    mov ip, #0x1
    swpb r1, ip, [r2]
    add r5, r6, #0xd
    swpb r1, ip, [r5]
    str r4, [r6, #0x0]
    str lr, [r6, #0x4]
    str r3, [r6, #0x8]
    bl func_0202f5f0
    b L_020222b4
L_020220b8:
    ldr r0, =data_020f8b30
    add r3, sp, #0x24
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, =data_0213d350
    mov r2, #0x0
    mov r0, r3
    str r2, [r1, #0x0]
    bl func_0202f5f0
    b L_020222b4
L_020220e0:
    ldr r0, =data_02143e44
    bl func_02046f10
    cmp r0, #0x0
    beq L_020221d4
    cmp r6, #0x0
    beq L_02022190
    mov r0, r5
    mov r1, #0x1
    bl func_0200ec8c
    cmp r0, #0x0
    beq L_0202214c
    ldr r4, =data_0213d364
    ldr r1, =data_020f8ad0
    str r0, [r4, #0x4]
    add r3, sp, #0x30
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    add r2, r4, #0xc
    mov ip, #0x1
    swpb r1, ip, [r2]
    add r3, r4, #0xd
    swpb r1, ip, [r3]
    str r6, [r4, #0x0]
    str r5, [r4, #0x8]
    bl func_0202f5f0
    b L_020222b4
L_0202214c:
    ldr r4, =data_0213d374
    ldr r0, =data_020f8b00
    add r3, sp, #0x3c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    ldr lr, =data_020afa94
    add r2, r4, #0xc
    mov ip, #0x1
    swpb r1, ip, [r2]
    add r3, r4, #0xd
    swpb r1, ip, [r3]
    str r6, [r4, #0x0]
    str lr, [r4, #0x4]
    str r5, [r4, #0x8]
    bl func_0202f5f0
    b L_020222b4
L_02022190:
    ldr r0, =data_0213d3dc
    ldr r1, =data_020f8b64
    mov r2, #0x14
    bl func_02065678
    ldr r0, =data_020f8b18
    ldr r3, =data_0213d3dc
    ldr r5, =data_ov000_0215605c
    add r4, sp, #0x48
    ldmia r0, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    add r2, r3, #0x13
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r0, r4
    str r5, [r3, #0x14]
    bl func_0202f5f0
    b L_020222b4
L_020221d4:
    cmp r6, #0x0
    beq L_02022274
    mov r0, r5
    mov r1, #0x0
    bl func_0200ec8c
    cmp r0, #0x0
    beq L_02022230
    ldr r4, =data_0213d354
    ldr r1, =data_020f8b24
    str r0, [r4, #0x4]
    add r3, sp, #0x54
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    add r2, r4, #0xc
    mov ip, #0x1
    swpb r1, ip, [r2]
    add r3, r4, #0xd
    swpb r1, ip, [r3]
    str r6, [r4, #0x0]
    str r5, [r4, #0x8]
    bl func_0202f5f0
    b L_020222b4
L_02022230:
    ldr r4, =data_0213d394
    ldr r0, =data_020f8b0c
    add r3, sp, #0x60
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    ldr lr, =data_020afac4
    add r2, r4, #0xc
    mov ip, #0x1
    swpb r1, ip, [r2]
    add r3, r4, #0xd
    swpb r1, ip, [r3]
    str r6, [r4, #0x0]
    str lr, [r4, #0x4]
    str r5, [r4, #0x8]
    bl func_0202f5f0
    b L_020222b4
L_02022274:
    ldr r0, =data_0213d3c4
    ldr r1, =data_020f8b70
    mov r2, #0x14
    bl func_02065678
    ldr r0, =data_020f8af4
    ldr r3, =data_0213d3c4
    ldr r5, =data_ov000_0215605c
    add r4, sp, #0x6c
    ldmia r0, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    add r2, r3, #0x13
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r0, r4
    str r5, [r3, #0x14]
    bl func_0202f5f0
L_020222b4:
    ldr r0, =data_02146128
    bl func_0205c950
    bl func_02028f2c
    ldr r1, =data_02143e44
    bl func_0204a874
    bl func_02028dfc
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
