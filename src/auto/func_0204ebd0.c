#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void r2();
// clang-format off
asm void func_0204ebd0(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x18
    add r3, sp, #0x8
    mov r5, r1
    mov r6, r0
    ldmia r5, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r1, sp, #0x0
    add r0, r6, #0x10
    str r1, [sp, #0x10]
    str r0, [sp, #0x0]
    ldr r0, [r5, #0x8]
    ldr r1, =0xdeadbeef
    str r0, [sp, #0x4]
    str r1, [r6, #0x10]
    mov r0, r6
    ldr r2, [r0, #0x0]
    mov r1, r3
    ldr r2, [r2, #0x20]
    mov r4, #0x0
    blx r2
    ldr r2, [r6, #0x10]
    ldr r0, =0xdeadbeef
    cmp r2, r0
    beq L_0204ecbc
    ldr r0, [r5, #0xc]
    cmp r0, #0x5
    addls pc, pc, r0, lsl #0x2
    b L_0204ecbc
L_0204ec44:
    b L_0204ec5c
    b L_0204ec6c
    b L_0204ec7c
    b L_0204ec8c
    b L_0204ecb0
    b L_0204ec9c
L_0204ec5c:
    ldr r0, [r5, #0x10]
    cmp r2, r0
    movgt r4, #0x1
    b L_0204ecbc
L_0204ec6c:
    ldr r0, [r5, #0x10]
    cmp r2, r0
    movlt r4, #0x1
    b L_0204ecbc
L_0204ec7c:
    ldr r0, [r5, #0x10]
    cmp r2, r0
    moveq r4, #0x1
    b L_0204ecbc
L_0204ec8c:
    ldr r0, [r5, #0x10]
    cmp r2, r0
    movne r4, #0x1
    b L_0204ecbc
L_0204ec9c:
    ldr r1, [r5, #0x10]
    and r0, r1, r2
    cmp r1, r0
    moveq r4, #0x1
    b L_0204ecbc
L_0204ecb0:
    ldr r0, [r5, #0x10]
    ands r0, r2, r0
    movne r4, #0x1
L_0204ecbc:
    ldr r1, [r6, #0x14]
    mov r0, r4
    add r2, r1, #0x8
    swpb r1, r4, [r2]
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
