#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02013e64();
extern void r1();
extern char data_02150bb8[];
// clang-format off
asm void func_02013d08(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    mov r1, #0x1
    bl func_02013e64
    ldr r0, [r4, #0x24]
    cmp r0, #0x0
    beq L_02013d30
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x4]
    blx r1
L_02013d30:
    ldr r0, =data_02150bb8
    mov r2, #0x0
    str r2, [r4, #0x24]
    add r1, r0, #0x1
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
