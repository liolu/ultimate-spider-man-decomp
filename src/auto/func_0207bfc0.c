#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207bb54();
extern void func_02082e38();
extern void func_020864e0();
extern void func_020865a0();
extern void func_0208fa74();
extern void func_0208fb84();
extern void func_0208fbd0();
extern void func_0208ff2c();
extern void r7();
// clang-format off
asm void func_0207bfc0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x74
    mov r10, r0
    add r0, sp, #0x2c
    mov r9, r1
    mov r8, r2
    mov r7, r3
    bl func_0208ff2c
    ldr r1, [r9, #0x4]
    add r0, sp, #0x2c
    bl func_0208fbd0
    cmp r0, #0x0
    movne r0, #0x1
    moveq r0, #0x0
    cmp r0, #0x0
    addeq sp, sp, #0x74
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r4, [sp, #0x50]
    ldr r3, [sp, #0x4c]
    add r0, sp, #0x2c
    add r1, sp, #0x8
    mov r2, #0x24
    sub r5, r4, r3
    bl func_0208fa74
    add r0, sp, #0x2c
    bl func_0208fb84
    ldrb r2, [sp, #0x20]
    ldrh r1, [sp, #0x22]
    ldr r0, [sp, #0x28]
    cmp r2, #0x0
    beq L_0207c058
    cmp r2, #0x1
    beq L_0207c060
    cmp r2, #0x2
    beq L_0207c068
    b L_0207c070
L_0207c058:
    mov r2, r0, lsl #0x2
    b L_0207c074
L_0207c060:
    mov r2, r0, lsl #0x1
    b L_0207c074
L_0207c068:
    mov r2, r0, lsl #0x3
    b L_0207c074
L_0207c070:
    mov r2, #0x0
L_0207c074:
    mov r3, r5, lsr #0x1f
    rsb r0, r3, r5, lsl #0x17
    adds r0, r3, r0, ror #0x17
    rsbne r0, r0, #0x200
    addne r5, r5, r0
    cmp r8, #0x0
    movne r6, r8
    addeq r6, r9, #0x10
    ldrb r0, [r6, #0x8]
    cmp r0, #0x0
    mvnne r11, #0x0
    bne L_0207c0b4
    mov r0, #0x3c
    mul r0, r2, r0
    bl func_02082e38
    mov r11, r0
L_0207c0b4:
    add r3, sp, #0x4
    mov r0, r10
    mov r1, r5
    mov r2, r11
    bl func_0207bb54
    mov r4, r0
    mvn r0, #0x0
    cmp r4, r0
    bne L_0207c100
    cmp r7, #0x0
    beq L_0207c0f0
    ldr r3, [sp, #0x98]
    mov r1, r9
    mov r2, r8
    blx r7
L_0207c0f0:
    add sp, sp, #0x74
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0207c100:
    ldr r0, =0x826c
    add r2, r10, #0x8000
    add r3, r10, r0
    ldr r0, [r3, #0x0]
    ldr r1, [r2, #0x26c]
    add r0, r0, #0x1
    str r0, [r3, #0x0]
    ldr r0, [r2, #0x26c]
    cmp r0, #0x6
    movge r0, #0x0
    strge r0, [r2, #0x26c]
    add r2, r10, #0x8000
    ldr r3, [r2, #0x268]
    ldr r0, [r2, #0x26c]
    cmp r3, r0
    bne L_0207c1a8
    ldr r3, [sp, #0x4]
    mov r0, r4
    add r3, r4, r3
    cmp r4, r3
    bge L_0207c190
    mov r3, #0xc
    mul r7, r4, r3
    mov r6, #0x0
    mvn r5, #0x0
L_0207c164:
    ldr r3, [r2, #0x274]
    add r0, r0, #0x1
    str r6, [r3, r7]
    ldr r3, [r2, #0x274]
    add r3, r3, r7
    str r5, [r3, #0x4]
    ldr r3, [sp, #0x4]
    add r7, r7, #0xc
    add r3, r4, r3
    cmp r0, r3
    blt L_0207c164
L_0207c190:
    add r0, r10, #0x8000
    str r1, [r0, #0x26c]
    add sp, sp, #0x74
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0207c1a8:
    mov r0, #0x78
    mul r8, r1, r0
    ldr r0, [r2, #0x264]
    ldr r1, [sp, #0x98]
    add r0, r0, r8
    str r9, [r0, #0x58]
    ldr r0, [r2, #0x264]
    add r0, r0, r8
    str r4, [r0, #0x70]
    ldr r0, [r2, #0x264]
    ldr r3, [sp, #0x4]
    add r0, r0, r8
    str r3, [r0, #0x74]
    ldr r0, [r2, #0x264]
    add r0, r0, r8
    str r7, [r0, #0x68]
    ldr r0, [r2, #0x264]
    add r0, r0, r8
    str r1, [r0, #0x6c]
    ldr r1, [r2, #0x264]
    ldrb r0, [r6, #0x0]
    add r1, r1, r8
    add r3, r1, #0x5c
    swpb r0, r0, [r3]
    add ip, r3, #0x1
    ldrb r7, [r6, #0x1]
    add r0, r3, #0x8
    add r1, r3, #0x9
    swpb r7, r7, [ip]
    ldr r7, [r6, #0x4]
    str r7, [r3, #0x4]
    ldrb r3, [r6, #0x8]
    swpb r3, r3, [r0]
    ldrb r0, [r6, #0x9]
    swpb r0, r0, [r1]
    ldr r0, [r2, #0x264]
    ldr r1, [r9, #0x4]
    add r6, r0, r8
    mov r0, r6
    bl func_020865a0
    mov r1, #0x0
    str r1, [sp, #0x0]
    add r0, r10, #0x8000
    ldr r2, [r0, #0x274]
    mov r0, #0xc
    mla r0, r4, r0, r2
    ldr r2, [r0, #0x8]
    mov r0, r6
    mov r3, r5
    bl func_020864e0
    mov r0, r11
    add sp, sp, #0x74
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
