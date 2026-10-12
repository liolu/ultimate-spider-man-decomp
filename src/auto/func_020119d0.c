#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02011ab8();
// clang-format off
asm void func_020119d0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x104
    mov r7, r0
    ldrh r0, [r7, #0x16]
    ldr r5, [r7, #0xac]
    mov r6, r1
    cmp r0, #0x0
    mov r4, #0x0
    addls sp, sp, #0x104
    ldmlsfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxls lr
    ldr r8, =0x1fffff
    add r9, sp, #0x0
L_02011a04:
    ldrh r1, [r7, #0x14]
    mov r2, r9
    add r6, r6, #0x1
    cmp r1, #0x0
    beq L_02011a7c
L_02011a18:
    ldrsb r0, [r6, #0x0]
    add r3, r6, #0x1
    mov r6, r3
    cmp r0, #0x0
    bge L_02011a50
    cmp r0, #0x0
    add r1, r1, r0
    beq L_02011a74
L_02011a38:
    ldrsb r3, [r6], #0x1
    adds r0, r0, #0x1
    swpb r3, r3, [r2]
    add r2, r2, #0x1
    bne L_02011a38
    b L_02011a74
L_02011a50:
    cmp r0, #0x0
    sub r1, r1, r0
    add r6, r3, #0x1
    ldrb ip, [r3, #0x0]
    beq L_02011a74
L_02011a64:
    swpb r3, ip, [r2]
    add r2, r2, #0x1
    subs r0, r0, #0x1
    bne L_02011a64
L_02011a74:
    cmp r1, #0x0
    bne L_02011a18
L_02011a7c:
    ldrh r2, [r7, #0x14]
    mov r0, r9
    mov r1, r5
    and r2, r8, r2, lsr #0x1
    bl func_02011ab8
    ldr r1, [r7, #0xb0]
    ldrh r0, [r7, #0x16]
    add r4, r4, #0x1
    add r5, r5, r1
    cmp r4, r0
    blo L_02011a04
    add sp, sp, #0x104
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
