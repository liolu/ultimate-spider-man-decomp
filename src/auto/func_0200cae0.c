#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200c948();
extern void func_0200c9ac();
extern char data_02143e44[];
// clang-format off
asm void func_0200cae0(void) {
    stmfd sp!, {r4, lr}
    ldr r2, [r1, #0x0]
    mov r4, r0
    cmp r2, #0x25
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldr r1, [r1, #0x4]
    cmp r1, #0x4
    addls pc, pc, r1, lsl #0x2
    b L_0200cb90
L_0200cb08:
    b L_0200cb38
    b L_0200cb54
    b L_0200cb1c
    b L_0200cb70
    b L_0200cb84
L_0200cb1c:
    bl func_0200c948
    ldr r1, =data_02143e44
    mov r0, r4
    ldr r1, [r1, #0x14]
    bl func_0200c9ac
    ldmfd sp!, {r4, lr}
    bx lr
L_0200cb38:
    add r1, r4, #0xac
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0xad
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0200cb54:
    add r1, r4, #0xac
    mov r2, #0x1
    swpb r0, r2, [r1]
    add r1, r4, #0xad
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0200cb70:
    add r1, r4, #0xad
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0200cb84:
    add r1, r4, #0xad
    mov r0, #0x1
    swpb r0, r0, [r1]
L_0200cb90:
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
