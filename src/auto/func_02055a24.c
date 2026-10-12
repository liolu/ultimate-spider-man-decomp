#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020012d0();
extern void func_02003b9c();
extern void func_02003dc8();
extern void func_020046f0();
extern void func_02057cc8();
extern void func_02058688();
extern void r3();
extern char data_020a77f0[];
// clang-format off
asm void func_02055a24(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r5, r0
    ldr r2, [r5, #0x17c]
    mov r4, r1
    ldrh r2, [r2, #0x0]
    mov r2, r2, lsl #0x1a
    movs r2, r2, lsr #0x1e
    beq L_02055a5c
    cmp r2, #0x1
    beq L_02055a70
    cmp r2, #0x2
    beq L_02055ae8
    b L_02055b3c
L_02055a5c:
    ldr r3, [r0, #0x0]
    mov r2, #0x0
    ldr r3, [r3, #0x1a0]
    blx r3
    b L_02055b3c
L_02055a70:
    ldrb r2, [r5, #0x751]
    cmp r2, #0x0
    beq L_02055a90
    ldr r3, [r0, #0x0]
    mov r2, #0x0
    ldr r3, [r3, #0x1a0]
    blx r3
    b L_02055b3c
L_02055a90:
    mov ip, #0x1
    str ip, [sp, #0x0]
    ldr r2, =0xc350
    mov r1, #0x9
    mov r3, #0x0
    str ip, [sp, #0x4]
    bl func_02057cc8
    movs r1, r0
    beq L_02055acc
    mov r0, r5
    ldr r3, [r0, #0x0]
    mov r2, #0x2
    ldr r3, [r3, #0x1a0]
    blx r3
    b L_02055b3c
L_02055acc:
    mov r0, r5
    ldr r3, [r0, #0x0]
    mov r1, r4
    ldr r3, [r3, #0x1a0]
    mov r2, #0x0
    blx r3
    b L_02055b3c
L_02055ae8:
    mov ip, #0x1
    str ip, [sp, #0x0]
    ldr r2, =0xc350
    mov r1, #0x9
    mov r3, #0x0
    str ip, [sp, #0x4]
    bl func_02057cc8
    movs r1, r0
    beq L_02055b24
    mov r0, r5
    ldr r3, [r0, #0x0]
    mov r2, #0x2
    ldr r3, [r3, #0x1a0]
    blx r3
    b L_02055b3c
L_02055b24:
    mov r0, r5
    ldr r3, [r0, #0x0]
    mov r1, r4
    ldr r3, [r3, #0x1a0]
    mov r2, #0x0
    blx r3
L_02055b3c:
    mov r0, r5
    bl func_02003b9c
    ldrb r0, [r5, #0x751]
    cmp r0, #0x0
    bne L_02055b58
    mov r0, r5
    bl func_020046f0
L_02055b58:
    ldr r0, =data_020a77f0
    bl func_020012d0
    mov r1, r0
    mov r0, r5
    bl func_02003dc8
    mov r0, r5
    bl func_02058688
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    ldrb r0, [r5, #0x15e]
    cmp r0, #0x0
    ldr r0, =0x15e
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r5, r0
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
