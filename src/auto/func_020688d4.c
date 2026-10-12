#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207c284();
extern void func_02082e38();
extern void func_02091414();
extern char data_0214876c[];
// clang-format off
asm void func_020688d4(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    ldr r1, [sp, #0x1c]
    mov r4, r0
    cmp r1, #0x0
    ldr ip, [sp, #0x20]
    bne L_0206890c
    cmp ip, #0x0
    mov r1, #0x5a
    mvngt r0, #0x0
    mulgt r0, r1, r0
    movgt r1, r0
    b L_020689a0
L_0206890c:
    str ip, [sp, #0x4]
    cmp ip, #0x80000
    bhs L_02068924
    mov r0, ip, lsl #0xc
    bl func_02082e38
    b L_02068974
L_02068924:
    ldr r3, =0x4000280
    mov r0, ip, asr #0x1f
    mov r1, #0x1
    mov r2, r0, lsl #0xc
    ldr r0, =0x4000290
    strh r1, [r3, #0x0]
    mov r1, ip, lsl #0xc
    str r1, [r0, #0x0]
    orr r2, r2, ip, lsr #0x14
    str r2, [r0, #0x4]
    ldr r2, [sp, #0x1c]
    ldr r0, =0x4000298
    mov r1, #0x0
    str r2, [r0, #0x0]
    str r1, [r0, #0x4]
L_02068960:
    ldrh r0, [r3, #0x0]
    ands r0, r0, #0x8000
    bne L_02068960
    ldr r0, =0x40002a0
    ldr r0, [r0, #0x0]
L_02068974:
    bl func_02091414
    ldr r1, =0x4bb834c8
    mov r2, #0x39
    umull ip, r3, r0, r1
    mla r3, r0, r2, r3
    mov r2, r0, asr #0x1f
    mov r0, #0x80000000
    mla r3, r2, r1, r3
    adds r0, ip, r0
    adc r0, r3, #0x0
    mov r1, r0, asr #0xc
L_020689a0:
    ldr r0, [sp, #0x1c]
    cmp r0, #0x0
    mvngt r0, #0x0
    mulgt r0, r1, r0
    movgt r1, r0
    ldr r0, [r4, #0x38]
    rsble r1, r1, #0xb4
    sub r5, r1, r0
    cmp r5, #0xb4
    subgt r5, r5, #0x168
    cmp r5, #0x0
    rsblt r0, r5, #0x0
    movge r0, r5
    cmp r0, #0xf
    bge L_02068a0c
    ldrb r0, [r4, #0x34]
    cmp r0, #0x0
    bne L_02068a0c
    mov r2, #0x0
    str r2, [sp, #0x0]
    ldr r1, [r4, #0x44]
    ldr r0, =data_0214876c
    mov r3, r2
    bl func_0207c284
    add r1, r4, #0x34
    mov r0, #0x1
    swpb r0, r0, [r1]
L_02068a0c:
    mov r0, r5
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
