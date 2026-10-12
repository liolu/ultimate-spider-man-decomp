#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffb5e0();
extern void func_02013e64();
extern void func_02015054();
extern void func_0208486c();
extern char data_02143e44[];
extern char data_0214876c[];
// clang-format off
asm void func_02014308(void) {
    stmfd sp!, {r4, lr}
    mov r1, #0x0
    mov r4, r0
    bl func_02013e64
    ldr r0, =data_0214876c
    bl func_0208486c
    add r0, r4, #0x4
    bl func_02015054
    ldr r0, =data_02143e44
    mov r2, #0x0
    add r1, r0, #0x34
    swpb r0, r2, [r1]
    bl func_01ffb5e0
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
