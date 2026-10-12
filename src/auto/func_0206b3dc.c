#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02065668();
extern void func_0206ba5c();
extern void func_0206ba94();
extern void r1();
extern void r2();
extern void r3();
extern char data_02147b28[];
extern char data_02147e60[];
// clang-format off
asm void func_0206b3dc(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x12c
    mov r4, r0
    bl func_0206ba5c
    cmp r0, #0x0
    addeq sp, sp, #0x12c
    moveq r0, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r1, =data_02147e60
    mov r0, #0x14c
    mla r10, r4, r0, r1
    ldr r1, =data_02147b28
    add r0, r10, #0x8
    ldr r2, [r1, #0x0]
    mov r1, #0x1
    blx r2
    mvn r1, #0x0
    str r0, [sp, #0x4]
    cmp r0, r1
    addeq sp, sp, #0x12c
    moveq r0, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r0, =0x8008
    bl func_0206ba94
    ldr r1, =data_02147b28
    str r0, [sp, #0x0]
    ldr r3, [r1, #0xc]
    ldr r0, [sp, #0x4]
    add r1, sp, #0x0
    mov r2, #0x4
    blx r3
    cmp r0, #0x0
    addeq sp, sp, #0x12c
    moveq r0, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r0, [r10, #0x10c]
    bl func_0206ba94
    ldr r1, =data_02147b28
    str r0, [sp, #0x0]
    ldr r3, [r1, #0xc]
    ldr r0, [sp, #0x4]
    add r1, sp, #0x0
    mov r2, #0x4
    blx r3
    cmp r0, #0x0
    addeq sp, sp, #0x12c
    moveq r0, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r0, [r10, #0x110]
    bl func_0206ba94
    ldr r1, =data_02147b28
    str r0, [sp, #0x0]
    ldr r3, [r1, #0xc]
    ldr r0, [sp, #0x4]
    add r1, sp, #0x0
    mov r2, #0x4
    blx r3
    cmp r0, #0x0
    addeq sp, sp, #0x12c
    moveq r0, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r0, [r10, #0x114]
    bl func_0206ba94
    ldr r1, =data_02147b28
    str r0, [sp, #0x0]
    ldr r3, [r1, #0xc]
    ldr r0, [sp, #0x4]
    add r1, sp, #0x0
    mov r2, #0x4
    blx r3
    cmp r0, #0x0
    addeq sp, sp, #0x12c
    moveq r0, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r9, #0x0
    str r9, [sp, #0x0]
    ldr r0, [r10, #0x110]
    cmp r0, #0x0
    bls L_0206b5e8
    ldr r7, =data_02147b28
    mov r8, #0x10
    add r11, sp, #0x20
    add r4, sp, #0x21
    add r5, sp, #0x22
    add r6, sp, #0x23
L_0206b548:
    ldr r1, [r10, #0x120]
    ldr r0, [sp, #0x0]
    add r0, r1, r0, lsl #0x4
    ldr r0, [r0, #0x8]
    bl func_0206ba94
    str r0, [sp, #0x1c]
    ldr r0, [sp, #0x0]
    ldr r1, [r10, #0x120]
    add r1, r1, r0, lsl #0x4
    ldrb r1, [r1, #0xc]
    swpb r1, r1, [r11]
    ldr r1, [r10, #0x120]
    add r0, r1, r0, lsl #0x4
    ldr r0, [r0, #0x4]
    bl func_0206ba94
    str r0, [sp, #0x18]
    ldr r1, [r10, #0x120]
    ldr r0, [sp, #0x0]
    ldr r0, [r1, r0, lsl #0x4]
    bl func_0206ba94
    str r0, [sp, #0x14]
    swpb r0, r9, [r4]
    ldr r3, [r7, #0xc]
    swpb r0, r9, [r5]
    add r1, sp, #0x14
    swpb r0, r9, [r6]
    mov r2, r8
    ldr r0, [sp, #0x4]
    blx r3
    cmp r0, #0x0
    addeq sp, sp, #0x12c
    moveq r0, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r0, [sp, #0x0]
    add r1, r0, #0x1
    str r1, [sp, #0x0]
    ldr r0, [r10, #0x110]
    cmp r1, r0
    blo L_0206b548
L_0206b5e8:
    mov r0, #0x0
    str r0, [sp, #0x0]
    ldr r0, [r10, #0x110]
    cmp r0, #0x0
    bls L_0206b668
    ldr r4, =data_02147b28
    mov r5, #0x4
L_0206b604:
    ldr r1, [r10, #0x124]
    ldr r0, [sp, #0x0]
    ldr r0, [r1, r0, lsl #0x2]
    bl func_0206ba94
    ldr r3, [r10, #0x124]
    ldr r1, [sp, #0x0]
    mov r2, r5
    str r0, [r3, r1, lsl #0x2]
    ldr r6, [r10, #0x124]
    ldr r1, [sp, #0x0]
    ldr r0, [sp, #0x4]
    ldr r3, [r4, #0xc]
    add r1, r6, r1, lsl #0x2
    blx r3
    cmp r0, #0x0
    addeq sp, sp, #0x12c
    moveq r0, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r0, [sp, #0x0]
    add r1, r0, #0x1
    str r1, [sp, #0x0]
    ldr r0, [r10, #0x110]
    cmp r1, r0
    blo L_0206b604
L_0206b668:
    mov r0, #0x0
    str r0, [sp, #0x0]
    ldr r0, [r10, #0x114]
    cmp r0, #0x0
    bls L_0206b710
    ldr r6, =data_02147b28
    add r5, sp, #0x8
    mov r4, #0xc
L_0206b688:
    ldr r0, [sp, #0x0]
    ldr r2, [r10, #0x118]
    mul r1, r0, r4
    ldr r0, [r2, r1]
    bl func_0206ba94
    str r0, [sp, #0x8]
    ldr r0, [r10, #0x118]
    ldr r1, [sp, #0x0]
    mla r0, r1, r4, r0
    ldr r0, [r0, #0x8]
    bl func_0206ba94
    str r0, [sp, #0x10]
    ldr r0, [r10, #0x118]
    ldr r1, [sp, #0x0]
    mla r0, r1, r4, r0
    ldr r0, [r0, #0x4]
    bl func_0206ba94
    str r0, [sp, #0xc]
    ldr r0, [sp, #0x4]
    ldr r3, [r6, #0xc]
    mov r1, r5
    mov r2, r4
    blx r3
    cmp r0, #0x0
    addeq sp, sp, #0x12c
    moveq r0, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r0, [sp, #0x0]
    add r1, r0, #0x1
    str r1, [sp, #0x0]
    ldr r0, [r10, #0x114]
    cmp r1, r0
    blo L_0206b688
L_0206b710:
    mov r0, #0x0
    str r0, [sp, #0x0]
    ldr r0, [r10, #0x114]
    cmp r0, #0x0
    bls L_0206b7b4
    ldr r6, =data_02147b28
    add r5, sp, #0x24
    mov r4, #0x108
L_0206b730:
    ldr r1, [r10, #0x11c]
    ldr r2, [sp, #0x0]
    mov r0, r5
    mla r1, r2, r4, r1
    bl func_02065668
    ldr r0, [r10, #0x11c]
    ldr r1, [sp, #0x0]
    mla r0, r1, r4, r0
    ldr r0, [r0, #0x100]
    bl func_0206ba94
    str r0, [sp, #0x124]
    ldr r0, [r10, #0x11c]
    ldr r1, [sp, #0x0]
    mla r0, r1, r4, r0
    ldr r0, [r0, #0x104]
    bl func_0206ba94
    str r0, [sp, #0x128]
    ldr r0, [sp, #0x4]
    ldr r3, [r6, #0xc]
    mov r1, r5
    mov r2, r4
    blx r3
    cmp r0, #0x0
    addeq sp, sp, #0x12c
    moveq r0, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r0, [sp, #0x0]
    add r1, r0, #0x1
    str r1, [sp, #0x0]
    ldr r0, [r10, #0x114]
    cmp r1, r0
    blo L_0206b730
L_0206b7b4:
    ldr r1, =data_02147b28
    add r0, sp, #0x4
    ldr r1, [r1, #0x4]
    blx r1
    mov r0, #0x0
    str r0, [r10, #0x108]
    add sp, sp, #0x12c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
