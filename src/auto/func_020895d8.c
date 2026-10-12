#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02088834();
extern void func_02088c28();
extern void r1();
// clang-format off
asm void func_020895d8(void) {
    stmfd sp!, {r4, lr}
    ldrh r1, [r1, #0x2]
    mov r4, r0
    cmp r1, #0x0
    bne L_0208964c
    ldrb r0, [r4, #0x574]
    cmp r0, #0x1
    bne L_02089614
    ldr r1, [r4, #0x578]
    mov r0, #0x0
    blx r1
    ldr r0, =0x574
    mov r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
L_02089614:
    ldrb r0, [r4, #0x545]
    cmp r0, #0x1
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldr r0, [r4, #0x4]
    cmp r0, #0x0
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r1, #0x5
    mov r0, r4
    str r1, [r4, #0x564]
    bl func_02088c28
    ldmfd sp!, {r4, lr}
    bx lr
L_0208964c:
    mov r1, #0xa
    bl func_02088834
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
