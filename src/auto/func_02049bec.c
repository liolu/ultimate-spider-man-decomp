#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02009c6c();
extern void func_0208580c();
extern char data_02120460[];
// clang-format off
asm void func_02049bec(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x164]
    ldr r1, =data_02120460
    ldr r0, [r0, #0xbc]
    mov r2, #0x0
    mov r3, #0x1
    bl func_0208580c
    ldr r1, =0x784
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02009c6c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
