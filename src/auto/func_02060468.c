#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9e94();
extern void func_01ff9ea0();
extern void func_0206f918();
// clang-format off
asm void func_02060468(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r1, [r4, #0xd4]
    cmp r1, #0x0
    beq L_0206048c
    bl func_01ff9ea0
    add r1, r4, #0xd4
    mov r0, #0x0
    swpb r0, r0, [r1]
L_0206048c:
    ldrb r0, [r4, #0xd5]
    cmp r0, #0x0
    beq L_020604ac
    mov r0, r4
    bl func_01ff9e94
    add r1, r4, #0xd5
    mov r0, #0x0
    swpb r0, r0, [r1]
L_020604ac:
    ldrb r0, [r4, #0xc8]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldr r1, [r4, #0x50]
    mov r0, r4
    sub r1, r1, #0x64
    str r1, [r4, #0x94]
    ldr r1, [r4, #0x4c]
    sub r1, r1, #0x64
    str r1, [r4, #0x98]
    ldr r1, [r4, #0x4c]
    add r1, r1, #0x64
    str r1, [r4, #0x9c]
    ldr r1, [r4, #0x50]
    add r1, r1, #0x64
    str r1, [r4, #0xa0]
    bl func_0206f918
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
