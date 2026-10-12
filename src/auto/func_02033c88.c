#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02033a8c();
extern void r1();
extern char data_0213b6e0[];
// clang-format off
asm void func_02033c88(void) {
    stmfd sp!, {r4, lr}
    ldr r1, [r0, #0x0]
    mov r4, r0
    ldr r1, [r1, #0x28]
    blx r1
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldr r0, =data_0213b6e0
    ldr r3, [r4, #0x4]
    ldr r0, [r0, #0x0]
    ldr r1, [r3, #0xbc]
    and r0, r0, #0x3
    ldr r1, [r1, #0xcc]
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02033d4c
L_02033ccc:
    b L_02033cdc
    b L_02033d08
    b L_02033d3c
    b L_02033d20
L_02033cdc:
    ldr r0, =0x15d
    mov r2, #0x0
    add r3, r3, r0
    swpb r0, r2, [r3]
    ldr r0, [r4, #0x8]
    bl func_02033a8c
    add r1, r4, #0xd
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_02033d08:
    ldr r0, [r4, #0x8]
    mov r2, #0x1
    bl func_02033a8c
    add r1, r4, #0xd
    mov r0, #0x1
    swpb r0, r0, [r1]
L_02033d20:
    ldr r1, [r4, #0x4]
    ldr r0, =0x15d
    mov r2, #0x0
    add r1, r1, r0
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_02033d3c:
    ldr r0, =0x15d
    mov r2, #0x1
    add r1, r3, r0
    swpb r0, r2, [r1]
L_02033d4c:
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
