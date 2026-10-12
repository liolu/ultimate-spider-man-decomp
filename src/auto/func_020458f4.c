#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02033864();
extern void func_0203cb0c();
extern void func_020434c8();
extern void func_02044b8c();
extern void func_020602cc();
extern void func_0206040c();
extern void func_02060414();
extern void func_020611e8();
extern void r1();
extern void r2();
extern void r3();
extern char data_020b831c[];
extern char data_02150bb8[];
// clang-format off
asm void func_020458f4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x1c
    ldr r1, =0x48a
    mov r4, r0
    add r1, r4, r1
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x49c]
    cmp r0, #0x0
    ldrgt r0, =0x49c
    addgt r1, r4, r0
    ldrgt r0, [r1, #0x0]
    subgt r0, r0, #0x1
    strgt r0, [r1, #0x0]
    ldr r0, [r4, #0x490]
    bl func_0206040c
    cmp r0, #0x0
    bne L_02045948
    ldr r0, [r4, #0x420]
    cmp r0, #0x2
    beq L_02045994
L_02045948:
    ldrb r0, [r4, #0x499]
    cmp r0, #0x0
    beq L_02045994
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc0]
    blx r1
    ldr r0, [r0, #0x0]
    mov r0, r0, lsl #0x13
    movs r0, r0, lsr #0x1f
    bne L_02045994
    ldr r0, =data_02150bb8
    ldrb r0, [r0, #0x1]
    cmp r0, #0x0
    bne L_02045994
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x1a8]
    blx r1
L_02045994:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x198]
    blx r1
    ldr r0, [r4, #0x48c]
    cmp r0, #0x0
    ble L_02045a40
    ldr r0, =0x48c
    add r1, r4, r0
    ldr r0, [r1, #0x0]
    sub r0, r0, #0x1
    str r0, [r1, #0x0]
    ldr r0, [r4, #0x48c]
    cmp r0, #0x0
    bne L_02045a8c
    ldrb r0, [r4, #0x499]
    cmp r0, #0x0
    beq L_02045a8c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x19c]
    blx r1
    mov r1, r0
    mov r0, r4
    ldr r3, [r0, #0x0]
    add r2, sp, #0x0
    ldr r3, [r3, #0x1a0]
    blx r3
    ldr r5, [r4, #0x490]
    ldr r2, [sp, #0x0]
    ldrh r0, [r5, #0x38]
    ldr r3, [sp, #0x4]
    mov r1, #0x1
    sub r0, r2, r0, lsr #0x1
    str r0, [r5, #0x3c]
    str r2, [r5, #0x4c]
    ldrh r0, [r5, #0x3a]
    sub r0, r3, r0
    str r0, [r5, #0x40]
    str r3, [r5, #0x50]
    ldr r0, [r4, #0x490]
    bl func_02060414
    b L_02045a8c
L_02045a40:
    ldrb r0, [r4, #0x49a]
    cmp r0, #0x0
    beq L_02045a8c
    ldr r0, [r4, #0x494]
    cmp r0, #0x0
    ble L_02045a8c
    ldr r0, =0x494
    add r1, r4, r0
    ldr r0, [r1, #0x0]
    sub r0, r0, #0x1
    str r0, [r1, #0x0]
    ldr r0, [r4, #0x494]
    cmp r0, #0x0
    bne L_02045a8c
    mov r0, r4
    ldr r2, [r0, #0x0]
    ldr r1, =data_020b831c
    ldr r2, [r2, #0x1c]
    blx r2
L_02045a8c:
    ldrb r3, [r4, #0x15e]
    ldr r2, [r4, #0x30]
    ldr r5, [r4, #0x4c]
    ldr lr, [r4, #0x50]
    ldr r0, =0x47c
    str r5, [sp, #0x10]
    str lr, [sp, #0x14]
    ldrh ip, [r4, #0x3a]
    add r1, sp, #0x8
    add r0, r4, r0
    sub ip, lr, ip, lsr #0x1
    str ip, [sp, #0x14]
    str r5, [sp, #0x8]
    str ip, [sp, #0xc]
    bl func_02033864
    ldr r0, [r4, #0x248]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldr r0, [r4, #0x24c]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldr r0, [r4, #0x490]
    bl func_0206040c
    cmp r0, #0x0
    beq L_02045b14
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x19c]
    blx r1
    mov r1, r0
    ldr r0, [r4, #0x490]
    bl func_020602cc
L_02045b14:
    ldr r0, [r4, #0x490]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    mov r0, r4
    bl func_02044b8c
    mov r0, r4
    bl func_020434c8
    mov r0, r4
    bl func_0203cb0c
    ldr r1, [r4, #0x30]
    add r0, r4, #0x250
    bl func_020611e8
    ldr r0, =0x488
    ldr r2, =0x489
    add r1, r4, r0
    mov r3, #0x0
    swpb r0, r3, [r1]
    add r1, r4, r2
    swpb r0, r3, [r1]
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
