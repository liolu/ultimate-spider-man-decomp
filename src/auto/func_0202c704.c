#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202c658();
extern void func_0202d558();
extern void func_0202f284();
// clang-format off
asm void func_0202c704(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r1
    ldr r2, [r5, #0x0]
    mov r4, r0
    cmp r2, #0x8
    bne L_0202c7f0
    ldr r1, [r5, #0x4]
    cmp r1, #0x4
    addls pc, pc, r1, lsl #0x2
    b L_0202c7f4
L_0202c730:
    b L_0202c7f4
    b L_0202c744
    b L_0202c75c
    b L_0202c7a4
    b L_0202c780
L_0202c744:
    mvn r1, #0x0
    mov r2, #0x10
    bl func_0202d558
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0202c75c:
    ldr r0, [r5, #0x8]
    mov r2, #0x1
    add r0, r4, r0, lsl #0x2
    ldr r0, [r0, #0x48]
    add sp, sp, #0x4
    add r1, r0, #0x5
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0202c780:
    ldr r0, [r5, #0x8]
    mov r2, #0x1
    add r0, r4, r0, lsl #0x2
    ldr r0, [r0, #0x48]
    add sp, sp, #0x4
    add r1, r0, #0x6
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0202c7a4:
    bl func_0202c658
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r1, [r5, #0x8]
    add r0, r4, r1, lsl #0x2
    ldr r0, [r0, #0x48]
    ldrb r0, [r0, #0x5]
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    mov r0, r4
    mov r2, #0xd
    bl func_0202d558
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0202c7f0:
    bl func_0202f284
L_0202c7f4:
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
