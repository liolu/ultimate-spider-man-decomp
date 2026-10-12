#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020012d0();
extern void func_02001c78();
extern void func_02002d84();
extern void func_02004024();
extern void func_02007968();
extern void func_02008694();
extern void func_020127c4();
extern void func_02057b80();
extern void func_02058688();
extern void func_02082e38();
extern void r1();
extern void r2();
extern char data_020a7840[];
extern char data_020ace0c[];
extern char data_020ace18[];
extern char data_020eccd8[];
extern char data_020ecce4[];
// clang-format off
asm void func_02008180(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x54
    mov r10, r0
    ldr r1, [r10, #0x748]
    mov r0, #0xc
    mul r0, r1, r0
    ldr r1, [r10, #0x74c]
    mov r7, #0x0
    add r2, r1, r0
    ldr r8, [r2, #0x4]
    ldr r9, [r1, r0]
    mvn r0, #0x0
    mov r6, r7
    cmp r8, #0x0
    str r0, [sp, #0x8]
    ble L_02008258
    ldr r11, =data_020ecce4
    mov r5, r7
    mov r4, #0x1
L_020081cc:
    ldr r1, [r9, r6, lsl #0x2]
    ldr r0, [r10, #0x740]
    mov r3, r5
    cmp r1, r0
    bne L_020081f0
    ldr r2, [r10, #0x744]
    ldr r0, [r11, #0x0]
    cmp r2, r0
    movgt r3, r4
L_020081f0:
    cmp r3, #0x0
    beq L_02008208
    cmp r1, #0x42
    beq L_02008208
    cmp r1, #0x43
    bne L_0200824c
L_02008208:
    mov r0, r10
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x1b8]
    blx r2
    cmp r0, #0x0
    beq L_0200824c
    mov r0, r10
    ldr r2, [r0, #0x0]
    ldr r1, [r9, r6, lsl #0x2]
    ldr r2, [r2, #0x144]
    blx r2
    mvn r1, #0x0
    cmp r0, r1
    ldreq r0, [r9, r6, lsl #0x2]
    streq r0, [sp, #0x8]
    beq L_02008258
    mov r7, r4
L_0200824c:
    add r6, r6, #0x1
    cmp r6, r8
    blt L_020081cc
L_02008258:
    ldr r0, [sp, #0x8]
    mvn r1, #0x0
    cmp r0, r1
    beq L_02008298
    ldr r1, [sp, #0x8]
    mov r0, r10
    bl func_02002d84
    ldr r0, [r10, #0x708]
    add r0, r0, #0x20
    bl func_020012d0
    mov r1, r0
    mov r0, r10
    bl func_02001c78
    add sp, sp, #0x54
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02008298:
    mov r0, r10
    bl func_02058688
    cmp r0, #0x0
    bne L_02008308
    ldrb r0, [r10, #0x15e]
    cmp r0, #0x0
    ldr r0, =0x15e
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r10, r0
    swpb r0, r2, [r1]
    ldr r0, [r10, #0x178]
    add r0, r0, #0x4
    bl func_020012d0
    mov r4, r0
    ldr r0, =data_020a7840
    bl func_020012d0
    mov r1, r0
    mov r0, r10
    add r1, r1, r4
    bl func_02004024
    mov r0, r10
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xd0]
    blx r1
    add sp, sp, #0x54
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02008308:
    cmp r7, #0x0
    beq L_0200832c
    mov r0, r10
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xd0]
    blx r1
    add sp, sp, #0x54
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0200832c:
    mov r0, r10
    bl func_02007968
    cmp r0, #0x0
    beq L_020083e0
    ldr r0, =data_020eccd8
    ldr r1, [r10, #0x50]
    ldr r2, [r0, #0x0]
    cmp r1, r2
    ble L_020083e0
    ldr r0, [r10, #0x1b8]
    cmp r0, #0x24
    addeq sp, sp, #0x54
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    subs r5, r1, r2
    add r1, sp, #0x3c
    mov r0, #0x0
    str r0, [r1, #0x0]
    str r0, [r1, #0x4]
    str r0, [r1, #0x8]
    add r3, sp, #0xc
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r4, =data_020ace0c
    add r3, sp, #0x18
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, [sp, #0x20]
    rsbmi r5, r5, #0x0
    mov r0, r5
    rsb r1, r1, #0x0
    bl func_02082e38
    mov r1, r0
    add r0, sp, #0x18
    str r0, [sp, #0x0]
    mov r0, #0x1
    str r0, [sp, #0x4]
    add r3, sp, #0xc
    mov r0, r10
    add r1, r1, #0x1
    mov r2, #0xd
    bl func_020127c4
    add sp, sp, #0x54
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_020083e0:
    ldr r0, [r10, #0x1b8]
    cmp r0, #0x26
    addeq sp, sp, #0x54
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    cmp r0, #0x24
    addeq sp, sp, #0x54
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r10
    bl func_02057b80
    cmp r0, #0x3e8
    movle r0, #0x0
    ble L_02008424
    ldr r0, =0x778
    add r0, r10, r0
    bl func_02008694
L_02008424:
    cmp r0, #0x0
    beq L_02008440
    cmp r0, #0x1
    beq L_02008460
    add sp, sp, #0x54
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02008440:
    mov r0, r10
    ldr r2, [r0, #0x0]
    mov r1, #0x0
    ldr r2, [r2, #0x1dc]
    blx r2
    add sp, sp, #0x54
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_02008460:
    add r1, sp, #0x48
    mov r0, #0x0
    str r0, [r1, #0x0]
    str r0, [r1, #0x4]
    str r0, [r1, #0x8]
    add r3, sp, #0x24
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r5, =data_020ace18
    add r4, sp, #0x30
    ldmia r5, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    ldr r2, [sp, #0x38]
    ldr r1, [r10, #0x50]
    mov r0, #0x14
    mla r1, r2, r0, r1
    ldr r3, =data_020eccd8
    ldr r0, [r3, #0x0]
    cmp r1, r0
    blt L_020084c0
    mov r0, r10
    bl func_02007968
    cmp r0, #0x0
    bne L_020084c8
L_020084c0:
    mov r2, #0x1
    b L_020084cc
L_020084c8:
    mov r2, #0x0
L_020084cc:
    ldr r1, [r10, #0x6f4]
    ldr r0, [r10, #0x50]
    ldr r1, [r1, #0x50]
    cmp r1, r0
    ble L_020084ec
    cmp r2, #0x0
    movne r2, #0x1
    bne L_020084f0
L_020084ec:
    mvn r2, #0x0
L_020084f0:
    ldr r0, [sp, #0x38]
    add r1, sp, #0x30
    mul r2, r0, r2
    str r2, [sp, #0x38]
    str r1, [sp, #0x0]
    mov r4, #0x1
    add r3, sp, #0x24
    mov r0, r10
    mov r1, #0x14
    mov r2, #0xd
    str r4, [sp, #0x4]
    bl func_020127c4
    add sp, sp, #0x54
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
