#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f5f0();
extern void func_02065678();
extern char data_021029f8[];
extern char data_02102c08[];
extern char data_02143c2c[];
extern char data_ov000_02156014[];
// clang-format off
asm void func_0203c044(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0xc
    ldr r0, [r0, #0xbc]
    ldrb r0, [r0, #0x97]
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {lr}
    bxeq lr
    ldr r0, =data_02143c2c
    ldr r1, =data_02102c08
    mov r2, #0x14
    bl func_02065678
    ldr r0, =data_021029f8
    ldr r3, =data_02143c2c
    ldr lr, =data_ov000_02156014
    add ip, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    add r2, r3, #0x13
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r0, ip
    str lr, [r3, #0x14]
    bl func_0202f5f0
    add sp, sp, #0xc
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
