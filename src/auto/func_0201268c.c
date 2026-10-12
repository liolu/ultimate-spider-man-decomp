#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02012130();
extern void func_0202f64c();
extern char data_020efa10[];
extern char data_020f78f8[];
// clang-format off
asm void func_0201268c(void) {
    stmfd sp!, {r4, lr}
    ldr r2, =data_020efa10
    mov r4, r0
    str r2, [r4, #0x0]
    ldr r0, =data_020f78f8
    add r2, r4, #0xc
    str r0, [r4, #0x0]
    mov r0, #0x0
    str r0, [r4, #0x4]
    str r0, [r4, #0x8]
    swpb r0, r1, [r2]
    mov r0, #0x80
    str r0, [r4, #0x10]
    add r0, r4, #0x1c
    bl func_02012130
    ldrb r0, [r4, #0xc]
    cmp r0, #0x0
    movne r1, #0x6200000
    strne r1, [r4, #0x4]
    ldrne r0, =0x620c000
    moveq r1, #0x6000000
    strne r0, [r4, #0x8]
    ldreq r0, =0x600c000
    streq r1, [r4, #0x4]
    streq r0, [r4, #0x8]
    mov r0, r4
    bl func_0202f64c
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
