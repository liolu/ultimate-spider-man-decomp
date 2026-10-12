#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02091668();
extern void func_02093b3c();
extern void func_02093bf4();
extern char data_02146138[];
extern char data_0214613c[];
extern char data_02146140[];
extern char data_02146144[];
extern char func_0205cc00[];
// clang-format off
asm void func_0205cb68(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r2, =data_02146144
    mov ip, #0x0
    add r1, r2, #0xc
    swpb r0, ip, [r1]
    str ip, [r2, #0x0]
    str ip, [r2, #0x4]
    str ip, [r2, #0x8]
    mov r3, ip
L_0205cb90:
    add r0, r2, ip, lsl #0x2
    add ip, ip, #0x1
    str r3, [r0, #0x10]
    cmp ip, #0x8
    blt L_0205cb90
    ldr r1, =func_0205cc00
    mov r0, #0x1
    str r3, [r2, #0x30]
    bl func_02093bf4
    mov r0, #0x1
    bl func_02093b3c
    mov r0, #0x1
    bl func_02091668
    ldr r3, =data_0214613c
    mov ip, #0x0
    ldr r2, =data_02146140
    ldr r1, =data_02146138
    swpb r0, ip, [r3]
    swpb r0, ip, [r2]
    swpb r0, ip, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
