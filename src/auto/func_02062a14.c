#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8030();
extern void func_01ffbbd4();
extern void func_0202f8a8();
// clang-format off
asm void func_02062a14(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r3, r4, #0x168
    swpb r2, r2, [r3]
    ldr r2, =0x169
    str r1, [r4, #0x164]
    add r2, r4, r2
    mov r1, #0x0
    swpb r1, r1, [r2]
    ldrb r1, [r4, #0x168]
    cmp r1, #0x0
    beq L_02062a50
    ldr r0, [r4, #0x164]
    bl func_01ffbbd4
    b L_02062a58
L_02062a50:
    ldr r1, [r4, #0x164]
    bl func_0202f8a8
L_02062a58:
    ldr r0, [r4, #0x164]
    mov r1, r4
    bl func_01ff8030
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
