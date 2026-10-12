#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0213d440[];
extern char data_0214868c[];
// clang-format off
asm void func_0203c940(void) {
    ldr r1, =data_0213d440
    ldrb r1, [r1, #0x28]
    cmp r1, #0x0
    bxne lr
    ldr r1, [r0, #0x4c]
    ldr r3, =data_0214868c
    str r1, [r3, #0x4]
    ldr r1, [r0, #0x50]
    rsb r1, r1, #0x0
    str r1, [r3, #0x8]
    ldrh r1, [r0, #0x38]
    str r1, [r3, #0xc]
    ldrh r1, [r0, #0x3a]
    str r1, [r3, #0x10]
    ldr r1, [r0, #0x194]
    str r1, [r3, #0x14]
    ldr r1, [r0, #0x30]
    str r1, [r3, #0x18]
    ldr r2, [r0, #0x19c]
    ldr r1, [r0, #0x4c]
    sub r1, r2, r1
    str r1, [r3, #0x20]
    ldr r2, [r0, #0x1a0]
    ldr r1, [r0, #0x50]
    sub r1, r2, r1
    rsb r1, r1, #0x0
    str r1, [r3, #0x24]
    ldr r1, [r0, #0x19c]
    str r1, [r3, #0x28]
    ldr r1, [r0, #0x1a0]
    rsb r1, r1, #0x0
    str r1, [r3, #0x2c]
    ldr r1, [r0, #0x198]
    str r1, [r3, #0x1c]
    ldr r1, [r0, #0x30]
    cmp r1, #0x4
    addls pc, pc, r1, lsl #0x2
    bx lr
L_0203c9d8:
    b L_0203ca30
    b L_0203ca14
    b L_0203c9ec
    b L_0203ca30
    b L_0203ca40
L_0203c9ec:
    add r2, r3, #0x40
    mov r3, #0x1
    swpb r1, r3, [r2]
    ldrb r0, [r0, #0x15e]
    cmp r0, #0x0
    ldr r0, =data_0214868c
    movne r3, #0x0
    add r1, r0, #0x41
    swpb r0, r3, [r1]
    bx lr
L_0203ca14:
    add r2, r3, #0x40
    mov r1, #0x0
    swpb r1, r1, [r2]
    ldrb r0, [r0, #0x15e]
    add r1, r3, #0x41
    swpb r0, r0, [r1]
    bx lr
L_0203ca30:
    ldrb r0, [r0, #0x15e]
    add r1, r3, #0x40
    swpb r0, r0, [r1]
    bx lr
L_0203ca40:
    ldrb r0, [r0, #0x15e]
    cmp r0, #0x0
    ldr r0, =data_0214868c
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r0, #0x40
    swpb r0, r2, [r1]
    bx lr
}
// clang-format on
