#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02064fbc();
extern void func_02065668();
extern void func_0206570c();
extern void func_02084a64();
extern void func_02085030();
extern void func_0209c3e4();
extern void func_0209c82c();
// clang-format off
asm void func_02085470(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    mov r10, r0
    mov r9, r1
    mov r11, r2
    mov r8, r3
    bl func_0209c3e4
    mov r6, r10
    mov r7, #0x0
    mov r4, r7
    mov r5, #0x7f
L_0208549c:
    mov r0, r7
    bl func_0209c82c
    str r0, [r6, #0xc]
    add r1, r6, #0x24
    swpb r0, r5, [r1]
    add r7, r7, #0x1
    str r4, [r6, #0x1c]
    str r4, [r6, #0x20]
    cmp r7, #0xc
    add r6, r6, #0x1c
    blt L_0208549c
    mov r0, r8
    bl func_0206570c
    add r0, r0, #0x1
    bl func_02064fbc
    add r1, r10, #0x8000
    str r0, [r1, #0x260]
    ldr r0, [r1, #0x260]
    mov r1, r8
    bl func_02065668
    mov r0, r10
    mov r1, r9
    bl func_02085030
    mov r0, r10
    mov r1, r11
    bl func_02084a64
    add r6, r10, #0x8000
    mov r0, #0x0
    ldr r1, =0x249
    ldr r4, =0x24a
    ldr r5, =0x24b
    str r0, [r6, #0x254]
    add r2, r6, #0x248
    add r3, r6, r1
    add r4, r6, r4
    add r5, r6, r5
    mov r7, #0x7f
    swpb r1, r7, [r2]
    mov r2, #0x1000
    swpb r1, r7, [r3]
    swpb r1, r7, [r4]
    swpb r1, r7, [r5]
    str r2, [r6, #0x250]
    str r2, [r6, #0x24c]
    str r0, [r6, #0x258]
    str r0, [r6, #0x25c]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
