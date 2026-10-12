#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020f8fe8[];
// clang-format off
asm void func_02026f20(void) {
    ldr r1, =data_020f8fe8
    add r2, r0, #0x34
    str r1, [r0, #0x0]
    mov ip, #0x0
    swpb r1, ip, [r2]
    add r2, r0, #0x35
    swpb r1, ip, [r2]
    mov r1, #0x2
    str r1, [r0, #0x140]
    str ip, [r0, #0x4]
    ldr r1, [r0, #0x140]
    cmp r1, #0x0
    ble L_02026f74
    mov r3, r0
    mov r2, ip
L_02026f5c:
    str r2, [r3, #0x40]
    ldr r1, [r0, #0x140]
    add ip, ip, #0x1
    cmp ip, r1
    add r3, r3, #0xc
    blt L_02026f5c
L_02026f74:
    mov ip, #0x0
    str ip, [r0, #0x8]
    ldr r1, [r0, #0x140]
    cmp r1, #0x0
    ble L_02026fa8
    mov r3, r0
    mov r2, ip
L_02026f90:
    str r2, [r3, #0x44]
    ldr r1, [r0, #0x140]
    add ip, ip, #0x1
    cmp ip, r1
    add r3, r3, #0xc
    blt L_02026f90
L_02026fa8:
    mov ip, #0x0
    str ip, [r0, #0xc]
    ldr r1, [r0, #0x140]
    cmp r1, #0x0
    bxle lr
    mov r3, r0
    mov r2, ip
L_02026fc4:
    str r2, [r3, #0x48]
    ldr r1, [r0, #0x140]
    add ip, ip, #0x1
    cmp ip, r1
    add r3, r3, #0xc
    blt L_02026fc4
    bx lr
}
// clang-format on
