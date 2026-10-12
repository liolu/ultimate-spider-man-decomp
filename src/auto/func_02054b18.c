#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02054ba4();
extern void func_02054edc();
extern char data_02146124[];
// clang-format off
asm void func_02054b18(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    mov r5, r2
    bl func_02054ba4
    str r5, [r4, #0x8]
    cmp r5, #0x0
    beq L_02054b48
    cmp r5, #0x1
    beq L_02054b58
    cmp r5, #0x2
    bne L_02054b6c
L_02054b48:
    mov r0, r4
    mov r1, #0x0
    bl func_02054edc
    b L_02054b6c
L_02054b58:
    ldr r1, [r4, #0x14]
    mov r0, r4
    ldrb r1, [r1, #0x15]
    sub r1, r1, #0x1
    bl func_02054edc
L_02054b6c:
    add r1, r4, #0x4
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r0, =data_02146124
    ldr r1, [r4, #0x14]
    ldr r2, [r0, #0x0]
    ldrb r0, [r1, #0x14]
    add r0, r0, #0x1
    add r0, r2, r0
    str r0, [r4, #0x1c]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
