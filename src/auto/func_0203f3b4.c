#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffbf08();
extern void func_01ffbf4c();
extern void func_01ffc028();
extern void func_01ffc03c();
extern void func_0202718c();
extern void func_0203425c();
extern void func_020342a0();
extern void func_020342e4();
extern void func_02036088();
extern void func_0203c62c();
extern void func_0203f368();
extern void func_020416e4();
extern void func_020422e0();
extern void r1();
// clang-format off
asm void func_0203f3b4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    add r0, r5, #0x190
    mov r1, #0x97
    bl func_0202718c
    mov r4, r0
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x40
    beq L_0203f410
    ldr r1, [r4, #0xc]
    mov r0, r5
    ldr r1, [r1, #0x4]
    bl func_01ffc028
    ldr r1, [r4, #0xc]
    mov r0, r5
    ldr r1, [r1, #0x8]
    mov r2, #0x0
    bl func_01ffbf08
    b L_0203f444
L_0203f410:
    ldr r1, [r4, #0xc]
    mov r0, r5
    ldr r1, [r1, #0x4]
    mov r1, r1, lsl #0x1
    bl func_01ffc028
    ldr r1, [r4, #0xc]
    mov r0, r5
    ldr r3, [r1, #0x8]
    mov r2, #0x0
    mov r1, r3, asr #0x1
    add r1, r3, r1, lsr #0x1e
    mov r1, r1, asr #0x2
    bl func_01ffbf08
L_0203f444:
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x20
    beq L_0203f468
    ldr r0, [r5, #0x30]
    cmp r0, #0x2
    beq L_0203f48c
L_0203f468:
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x10
    beq L_0203f4c4
    ldr r0, [r5, #0x30]
    cmp r0, #0x1
    bne L_0203f4c4
L_0203f48c:
    ldr r1, [r4, #0x8]
    mov r0, r5
    ldr r1, [r1, #0x4]
    mov r1, r1, lsl #0x1
    bl func_01ffc03c
    ldr r0, [r5, #0x30]
    ldr r1, [r4, #0x8]
    cmp r0, #0x2
    moveq r2, #0x1
    ldr r1, [r1, #0x8]
    movne r2, #0x0
    mov r0, r5
    bl func_01ffbf4c
    b L_0203f548
L_0203f4c4:
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x10
    beq L_0203f4e8
    ldr r0, [r5, #0x30]
    cmp r0, #0x2
    beq L_0203f50c
L_0203f4e8:
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x20
    beq L_0203f530
    ldr r0, [r5, #0x30]
    cmp r0, #0x1
    bne L_0203f530
L_0203f50c:
    ldr r1, [r4, #0x8]
    mov r0, r5
    ldr r1, [r1, #0x4]
    bl func_01ffc03c
    mov r1, #0x0
    mov r0, r5
    mov r2, r1
    bl func_01ffbf4c
    b L_0203f548
L_0203f530:
    ldr r1, [r4, #0x8]
    mov r0, r5
    ldr r1, [r1, #0x4]
    add r1, r1, r1, lsr #0x1f
    mov r1, r1, asr #0x1
    bl func_01ffc03c
L_0203f548:
    ldr r0, [r5, #0xbc]
    ldrb r0, [r0, #0x97]
    cmp r0, #0x0
    beq L_0203f57c
    mov r0, r5
    bl func_0203f368
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x100]
    blx r1
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0203f57c:
    ldr r0, [r5, #0x14]
    mov r2, #0x1
    ldr r0, [r0, #0x20c]
    cmp r0, #0x0
    bne L_0203f5b4
    ldr r0, [r5, #0x18]
    mov r1, #0x0
    cmp r0, #0x0
    beq L_0203f5ac
    ldr r0, [r0, #0x20c]
    cmp r0, #0x0
    movne r1, r2
L_0203f5ac:
    cmp r1, #0x0
    moveq r2, #0x0
L_0203f5b4:
    cmp r2, #0x0
    beq L_0203f5f0
    ldr r0, [r5, #0xa4]
    ldr r0, [r0, #0x28]
    cmp r0, #0x0
    blt L_0203f5f0
    mov r0, r5
    bl func_0203f368
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x104]
    blx r1
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0203f5f0:
    ldr r0, [r5, #0x30]
    cmp r0, #0x2
    bne L_0203f660
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x20
    beq L_0203f660
    mov r0, r5
    bl func_020342e4
    cmp r0, #0x0
    beq L_0203f660
    mov r3, #0x1
    str r3, [r5, #0x30]
    ldrb r0, [r5, #0x15e]
    ldr r1, =0x15e
    cmp r0, #0x0
    movne r3, #0x0
    add r2, r5, r1
    swpb r1, r3, [r2]
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x110]
    blx r1
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0203f660:
    ldr r0, [r5, #0x30]
    cmp r0, #0x1
    bne L_0203f6d4
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x10
    beq L_0203f6d4
    mov r0, r5
    bl func_020342a0
    cmp r0, #0x0
    beq L_0203f6d4
    mov r0, #0x2
    str r0, [r5, #0x30]
    ldrb r0, [r5, #0x15e]
    ldr r1, =0x15e
    cmp r0, #0x0
    moveq r3, #0x1
    movne r3, #0x0
    add r2, r5, r1
    swpb r1, r3, [r2]
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x110]
    blx r1
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0203f6d4:
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x40
    beq L_0203f710
    mov r0, r5
    bl func_0203425c
    cmp r0, #0x0
    beq L_0203f710
    mov r0, r5
    bl func_02036088
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0203f710:
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x160]
    blx r1
    cmp r0, #0x0
    beq L_0203f754
    mov r0, r5
    bl func_0203f368
    mov r0, r5
    bl func_0203c62c
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xe8]
    blx r1
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0203f754:
    mov r0, r5
    bl func_020416e4
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x1a0]
    blx r1
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r5
    bl func_0203f368
    mov r0, r5
    bl func_0203c62c
    mov r0, r5
    bl func_020422e0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
