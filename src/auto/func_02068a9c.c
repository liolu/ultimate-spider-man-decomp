#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02054edc();
extern void func_020688d4();
extern void func_02068e10();
extern void r1();
extern void r2();
// clang-format off
asm void func_02068a9c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    mov r4, r0
    bl func_02068e10
    ldrb r0, [r4, #0x26]
    cmp r0, #0x0
    beq L_02068b5c
    add r1, r4, #0x25
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r1, r4, #0x26
    mov r0, #0x0
    swpb r0, r0, [r1]
    mvn r0, #0x0
    ldr r1, [r4, #0x18]
    cmp r1, r0
    beq L_02068b20
    ldr r1, [r4, #0xc]
    cmp r1, r0
    beq L_02068b20
    ldr r2, [r4, #0x18]
    ldr r0, [r4, #0xc]
    add r1, sp, #0x8
    sub r0, r2, r0
    str r0, [sp, #0x8]
    ldr r3, [r4, #0x1c]
    ldr r2, [r4, #0x10]
    mov r0, r4
    sub r2, r3, r2
    str r2, [sp, #0xc]
    ldmia r1, {r1, r2}
    bl func_020688d4
    str r0, [r4, #0x40]
L_02068b20:
    add r5, sp, #0x0
    mov r6, #0x0
    str r6, [r5, #0x0]
    str r6, [r5, #0x4]
L_02068b30:
    add r0, r4, r6, lsl #0x2
    ldr r0, [r0, #0x48]
    mov r1, r5
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x20]
    blx r2
    add r6, r6, #0x1
    cmp r6, #0x5
    blt L_02068b30
    mvn r0, #0x0
    str r0, [r4, #0x3c]
L_02068b5c:
    ldrb r0, [r4, #0x24]
    cmp r0, #0x0
    beq L_02068bc4
    ldr r0, [r4, #0x3c]
    cmp r0, #0x0
    blt L_02068ba4
    add r0, r4, r0, lsl #0x2
    ldr r0, [r0, #0x48]
    add r1, r4, #0x4
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x20]
    blx r2
    ldr r0, [r4, #0x3c]
    mov r1, #0x0
    add r0, r4, r0, lsl #0x2
    ldr r0, [r0, #0x48]
    ldr r0, [r0, #0x20]
    bl func_02054edc
L_02068ba4:
    add r1, r4, #0x3c
    ldr r0, [r1, #0x0]
    add r0, r0, #0x1
    str r0, [r1, #0x0]
    ldr r0, [r4, #0x3c]
    cmp r0, #0x5
    moveq r0, #0x0
    streq r0, [r4, #0x3c]
L_02068bc4:
    mov r5, #0x0
L_02068bc8:
    add r0, r4, r5, lsl #0x2
    ldr r0, [r0, #0x48]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    add r5, r5, #0x1
    cmp r5, #0x5
    blt L_02068bc8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
