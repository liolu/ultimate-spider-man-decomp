#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02028bd4();
extern void func_02059a68();
extern void func_02059a70();
extern void func_02059a78();
extern void func_02059a88();
extern void func_0206122c();
extern void func_02061e68();
extern void func_020623b0();
extern char data_0211914c[];
extern char data_02119164[];
extern char data_02146180[];
extern char data_02146188[];
extern char data_02146194[];
// clang-format off
asm void func_02061ee4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x24
    mov r4, r0
    ldr r0, [r4, #0x220]
    cmp r0, #0x3c
    bge L_02061f30
    add r1, r4, #0x220
    ldr r0, [r1, #0x0]
    add r0, r0, #0x1
    str r0, [r1, #0x0]
    ldr r0, [r4, #0x220]
    cmp r0, #0x3c
    bne L_02061f30
    ldr r0, [r4, #0x200]
    add r1, r0, #0x1e
    ldrb r0, [r1, #0x0]
    bic r0, r0, #0x1
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
L_02061f30:
    add r0, r4, #0x1d4
    bl func_02059a88
    mov r5, r0
    add r0, r4, #0x1d4
    bl func_02059a78
    ldr r1, [r0, #0x0]
    ldr r2, [r5, #0x0]
    ldr r0, [r0, #0x4]
    subs r2, r2, r1
    ldr r1, [r5, #0x4]
    rsbmi r2, r2, #0x0
    subs r0, r1, r0
    rsbmi r0, r0, #0x0
    add r0, r2, r0
    cmp r0, #0xa
    movgt r0, #0x2
    strgt r0, [r4, #0x1c8]
    movle r0, #0x1
    strle r0, [r4, #0x1c8]
    ldr r0, [r4, #0x200]
    cmp r0, #0x0
    beq L_02062038
    ldr r0, =data_02146180
    ldr r1, =data_02146188
    ldr r2, [r0, #0x0]
    add r3, r4, #0x7c
    str r2, [r4, #0x74]
    ldr r0, [r0, #0x4]
    ldr ip, =data_02146194
    str r0, [r4, #0x78]
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r3, r4, #0x88
    ldmia ip, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, =data_02119164
    add r3, sp, #0x8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r0, r4, #0x1d4
    bl func_02059a70
    str r0, [sp, #0x8]
    ldr r0, =data_0211914c
    add r3, sp, #0x14
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r0, r4, #0x1d4
    bl func_02059a68
    str r0, [sp, #0x14]
    add r0, r4, #0x1fc
    add r1, sp, #0x8
    add r2, sp, #0x14
    bl func_02028bd4
    add r0, r4, #0x1d4
    bl func_02059a78
    mov r2, r0
    add r0, sp, #0x0
    mov r1, r4
    add r3, r4, #0x214
    bl func_0206122c
    mov r0, r4
    add r1, sp, #0x0
    bl func_02061e68
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02062038:
    mov r0, r4
    bl func_020623b0
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
