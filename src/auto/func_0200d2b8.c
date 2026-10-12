#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200ceec();
extern void func_0200d1b0();
extern void func_0202f310();
extern void func_0202f5f0();
extern void func_02046fcc();
extern void func_02065678();
extern char data_020af324[];
extern char data_020af348[];
extern char data_020eff20[];
extern char data_020eff54[];
extern char data_0213b114[];
extern char data_0213b6e0[];
extern char data_0213d440[];
extern char data_0213d588[];
extern char data_02143e44[];
extern char data_02150bb8[];
extern char data_ov000_02156054[];
// clang-format off
asm void func_0200d2b8(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    ldr r1, =data_0213d588
    mov r4, r0
    ldr r0, [r1, #0xc]
    mov r0, r0, lsl #0x13
    movs r0, r0, lsr #0x1f
    beq L_0200d360
    ldr r0, =data_02143e44
    bl func_02046fcc
    cmp r0, #0x0
    beq L_0200d360
    ldr r1, =data_0213b6e0
    ldr r0, =data_0213d440
    ldr r1, [r1, #0x0]
    ldr r0, [r0, #0x144]
    cmp r1, r0
    blt L_0200d360
    ldr r0, =data_02150bb8
    ldrb r0, [r0, #0x1]
    cmp r0, #0x0
    bne L_0200d360
    ldr r0, =data_0213b114
    ldr r1, =data_020eff54
    mov r2, #0x14
    bl func_02065678
    ldr r0, =data_020eff20
    ldr r3, =data_0213b114
    ldr lr, =data_ov000_02156054
    add ip, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    add r2, r3, #0x13
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r0, ip
    str lr, [r3, #0x14]
    bl func_0202f5f0
    ldr r0, =data_020af348
    bl func_0202f5f0
    ldr r0, =data_020af324
    bl func_0202f5f0
L_0200d360:
    ldr r0, [r4, #0x18]
    ldr r1, [r4, #0x24]
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x10]
    cmp r1, r0
    ble L_0200d388
    mov r0, r4
    bl func_0200d1b0
    mov r0, #0x0
    str r0, [r4, #0x24]
L_0200d388:
    ldr r0, [r4, #0x18]
    ldr r1, [r4, #0x24]
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x10]
    cmp r1, r0
    bge L_0200d3ac
    mov r0, r4
    mov r1, #0x0
    bl func_0200ceec
L_0200d3ac:
    mov r0, r4
    bl func_0202f310
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
