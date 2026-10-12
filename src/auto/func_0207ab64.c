#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02082e38();
// clang-format off
asm void func_0207ab64(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc
    movs r9, r0
    mov r8, r2
    ldr r7, [sp, #0x34]
    ldr r6, [sp, #0x3c]
    beq L_0207add8
    ldr r2, [sp, #0x38]
    mov r4, #0x1
    cmp r1, #0x0
    swpb r0, r4, [r2]
    bne L_0207abbc
    cmp r3, #0x7
    beq L_0207abbc
    cmp r3, #0x8
    beq L_0207abbc
    cmp r3, #0x18
    bne L_0207abb8
    ldr r0, [sp, #0x28]
    cmp r0, #0x7
    bne L_0207abbc
L_0207abb8:
    mov r4, #0x0
L_0207abbc:
    cmp r3, #0x18
    bne L_0207abe0
    ldr r0, [sp, #0x28]
    cmp r0, #0x9
    beq L_0207abdc
    cmp r0, #0xa
    movne r8, #0x1
    bne L_0207abe0
L_0207abdc:
    mov r8, #0x0
L_0207abe0:
    cmp r8, #0x0
    ldrne r5, [r7, #0x4c]
    ldreq r5, [r7, #0x50]
    cmp r4, #0x0
    beq L_0207adcc
    cmp r8, #0x0
    beq L_0207ace0
    ldr r3, [sp, #0x30]
    mvn r0, #0x0
    cmp r3, r0
    beq L_0207ace0
    ldr r2, [r7, #0x60]
    ldr r0, [r7, #0x64]
    sub r1, r0, r2
    cmp r1, #0x0
    ble L_0207acb0
    sub r2, r3, r2
    str r2, [sp, #0x0]
    cmp r2, #0x80000
    bhs L_0207ac3c
    mov r0, r2, lsl #0xc
    bl func_02082e38
    b L_0207ac88
L_0207ac3c:
    ldr r0, =0x4000280
    mov r3, r2, asr #0x1f
    mov ip, #0x1
    mov lr, r3, lsl #0xc
    ldr r3, =0x4000290
    strh ip, [r0, #0x0]
    mov ip, r2, lsl #0xc
    str ip, [r3, #0x0]
    orr lr, lr, r2, lsr #0x14
    ldr r2, =0x4000298
    str lr, [r3, #0x4]
    str r1, [r2, #0x0]
    mov r1, #0x0
    str r1, [r2, #0x4]
L_0207ac74:
    ldrh r1, [r0, #0x0]
    ands r1, r1, #0x8000
    bne L_0207ac74
    ldr r0, =0x40002a0
    ldr r0, [r0, #0x0]
L_0207ac88:
    cmp r0, #0x1000
    movlt r1, r0
    movge r1, #0x1000
    cmp r1, #0x0
    ble L_0207aca8
    cmp r0, #0x1000
    movge r0, #0x1000
    b L_0207acbc
L_0207aca8:
    mov r0, #0x0
    b L_0207acbc
L_0207acb0:
    cmp r3, r2
    movlt r0, #0x0
    movge r0, #0x1000
L_0207acbc:
    ldr r1, [r7, #0x68]
    rsb r0, r0, #0x1000
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r1, r3, r0
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r5, r5, r1
L_0207ace0:
    cmp r8, #0x0
    bne L_0207adcc
    ldr r3, [sp, #0x2c]
    mvn r0, #0x0
    cmp r3, r0
    beq L_0207adcc
    ldr r2, [r7, #0x60]
    ldr r0, [r7, #0x64]
    sub r1, r0, r2
    cmp r1, #0x0
    ble L_0207ad9c
    sub ip, r3, r2
    str ip, [sp, #0x4]
    cmp ip, #0x80000
    bhs L_0207ad28
    mov r0, ip, lsl #0xc
    bl func_02082e38
    b L_0207ad74
L_0207ad28:
    ldr r3, =0x4000280
    mov r2, ip, asr #0x1f
    mov r0, #0x1
    mov r8, r2, lsl #0xc
    ldr r2, =0x4000290
    strh r0, [r3, #0x0]
    mov r0, ip, lsl #0xc
    str r0, [r2, #0x0]
    orr r8, r8, ip, lsr #0x14
    ldr r0, =0x4000298
    str r8, [r2, #0x4]
    str r1, [r0, #0x0]
    mov r1, #0x0
    str r1, [r0, #0x4]
L_0207ad60:
    ldrh r0, [r3, #0x0]
    ands r0, r0, #0x8000
    bne L_0207ad60
    ldr r0, =0x40002a0
    ldr r0, [r0, #0x0]
L_0207ad74:
    cmp r0, #0x1000
    movlt r1, r0
    movge r1, #0x1000
    cmp r1, #0x0
    ble L_0207ad94
    cmp r0, #0x1000
    movge r0, #0x1000
    b L_0207ada8
L_0207ad94:
    mov r0, #0x0
    b L_0207ada8
L_0207ad9c:
    cmp r3, r2
    movlt r0, #0x0
    movge r0, #0x1000
L_0207ada8:
    ldr r1, [r7, #0x68]
    rsb r0, r0, #0x1000
    smull r3, r2, r1, r0
    mov r0, #0x800
    adds r1, r3, r0
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    sub r5, r5, r1
L_0207adcc:
    cmp r4, #0x0
    ldreq r5, [r7, #0x54]
    str r5, [r6, #0x0]
L_0207add8:
    cmp r9, #0x0
    ldrne r0, [r6, #0x0]
    rsbne r0, r0, #0x0
    moveq r0, #0x0
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
