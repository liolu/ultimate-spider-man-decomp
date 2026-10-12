#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02013b18();
extern void func_0204ab40();
extern void r2();
extern char data_021180e0[];
extern char data_02118110[];
// clang-format off
asm void func_02058eb8(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r6, r0
    mov r5, r1
    mov r4, r2
    mov r7, r3
    bl func_0204ab40
    ldr r1, =data_021180e0
    ldr r0, =data_02118110
    str r1, [r6, #0x0]
    str r7, [r6, #0x104]
    str r0, [r6, #0x108]
    ldr r1, [r4, #0x4]
    ldr r0, [r4, #0x0]
    rsb r2, r1, #0xc0
    str r0, [r6, #0x10c]
    rsb r3, r0, #0x100
    cmp r2, #0xc0
    movgt r2, #0xc0
    cmp r3, #0x100
    str r1, [r6, #0x110]
    movgt r3, #0x100
    str r3, [r6, #0x114]
    ldrb r0, [sp, #0x18]
    str r2, [r6, #0x118]
    add r1, r6, #0x11c
    swpb r0, r0, [r1]
    ldrb r1, [r6, #0x11c]
    ldr r0, [r6, #0x104]
    bl func_02013b18
    mov r0, r6
    ldr r2, [r0, #0x0]
    mov r1, r5
    ldr r2, [r2, #0x2c]
    blx r2
    mov r0, r6
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
