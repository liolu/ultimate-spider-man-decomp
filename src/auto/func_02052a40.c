#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f5f0();
extern void func_02046fa4();
extern void func_02065678();
extern char data_020af33c[];
extern char data_02116a38[];
extern char data_02116a5c[];
extern char data_02116ac0[];
extern char data_02116acc[];
extern char data_02143e44[];
extern char data_0214605c[];
extern char data_02146074[];
extern char data_ov000_0215601c[];
extern char data_ov000_0215602c[];
// clang-format off
asm void func_02052a40(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x1c
    ldr r0, =data_020af33c
    bl func_0202f5f0
    ldr r0, =data_02143e44
    bl func_02046fa4
    cmp r0, #0x0
    beq L_02052aac
    ldr r0, =data_02146074
    ldr r1, =data_02116ac0
    mov r2, #0x14
    bl func_02065678
    ldr r0, =data_02116a5c
    ldr r3, =data_02146074
    ldr lr, =data_ov000_0215602c
    add ip, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    add r2, r3, #0x13
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r0, ip
    str lr, [r3, #0x14]
    bl func_0202f5f0
    add sp, sp, #0x1c
    ldmfd sp!, {lr}
    bx lr
L_02052aac:
    ldr r0, =data_0214605c
    ldr r1, =data_02116acc
    mov r2, #0x14
    bl func_02065678
    ldr r0, =data_02116a38
    ldr r3, =data_0214605c
    ldr lr, =data_ov000_0215601c
    add ip, sp, #0xc
    ldmia r0, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    add r2, r3, #0x13
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r0, ip
    str lr, [r3, #0x14]
    bl func_0202f5f0
    add sp, sp, #0x1c
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
