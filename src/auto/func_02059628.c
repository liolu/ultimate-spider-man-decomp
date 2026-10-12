#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02013b08();
extern void func_02013b18();
extern void func_02064fbc();
extern void func_02064fc8();
extern void func_02065678();
extern char data_0213b398[];
// clang-format off
asm void func_02059628(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    str r0, [sp, #0x0]
    mov r10, r1
    ldr r1, [sp, #0x0]
    mov r3, #0x0
    mov r0, #0x18
    str r2, [sp, #0x4]
    str r3, [r1, #0xc]
    bl func_02064fc8
    ldr r1, [sp, #0x0]
    ldr r8, =data_0213b398
    str r0, [r1, #0x4]
    ldr r2, [sp, #0x0]
    ldr r1, [sp, #0x4]
    mov r0, r8
    ldr r9, [r2, #0x4]
    bl func_02013b18
    ldrb r0, [r10, #0x0]
    mov r7, #0x0
    cmp r0, #0x0
    beq L_020597cc
    mov r0, #0x18
    str r7, [sp, #0x8]
    str r7, [sp, #0xc]
    str r7, [sp, #0x10]
    str r0, [sp, #0x14]
L_02059694:
    ldrb r0, [r10, r7]
    cmp r0, #0x1
    bne L_020596bc
    add r0, r7, #0x1
    ldrb r0, [r10, r0]
    bl func_02013b08
    ldr r1, [sp, #0x4]
    mov r8, r0
    bl func_02013b18
    add r7, r7, #0x2
L_020596bc:
    mov r6, r7
    ldr r5, [sp, #0x8]
    str r8, [r9, #0x4]
    b L_020596e4
L_020596cc:
    ldr r0, [r8, #0x8]
    ldr r1, [r8, #0x2c]
    ldrb r0, [r0, r2]
    add r6, r6, #0x1
    add r0, r1, r0
    add r5, r5, r0
L_020596e4:
    ldrb r2, [r10, r6]
    add r4, r10, r6
    cmp r2, #0xa
    beq L_020596fc
    cmp r2, #0x0
    bne L_020596cc
L_020596fc:
    sub r11, r6, r7
    add r0, r11, #0x1
    bl func_02064fbc
    str r0, [r9, #0x8]
    ldr r0, [r9, #0x8]
    add r1, r10, r7
    mov r2, r11
    bl func_02065678
    rsb r0, r5, #0x100
    add r0, r0, r0, lsr #0x1f
    mov r2, r0, asr #0x1
    ldr r0, [r9, #0x8]
    add r1, r0, r11
    ldr r0, [sp, #0xc]
    swpb r0, r0, [r1]
    str r2, [r9, #0xc]
    ldr r0, [r8, #0xc]
    str r0, [r9, #0x10]
    ldr r0, [sp, #0xc]
    str r0, [r9, #0x14]
    ldrb r0, [r4, #0x0]
    cmp r0, #0xa
    bne L_02059780
    add r2, r9, #0x14
L_0205975c:
    ldr r1, [r2, #0x0]
    ldr r0, [r9, #0x10]
    add r6, r6, #0x1
    add r0, r1, r0
    str r0, [r2, #0x0]
    ldrb r0, [r10, r6]
    add r4, r10, r6
    cmp r0, #0xa
    beq L_0205975c
L_02059780:
    ldr r0, [sp, #0x0]
    mov r7, r6
    add r2, r0, #0xc
    ldr r1, [r2, #0x0]
    ldr r0, [r9, #0x14]
    add r0, r1, r0
    str r0, [r2, #0x0]
    ldrb r0, [r4, #0x0]
    cmp r0, #0x0
    ldreq r0, [sp, #0x10]
    streq r0, [r9, #0x0]
    beq L_020597c0
    ldr r0, [sp, #0x14]
    bl func_02064fc8
    str r0, [r9, #0x0]
    ldr r9, [r9, #0x0]
L_020597c0:
    ldrb r0, [r4, #0x0]
    cmp r0, #0x0
    bne L_02059694
L_020597cc:
    ldr r0, [sp, #0x0]
    mov r1, #0xc0
    str r1, [r0, #0x8]
    ldrb r0, [r0, #0x14]
    cmp r0, #0x0
    ldreq r0, [sp, #0x0]
    addeq r1, r0, #0x8
    ldreq r0, [r1, #0x0]
    addeq r0, r0, #0xd0
    streq r0, [r1, #0x0]
    ldr r0, [sp, #0x0]
    mov r1, #0x0
    str r1, [r0, #0x10]
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
