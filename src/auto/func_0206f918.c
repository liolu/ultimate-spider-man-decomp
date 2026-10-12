#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffa324();
extern void func_0200a47c();
extern void r1();
extern char data_02147ac8[];
extern char data_0214866c[];
// clang-format off
asm void func_0206f918(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, [r4, #0x40]
    ldr r0, =0xfffff63c
    add r1, r4, #0x3c
    add r2, r2, r0
    str r2, [r4, #0x94]
    ldr r3, [r4, #0x3c]
    ldr r2, =0x9c4
    add r0, r3, r0
    str r0, [r4, #0x98]
    ldr r3, [r1, #0x0]
    ldr r0, [r1, #0x8]
    add r0, r3, r0
    add r0, r0, r2
    str r0, [r4, #0x9c]
    ldr r3, [r1, #0x4]
    ldr r0, [r1, #0xc]
    add r0, r3, r0
    add r0, r0, r2
    str r0, [r4, #0xa0]
    ldr r2, [r4, #0xc0]
    cmp r2, #0x0
    bne L_0206f99c
    ldr r0, [r4, #0xc4]
    cmp r0, #0x0
    bne L_0206f99c
    ldr r0, =data_02147ac8
    ldr r0, [r0, #0x0]
    bl func_0200a47c
    add r1, r4, #0x10
    swpb r0, r0, [r1]
    b L_0206f9c8
L_0206f99c:
    ldr r0, =data_0214866c
    ldr r1, [r0, #0x4]
    cmp r1, r2
    blt L_0206f9bc
    ldr r0, [r4, #0xc4]
    cmp r1, r0
    movle r0, #0x1
    ble L_0206f9c0
L_0206f9bc:
    mov r0, #0x0
L_0206f9c0:
    add r1, r4, #0x10
    swpb r0, r0, [r1]
L_0206f9c8:
    ldr r0, [r4, #0xbc]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    mov r0, r4
    bl func_01ffa324
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
