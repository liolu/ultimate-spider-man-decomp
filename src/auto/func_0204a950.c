#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205c8dc();
extern void func_0205c8f0();
extern void func_0205c918();
extern void func_0205c940();
extern void func_0205c950();
// clang-format off
asm void func_0204a950(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r1
    mov r5, r0
    ldr r1, =0xc0de608d
    mov r0, r4
    str r1, [r5, #0x0]
    bl func_0205c918
    add r1, r5, #0x4
    swpb r0, r0, [r1]
    mov r0, r4
    bl func_0205c940
    add r1, r5, #0x5
    swpb r0, r0, [r1]
    mov r0, r4
    bl func_0205c950
    add r1, r5, #0x6
    swpb r0, r0, [r1]
    mov r0, r4
    bl func_0205c8f0
    add r1, r5, #0x7
    swpb r0, r0, [r1]
    mov r0, r4
    bl func_0205c8dc
    add r1, r5, #0x8
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
