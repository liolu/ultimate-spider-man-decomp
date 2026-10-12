#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02029748();
extern void func_02064ed8();
extern void func_02065678();
extern void func_02065d98();
extern char data_02100ec0[];
extern char data_02100ed0[];
// clang-format off
asm void func_020297ec(void) {
    stmfd sp!, {r4, lr}
    mov r4, r1
    ldr r1, [r4, #0x8]
    cmp r1, #0x4
    bne L_02029830
    ldr r0, [r2, #0x8]
    ldr r1, =data_02100ed0
    bl func_02065d98
    mov r1, r0
    add r0, r4, #0xc
    mov r2, #0x13
    bl func_02065678
    add r1, r4, #0x1f
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_02029830:
    cmp r1, #0x5
    bne L_02029854
    ldr r0, [r2, #0x8]
    ldr r1, =data_02100ec0
    bl func_02065d98
    bl func_02064ed8
    str r0, [r4, #0xc]
    ldmfd sp!, {r4, lr}
    bx lr
L_02029854:
    ldr r1, [r4, #0x4]
    cmp r1, #0x3
    bne L_02029878
    mov r1, r2
    mov r2, #0x1
    bl func_02029748
    str r0, [r4, #0xc]
    ldmfd sp!, {r4, lr}
    bx lr
L_02029878:
    ldr r0, [r2, #0x8]
    ldr r1, =data_02100ec0
    bl func_02065d98
    mov r1, r0
    add r0, r4, #0xc
    mov r2, #0x13
    bl func_02065678
    add r1, r4, #0x1f
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
