#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207af9c();
extern char data_02148650[];
extern char data_02148664[];
extern char data_0214868c[];
// clang-format off
asm void func_02079b6c(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    ldr r1, =data_0214868c
    mov r6, r0
    ldr r0, [r1, #0x14]
    cmp r0, #0xb
    bne L_02079ba0
    ldr r0, [r6, #0x4ec]
    ldr r1, [r1, #0x8]
    cmp r1, r0
    movle r1, r0
    ldr r0, =data_0214868c
    str r1, [r0, #0x8]
L_02079ba0:
    ldr r0, =data_0214868c
    ldr r4, [r6, #0x470]
    ldr r7, [r0, #0x4]
    ldr r5, [r6, #0x4e8]
    ldr r3, [r0, #0x8]
    ldr r2, [r6, #0x4ec]
    ldr r1, [r6, #0x4f0]
    sub r7, r7, r5
    ldr r0, [r6, #0x4f4]
    sub r2, r3, r2
    ldr r5, [r4, #0x80]
    sub r7, r7, r1
    ldr r3, =data_02148664
    ldr r4, [r4, #0x84]
    sub ip, r2, r0
    smull r5, lr, r7, r5
    mov r2, #0x800
    adds r7, r5, r2
    smull r5, r4, ip, r4
    adc ip, lr, #0x0
    adds r2, r5, r2
    mov r5, r7, lsr #0xc
    orr r5, r5, ip, lsl #0x14
    adc r4, r4, #0x0
    mov ip, r2, lsr #0xc
    ldr r2, [r3, #0x0]
    orr ip, ip, r4, lsl #0x14
    add r5, r1, r5
    add r4, r0, ip
    ands r0, r2, #0x1
    bne L_02079c3c
    mov r0, r6
    bl func_0207af9c
    ldr r1, =data_02148664
    ldr r2, =data_02148650
    ldr r3, [r1, #0x0]
    swpb r0, r0, [r2]
    orr r0, r3, #0x1
    str r0, [r1, #0x0]
L_02079c3c:
    mov r0, r6
    bl func_0207af9c
    ldr r1, =data_02148650
    ldrb r1, [r1, #0x0]
    cmp r1, r0
    beq L_02079c68
    ldr r0, =data_0214868c
    ldr r0, [r0, #0x18]
    cmp r0, #0x3
    moveq r7, #0x1
    beq L_02079c6c
L_02079c68:
    mov r7, #0x0
L_02079c6c:
    mov r0, r6
    bl func_0207af9c
    ldr r2, =data_02148650
    ldr r1, =data_0214868c
    swpb r0, r0, [r2]
    cmp r7, #0x0
    ldr r0, [r6, #0x4e8]
    add r0, r0, r5
    str r0, [r1, #0x4]
    ldreq r0, [r6, #0x4ec]
    addeq r0, r0, r4
    streq r0, [r1, #0x8]
    ldr r0, =data_0214868c
    ldr r1, [r0, #0x4]
    str r1, [r6, #0x4e8]
    ldr r0, [r0, #0x8]
    str r0, [r6, #0x4ec]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
