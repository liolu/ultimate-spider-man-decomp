#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001c0c();
extern void func_02001c58();
extern void func_02001c78();
extern void func_0202718c();
extern void func_02033768();
extern void func_020573a0();
extern void func_020579cc();
extern void func_02057c18();
extern void func_02058688();
extern void func_0205b58c();
extern void func_02064fc8();
extern void r1();
extern void r2();
extern void r3();
extern void r4();
// clang-format off
asm void func_02023828(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    ldr r1, [r4, #0x700]
    cmp r1, #0x2
    bne L_02023850
    ldr r1, [r4, #0x6f4]
    ldrb r1, [r1, #0xa9]
    cmp r1, #0x0
    beq L_02023864
L_02023850:
    mov r0, r4
    bl func_02033768
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02023864:
    bl func_02058688
    cmp r0, #0x0
    bne L_020238c4
    mov r0, #0x4
    bl func_02064fc8
    movs r5, r0
    movne r0, #0x0
    strne r0, [r5, #0x0]
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    mov r1, #0x5d
    bl func_0202718c
    mov r1, r0
    mov r0, r4
    ldr r4, [r0, #0x0]
    mov r2, r5
    ldr r4, [r4, #0x10c]
    mov r3, #0x1
    blx r4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_020238c4:
    mov r0, r4
    bl func_02001c58
    cmp r0, #0x0
    beq L_020239dc
    ldr r0, [r4, #0x6f4]
    ldr r0, [r0, #0xa4]
    ldr r0, [r0, #0x18]
    cmp r0, #0x0
    bne L_02023968
    mov r0, r4
    ldr r2, [r0, #0x0]
    mov r1, #0x3d
    ldr r2, [r2, #0x1b8]
    blx r2
    cmp r0, #0x0
    beq L_0202393c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    mov r1, #0x3d
    bl func_0202718c
    mov r1, r0
    mov r0, r4
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x1a4]
    blx r2
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0202393c:
    mov r0, r4
    bl func_02001c0c
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    mov r0, r4
    bl func_020579cc
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02023968:
    ldr r0, =0x777
    ldr r3, =0x776
    mov r1, #0x0
    add r2, r4, r0
    swpb r0, r1, [r2]
    add ip, r4, r3
    mov r3, #0x1
    swpb r3, r3, [ip]
    mov r0, r4
    mov r2, r1
    bl func_0205b58c
    mov r0, r4
    bl func_020573a0
    mov r2, r0
    mov r0, r4
    mov r1, #0x9
    bl func_02057c18
    mov r1, r0
    mov r0, r4
    ldr r3, [r0, #0x0]
    mov r2, #0x2
    ldr r3, [r3, #0x1a0]
    blx r3
    mov r0, r4
    mov r1, #0xc8
    bl func_02001c78
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_020239dc:
    mov r0, r4
    bl func_02001c0c
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    mov r0, r4
    bl func_020579cc
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
