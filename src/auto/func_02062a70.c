#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02062a14();
extern void func_02062e48();
extern void func_02064fc8();
// clang-format off
asm void func_02062a70(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x8
    mov r4, r0
    mov r0, #0x178
    mov r6, r1
    mov r5, r2
    bl func_02064fc8
    movs r1, r0
    beq L_02062ab8
    ldrb r3, [r4, #0x15f]
    mov r2, #0x0
    mov r1, r6
    str r3, [sp, #0x0]
    str r2, [sp, #0x4]
    ldrb r3, [r4, #0x15e]
    add r2, r4, #0x4c
    bl func_02062e48
    mov r1, r0
L_02062ab8:
    ldr ip, [r1, #0xbc]
    mov r3, #0x0
    add r2, ip, #0x96
    swpb r0, r5, [r2]
    add r2, ip, #0x97
    swpb r0, r3, [r2]
    add r2, r1, #0x174
    swpb r0, r3, [r2]
    add ip, r1, #0x1e
    ldrb r3, [ip, #0x0]
    mov r0, r4
    mov r2, #0x1
    bic r3, r3, #0x2
    swpb r3, r3, [ip]
    bl func_02062a14
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
