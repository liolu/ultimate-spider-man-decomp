#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02014b60();
extern void func_0201ff80();
extern void func_0205210c();
// clang-format off
asm void func_02052834(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r1
    ldr r1, [r4, #0x0]
    mov r5, r0
    cmp r1, #0x1a
    bne L_020528d0
    ldr r1, [r4, #0x4]
    cmp r1, #0x6
    addls pc, pc, r1, lsl #0x2
    b L_020528d0
L_02052860:
    b L_020528d0
    b L_020528d0
    b L_020528d0
    b L_0205287c
    b L_02052898
    b L_020528b8
    b L_020528c4
L_0205287c:
    mov r0, #0x0
    str r0, [sp, #0x0]
    ldr r2, [r4, #0x8]
    mov r3, r0
    mov r1, #0x1
    bl func_0201ff80
    b L_020528d0
L_02052898:
    mov r0, #0x0
    ldr ip, [r4, #0x8]
    mov r1, r0
    mov r2, r0
    mov r3, #0x1
    str ip, [sp, #0x0]
    bl func_0201ff80
    b L_020528d0
L_020528b8:
    ldr r1, [r4, #0x8]
    bl func_0205210c
    b L_020528d0
L_020528c4:
    add r1, r5, #0x6a
    mov r0, #0x1
    swpb r0, r0, [r1]
L_020528d0:
    mov r0, r5
    mov r1, r4
    bl func_02014b60
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
