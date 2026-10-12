#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201ff80();
extern void func_02066778();
extern void func_0207b7f0();
extern void r1();
extern char data_0213d440[];
// clang-format off
asm void func_02052788(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    mov r4, r0
    ldr r0, [r4, #0x74]
    cmp r0, #0x0
    beq L_020527d8
    bl func_0207b7f0
    cmp r0, #0x0
    beq L_020527d8
    ldr r0, [r4, #0x74]
    cmp r0, #0x0
    beq L_020527c4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x4]
    blx r1
L_020527c4:
    ldr r0, =data_0213d440
    mov r2, #0x0
    str r2, [r4, #0x74]
    add r1, r0, #0x28
    swpb r0, r2, [r1]
L_020527d8:
    bl func_02066778
    mov r0, #0x0
    mov r1, r0
    mov r2, r0
    mov r3, r0
    str r0, [sp, #0x0]
    bl func_0201ff80
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
