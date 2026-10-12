#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200dac4();
extern void func_020271a4();
extern void func_02027324();
extern void func_02029700();
extern void func_0202a630();
extern void func_0202adc4();
extern void func_0202b344();
extern void func_0202bcd0();
extern void func_0202c6a0();
extern void func_0202c800();
extern void func_0202cf0c();
extern void func_0202cf28();
extern void func_0202d558();
extern void func_0207c284();
extern char data_020b42d0[];
extern char data_0214876c[];
// clang-format off
asm void func_0202d0c4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x8
    mov r6, r2
    ldr r3, [r6, #0x4]
    mov r4, r0
    cmp r3, #0xb
    addls pc, pc, r3, lsl #0x2
    b L_0202d438
L_0202d0e4:
    b L_0202d18c
    b L_0202d160
    b L_0202d114
    b L_0202d1b0
    b L_0202d36c
    b L_0202d210
    b L_0202d230
    b L_0202d258
    b L_0202d398
    b L_0202d398
    b L_0202d3fc
    b L_0202d244
L_0202d114:
    mov r3, #0x1
    bl func_0202cf28
    ldr r1, [r4, #0xc8]
    mov r5, r0
    cmp r5, r1
    addeq sp, sp, #0x8
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    mov r2, #0x3
    bl func_0202d558
    mov r0, r4
    mov r1, r5
    mov r2, #0x2
    bl func_0202d558
    add sp, sp, #0x8
    str r5, [r4, #0xc8]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202d160:
    ldr r0, [r6, #0xc]
    add sp, sp, #0x8
    cmp r0, #0x0
    add r0, r4, r1, lsl #0x2
    ldr r0, [r0, #0x48]
    movne r2, #0x1
    moveq r2, #0x0
    add r1, r0, #0x4
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202d18c:
    ldr r0, [r6, #0xc]
    add r1, r4, #0xe9
    cmp r0, #0x0
    movne r0, #0x1
    moveq r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202d1b0:
    ldr r0, [r4, #0xd0]
    cmp r0, #0x0
    beq L_0202d1d8
    ldr r1, [r6, #0xc]
    add r0, r4, #0x28
    bl func_02029700
    add sp, sp, #0x8
    str r0, [r4, #0xd4]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202d1d8:
    ldr r1, [r6, #0xc]
    add r0, r4, #0x28
    bl func_02029700
    str r0, [r4, #0xd0]
    mov r0, #0x1
    str r0, [r4, #0xd8]
    mov r2, #0x0
    ldr r0, [r4, #0xcc]
    ldr r1, [r4, #0xd0]
    mov r3, r2
    bl func_02027324
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202d210:
    mov r1, r6
    bl func_0202cf0c
    mov r1, r0
    mov r0, r4
    bl func_0202c800
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202d230:
    ldr r1, =data_020b42d0
    bl func_0202c6a0
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202d244:
    ldr r0, [r6, #0xc]
    add sp, sp, #0x8
    str r0, [r4, #0xe4]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202d258:
    mov r1, r6
    bl func_0202cf0c
    ldrb r0, [r0, #0x0]
    mvn r2, #0x0
    cmp r0, #0x6c
    bgt L_0202d2a4
    cmp r0, #0x6c
    bge L_0202d30c
    cmp r0, #0x64
    bgt L_0202d318
    cmp r0, #0x61
    blt L_0202d318
    cmp r0, #0x61
    beq L_0202d2e4
    cmp r0, #0x62
    beq L_0202d2ec
    cmp r0, #0x64
    moveq r2, #0x0
    b L_0202d318
L_0202d2a4:
    cmp r0, #0x72
    bgt L_0202d2b8
    cmp r0, #0x72
    moveq r2, #0xb
    b L_0202d318
L_0202d2b8:
    sub r0, r0, #0x73
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_0202d318
L_0202d2c8:
    b L_0202d314
    b L_0202d318
    b L_0202d304
    b L_0202d318
    b L_0202d318
    b L_0202d2f4
    b L_0202d2fc
L_0202d2e4:
    mov r2, #0x6
    b L_0202d318
L_0202d2ec:
    mov r2, #0x7
    b L_0202d318
L_0202d2f4:
    mov r2, #0x8
    b L_0202d318
L_0202d2fc:
    mov r2, #0x9
    b L_0202d318
L_0202d304:
    mov r2, #0x1
    b L_0202d318
L_0202d30c:
    mov r2, #0xa
    b L_0202d318
L_0202d314:
    mov r2, #0xc
L_0202d318:
    mvn r0, #0x0
    cmp r2, r0
    addeq sp, sp, #0x8
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    cmp r2, #0xb
    bne L_0202d354
    ldr r0, [r4, #0xc8]
    add r0, r4, r0, lsl #0x2
    ldr r0, [r0, #0x48]
    ldrb r0, [r0, #0x6]
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
L_0202d354:
    ldr r1, [r4, #0xc8]
    mov r0, r4
    bl func_0202d558
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202d36c:
    mov r1, r6
    bl func_0202cf0c
    mov r2, #0x0
    mov r1, r0
    ldr r0, =data_0214876c
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202d398:
    mov r1, r6
    bl func_0202cf0c
    bl func_0202b344
    ldr r1, [r4, #0x20]
    mov r5, r0
    ldr r1, [r1, #0x4]
    bl func_0200dac4
    mov r1, r0
    ldr r0, [r4, #0xcc]
    bl func_020271a4
    ldr r0, [r6, #0x4]
    cmp r0, #0x8
    bne L_0202d3e4
    mov r0, r5
    mov r1, #0x1
    bl func_0202adc4
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202d3e4:
    mov r0, r5
    mvn r1, #0x0
    bl func_0202adc4
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202d3fc:
    mov r1, r6
    bl func_0202cf0c
    bl func_0202b344
    ldr r1, [r4, #0x20]
    mov r5, r0
    ldr r1, [r1, #0x4]
    bl func_0200dac4
    mov r1, r0
    ldr r0, [r4, #0xcc]
    bl func_020271a4
    mov r1, r5
    bl func_0202a630
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202d438:
    mov r0, r6
    bl func_0202bcd0
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
