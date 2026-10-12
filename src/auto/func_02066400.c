#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02064fbc();
extern void func_02064fc8();
extern void func_02065678();
extern void func_0206570c();
extern void func_02065d28();
extern void func_02065d78();
extern void func_02065ec0();
extern void func_02065f4c();
extern void func_0206611c();
extern void func_020661c0();
extern void func_020661e4();
extern void func_020663f4();
// clang-format off
asm void func_02066400(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10c
    mov r7, r1
    mov r6, r0
    bl func_020663f4
    ldrb r0, [r7, #0x0]
    mov r5, r6
    cmp r0, #0x0
    addeq sp, sp, #0x10c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, #0x18
    str r0, [sp, #0x4]
    mov r0, #0x100
    add r9, sp, #0x8
    mov r8, #0x0
    str r0, [sp, #0x0]
L_02066444:
    mov r0, r6
    mov r1, r7
    bl func_020661c0
    mov r10, r0
    ldr r3, [sp, #0x0]
    mov r0, r6
    mov r1, r10
    mov r2, r9
    bl func_0206611c
    ldrb r1, [sp, #0x8]
    mov r4, r0
    cmp r1, #0x21
    bgt L_0206648c
    cmp r1, #0x21
    bge L_02066590
    cmp r1, #0x0
    beq L_02066590
    b L_020664ec
L_0206648c:
    cmp r1, #0x2f
    bgt L_020664a0
    cmp r1, #0x2f
    beq L_020664ac
    b L_020664ec
L_020664a0:
    cmp r1, #0x3f
    beq L_02066590
    b L_020664ec
L_020664ac:
    ldr r0, [r5, #0xc]
    cmp r0, #0x0
    bne L_020664e4
    sub r10, r10, r7
    add r0, r10, #0x1
    bl func_02064fbc
    str r0, [r5, #0x4]
    ldr r0, [r5, #0x4]
    mov r1, r7
    mov r2, r10
    bl func_02065678
    ldr r0, [r5, #0x4]
    add r1, r0, r10
    swpb r0, r8, [r1]
L_020664e4:
    ldr r5, [r5, #0x10]
    b L_02066590
L_020664ec:
    ldr r0, [sp, #0x4]
    bl func_02064fc8
    movs r10, r0
    beq L_02066504
    bl func_02065d78
    mov r10, r0
L_02066504:
    mov r0, r6
    mov r1, r9
    bl func_020661e4
    mov r11, r0
    mov r0, r6
    mov r1, r9
    mov r2, r8
    bl func_02065ec0
    movs r7, r0
    beq L_02066544
    mov r0, r6
    mov r1, r7
    mov r2, r10
    bl func_02065f4c
    sub r7, r7, r9
    b L_02066550
L_02066544:
    mov r0, r9
    bl func_0206570c
    mov r7, r0
L_02066550:
    add r0, r7, #0x1
    bl func_02064fbc
    str r0, [r10, #0x0]
    ldr r0, [r10, #0x0]
    mov r1, r9
    mov r2, r7
    bl func_02065678
    ldr r1, [r10, #0x0]
    mov r0, r5
    add r2, r1, r7
    swpb r1, r8, [r2]
    mov r1, r10
    bl func_02065d28
    cmp r11, #0x0
    str r5, [r10, #0x10]
    moveq r5, r10
L_02066590:
    ldrb r0, [r4, #0x0]
    mov r7, r4
    cmp r0, #0x0
    bne L_02066444
    add sp, sp, #0x10c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
