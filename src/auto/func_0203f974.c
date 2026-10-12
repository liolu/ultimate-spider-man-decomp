#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203590c();
extern void func_02036e58();
extern void func_0203c62c();
extern void func_0203f2e8();
extern void func_0203f7b4();
extern void r1();
// clang-format off
asm void func_0203f974(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r1, [r0, #0x0]
    mov r6, r0
    ldr r1, [r1, #0x164]
    blx r1
    cmp r0, #0x0
    beq L_0203fae8
    mov r0, r6
    bl func_02036e58
    cmp r0, #0x0
    beq L_0203fae8
    ldr r1, [r6, #0x30]
    mov r5, #0x0
    mov r4, r5
    cmp r1, #0x2
    bne L_0203f9c0
    ldrb r0, [r6, #0x15e]
    cmp r0, #0x0
    bne L_0203f9d4
L_0203f9c0:
    cmp r1, #0x1
    bne L_0203f9d8
    ldrb r0, [r6, #0x15e]
    cmp r0, #0x0
    bne L_0203f9d8
L_0203f9d4:
    mov r5, #0x1
L_0203f9d8:
    mov r0, r6
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x20
    beq L_0203f9fc
    ldr r0, [r6, #0x30]
    cmp r0, #0x1
    beq L_0203fa0c
L_0203f9fc:
    mov r0, r6
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
L_0203fa0c:
    mov r0, r6
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x20
    beq L_0203fa30
    ldr r0, [r6, #0x30]
    cmp r0, #0x2
    beq L_0203fa54
L_0203fa30:
    mov r0, r6
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x10
    beq L_0203fa58
    ldr r0, [r6, #0x30]
    cmp r0, #0x1
    bne L_0203fa58
L_0203fa54:
    mov r4, #0x1
L_0203fa58:
    cmp r5, #0x0
    beq L_0203fa70
    mov r0, r6
    bl func_0203f7b4
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0203fa70:
    cmp r4, #0x0
    beq L_0203fa88
    mov r0, r6
    bl func_0203f2e8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0203fa88:
    mov r0, r6
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x80
    beq L_0203fab8
    mov r0, r6
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x15c]
    blx r1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0203fab8:
    ldr r0, =0x1f9
    mov r2, #0x1
    add r1, r6, r0
    swpb r0, r2, [r1]
    mov r0, r6
    bl func_0203c62c
    mov r0, r6
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xfc]
    blx r1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0203fae8:
    mov r0, r6
    bl func_0203590c
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
