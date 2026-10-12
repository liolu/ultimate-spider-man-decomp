#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02028a24();
extern void r1();
extern char data_0213b744[];
// clang-format off
asm void func_0207f248(void) {
    stmfd sp!, {r4, r5, r6, lr}
    movs r5, r1
    mov r6, r0
    bne L_0207f274
    add r0, r6, r5, lsl #0x2
    ldr r2, [r0, #0xd0]
    ldr r0, =data_0213b744
    ldr r1, =0x11e
    bl func_02028a24
    mov r4, #0x0
    b L_0207f28c
L_0207f274:
    add r0, r6, r5, lsl #0x2
    ldr r2, [r0, #0xd0]
    ldr r0, =data_0213b744
    ldr r1, =0x11f
    bl func_02028a24
    mov r4, #0x1
L_0207f28c:
    add r1, r6, r5, lsl #0x2
    ldr r3, [r0, #0x10]
    ldr r2, [r0, #0x14]
    ldr r0, [r1, #0xbc]
    mov r2, r2, lsl #0x4
    ldrh r1, [r0, #0x38]
    mov r3, r3, lsl #0x4
    rsb r2, r2, #0x0
    sub r1, r3, r1, lsr #0x1
    str r1, [r0, #0x3c]
    str r3, [r0, #0x4c]
    ldrh r1, [r0, #0x3a]
    sub r1, r2, r1
    str r1, [r0, #0x40]
    str r2, [r0, #0x50]
    str r3, [r0, #0x54]
    str r2, [r0, #0x58]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x88]
    blx r1
    add r0, r6, r5, lsl #0x2
    ldr r1, [r0, #0xbc]
    ldr r0, =0x15e
    add r1, r1, r0
    swpb r0, r4, [r1]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
