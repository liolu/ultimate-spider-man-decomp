#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void r0();
extern char data_02146138[];
extern char data_02146144[];
extern char data_023c0000[];
// clang-format off
asm void func_0205cc00(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r1, =data_023c0000
    ldr r0, =0x3ff8
    ldr r5, =data_02146144
    ldr r0, [r1, r0]!
    mov r4, #0x0
    orr r0, r0, #0x1
    str r0, [r1, #0x0]
    ldr r0, [r5, #0x30]
    cmp r0, #0x0
    ble L_0205cc4c
L_0205cc30:
    add r0, r5, r4, lsl #0x2
    ldr r0, [r0, #0x10]
    blx r0
    ldr r0, [r5, #0x30]
    add r4, r4, #0x1
    cmp r4, r0
    blt L_0205cc30
L_0205cc4c:
    ldr r0, =data_02146144
    ldr r1, =data_02146138
    ldr r3, [r0, #0x0]
    mov r2, #0x1
    add r3, r3, #0x1
    str r3, [r0, #0x0]
    swpb r0, r2, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
