#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02004e44();
extern void func_02006428();
extern void func_0202718c();
extern void func_02064fc8();
extern void r1();
extern void r2();
extern void r4();
// clang-format off
asm void func_02050620(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    ldr r3, [r5, #0x748]
    mov r4, r1
    cmp r3, #0x0
    bne L_02050708
    ldr r2, [r5, #0x74c]
    mov r1, #0xc
    mla r2, r3, r1, r2
    ldr r1, [r5, #0x178]
    ldr r3, [r2, #0x8]
    ldrh r2, [r1, #0x0]
    mov r1, #0x800
    smull ip, r2, r3, r2
    adds r3, ip, r1
    adc r1, r2, #0x0
    mov r6, r3, lsr #0xc
    orr r6, r6, r1, lsl #0x14
    bl func_02006428
    cmp r0, r6
    bge L_02050708
    mov r0, r5
    ldr r2, [r0, #0x0]
    mov r1, #0x1
    ldr r2, [r2, #0x1f8]
    blx r2
    mov r0, r5
    add r2, r5, #0x1d8
    mov r1, #0x0
    swpb r1, r1, [r2]
    bl func_02006428
    cmp r0, #0x0
    bne L_020506b8
    mov r0, r5
    mov r1, r4
    bl func_02004e44
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020506b8:
    mov r0, #0x4
    bl func_02064fc8
    movs r6, r0
    movne r0, #0xe
    strne r0, [r6, #0x0]
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    ldr r1, =0x19e
    bl func_0202718c
    mov r1, r0
    mov r0, r5
    ldr r4, [r0, #0x0]
    mov r2, r6
    ldr r4, [r4, #0x10c]
    mov r3, #0x1
    blx r4
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02050708:
    mov r0, r5
    mov r1, r4
    bl func_02004e44
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
