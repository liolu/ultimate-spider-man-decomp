#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_02062fc0();
extern void r1();
extern char data_020b468c[];
extern char data_020f8ff4[];
// clang-format off
asm void func_02027074(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    ldrb r4, [sp, #0x24]
    ldrb r3, [sp, #0x20]
    add r2, sp, #0x18
    str r4, [sp, #0x0]
    mov ip, #0x0
    mov r4, r0
    str ip, [sp, #0x4]
    bl func_02062fc0
    ldr r0, =data_020f8ff4
    mov r2, #0x1
    str r0, [r4, #0x0]
    ldr r0, [r4, #0xbc]
    add r3, r4, #0x1e
    add r1, r0, #0xda
    swpb r0, r2, [r1]
    ldrb r2, [r3, #0x0]
    ldr r1, =data_020b468c
    mov r0, r4
    bic r2, r2, #0x2
    swpb r2, r2, [r3]
    bl func_01ff9acc
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x88]
    blx r1
    mov r0, r4
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
