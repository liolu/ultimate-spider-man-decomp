#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f5f0();
extern void func_0202f630();
extern void func_02065678();
extern void func_02082650();
extern void func_02087ff0();
extern void r1();
extern char data_020efa10[];
extern char data_0211c340[];
extern char data_0211c36c[];
extern char data_0211c3ac[];
extern char data_02150b94[];
extern char data_02150bb8[];
extern char data_ov000_0215601c[];
// clang-format off
asm void func_0208119c(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    ldr r1, =data_0211c36c
    mov r4, r0
    str r1, [r4, #0x0]
    bl func_0202f630
    ldr r0, =data_02150bb8
    bl func_02082650
    ldr r0, [r4, #0xc]
    cmp r0, #0x0
    beq L_020811dc
    cmp r0, #0x0
    beq L_020811dc
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x4]
    blx r1
L_020811dc:
    ldr r0, =data_02150b94
    ldr r1, =data_0211c3ac
    mov r2, #0x14
    bl func_02065678
    ldr r0, =data_0211c340
    ldr r3, =data_02150b94
    ldr lr, =data_ov000_0215601c
    add ip, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    add r2, r3, #0x13
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r0, ip
    str lr, [r3, #0x14]
    bl func_0202f5f0
    add r0, r4, #0x10
    bl func_02087ff0
    ldr r1, =data_020efa10
    mov r0, r4
    str r1, [r4, #0x0]
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
