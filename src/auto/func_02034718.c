#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_01ffbcb8();
extern void func_0203412c();
extern void func_02034460();
extern void func_02036b68();
extern void func_0207c284();
extern char data_02102bbc[];
extern char data_0214876c[];
// clang-format off
asm void func_02034718(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    mov r4, r0
    bl func_01ffbcb8
    add r1, r0, #0x2d
    mov r0, r4
    str r1, [r4, #0x1e4]
    bl func_02034460
    add r1, r4, #0x1e0
    swpb r0, r0, [r1]
    add r1, r4, #0x1bc
    mov r0, r4
    bl func_01ff9acc
    ldr r0, [r4, #0x30]
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_02034964
L_0203475c:
    b L_020348a8
    b L_02034770
    b L_020347d4
    b L_020348a8
    b L_02034838
L_02034770:
    mov r0, r4
    bl func_0203412c
    cmp r0, #0x0
    beq L_02034798
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa9
    bl func_02036b68
    b L_02034964
L_02034798:
    ldr r0, [r4, #0x198]
    cmp r0, #0x2
    bne L_020347bc
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa8
    bl func_02036b68
    b L_02034964
L_020347bc:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa7
    bl func_02036b68
    b L_02034964
L_020347d4:
    mov r0, r4
    bl func_0203412c
    cmp r0, #0x0
    beq L_020347fc
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa9
    bl func_02036b68
    b L_02034964
L_020347fc:
    ldr r0, [r4, #0x198]
    cmp r0, #0x1
    bne L_02034820
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa8
    bl func_02036b68
    b L_02034964
L_02034820:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa7
    bl func_02036b68
    b L_02034964
L_02034838:
    mov r0, r4
    bl func_0203412c
    cmp r0, #0x0
    beq L_02034860
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa9
    bl func_02036b68
    b L_02034964
L_02034860:
    ldr r0, [r4, #0x198]
    cmp r0, #0x3
    bne L_02034890
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa8
    bl func_02036b68
    mov r0, r4
    add r1, r4, #0x1b4
    bl func_01ff9acc
    b L_02034964
L_02034890:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa7
    bl func_02036b68
    b L_02034964
L_020348a8:
    mov r0, r4
    bl func_0203412c
    cmp r0, #0x0
    beq L_020348d0
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa6
    bl func_02036b68
    b L_0203495c
L_020348d0:
    ldr r0, [r4, #0x198]
    cmp r0, #0x4
    bne L_02034924
    ldrb r0, [r4, #0x1e0]
    cmp r0, #0x0
    beq L_02034900
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa8
    bl func_02036b68
    b L_0203495c
L_02034900:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa5
    bl func_02036b68
    mov r0, r4
    add r1, r4, #0x1b4
    bl func_01ff9acc
    b L_0203495c
L_02034924:
    ldrb r0, [r4, #0x1e0]
    cmp r0, #0x0
    beq L_02034948
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa7
    bl func_02036b68
    b L_0203495c
L_02034948:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa4
    bl func_02036b68
L_0203495c:
    mov r0, #0x0
    str r0, [r4, #0x30]
L_02034964:
    mov r0, #0x19
    mov r2, #0x0
    str r0, [r4, #0x194]
    ldr r0, =data_0214876c
    ldr r1, =data_02102bbc
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
