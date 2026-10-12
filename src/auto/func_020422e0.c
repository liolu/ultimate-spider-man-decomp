#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_0200c398();
extern void func_02028ba0();
extern void func_02034010();
extern void func_02034028();
extern void func_02036a3c();
extern void func_02036a9c();
extern void func_02036b68();
extern void func_02041968();
extern void r1();
extern void r3();
extern char data_020b7f18[];
extern char data_020b822c[];
extern char data_020b8234[];
extern char data_020b8240[];
extern char data_020b82ac[];
// clang-format off
asm void func_020422e0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_02034028
    cmp r0, #0x0
    beq L_02042318
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x6c
    bl func_02036b68
    ldr r1, =data_020b82ac
    add r0, r4, #0x1c8
    bl func_02028ba0
    b L_020423fc
L_02042318:
    ldrb r0, [r4, #0x26c]
    add r2, r4, #0x26c
    cmp r0, #0x0
    moveq r1, #0x1
    movne r1, #0x0
    swpb r1, r1, [r2]
    mov r0, r4
    bl func_02041968
    cmp r0, #0x0
    beq L_020423dc
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x198]
    blx r1
    cmp r0, #0x1
    bne L_020423dc
    mov r0, r4
    bl func_02034010
    bl func_0200c398
    cmp r0, #0x0
    beq L_020423dc
    ldrb r0, [r4, #0x26c]
    mov r2, #0x0
    mov r3, r2
    cmp r0, #0x0
    movne r1, #0x8c
    moveq r1, #0x8d
    mov r0, r4
    bl func_02036b68
    ldr r0, =data_020b822c
    ldr r1, =data_020b8234
    ldr r2, [r0, #0x0]
    add r3, r4, #0x7c
    str r2, [r4, #0x74]
    ldr r0, [r0, #0x4]
    ldr ip, =data_020b8240
    str r0, [r4, #0x78]
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r3, r4, #0x88
    ldmia ip, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    ldr r3, [r0, #0x0]
    mov r1, #0x7
    ldr r3, [r3, #0x190]
    mov r2, #0x1
    blx r3
    b L_020423fc
L_020423dc:
    ldrb r0, [r4, #0x26c]
    mov r2, #0x0
    mov r3, r2
    cmp r0, #0x0
    movne r1, #0x88
    moveq r1, #0x89
    mov r0, r4
    bl func_02036b68
L_020423fc:
    ldrb r2, [r4, #0x15e]
    mov r0, r4
    mov r1, #0x88
    bl func_02036a9c
    mov r0, r4
    mov r1, #0x88
    mov r2, #0x0
    bl func_02036a3c
    mov r2, #0x1f
    ldr r1, =data_020b7f18
    mov r0, r4
    str r2, [r4, #0x194]
    bl func_01ff9acc
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
