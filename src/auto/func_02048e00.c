#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020012d0();
extern void func_02004024();
extern void func_02006060();
extern void func_02008770();
extern void func_020096d4();
extern void func_0202718c();
extern void func_02033768();
extern void func_02058688();
extern void func_0207c284();
extern void r1();
extern void r2();
extern char data_020a7840[];
extern char data_02104dc8[];
extern char data_02104dcc[];
extern char data_021050f0[];
extern char data_0214876c[];
// clang-format off
asm void func_02048e00(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x24
    ldr r2, [r1, #0x4]
    mov r6, #0x0
    mov r7, r0
    mov r5, r6
    mov r4, r6
    cmp r2, #0x6c
    bne L_02048f68
    ldr r0, [r7, #0x164]
    add r4, sp, #0x4
    add ip, r0, #0x17c
    ldmia ip!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia ip, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    ldr r0, [sp, #0x8]
    mov r4, #0x1
    cmp r0, #0x3f
    bgt L_02048eb0
    cmp r0, #0x3f
    bge L_02048f0c
    cmp r0, #0x3d
    bgt L_02048ea4
    cmp r0, #0x3d
    bge L_02048f14
    cmp r0, #0xb
    addls pc, pc, r0, lsl #0x2
    b L_02048f1c
L_02048e74:
    b L_02048f1c
    b L_02048f1c
    b L_02048f1c
    b L_02048f1c
    b L_02048f1c
    b L_0204907c
    b L_0204907c
    b L_0204907c
    b L_02048f1c
    b L_02048f1c
    b L_02048f1c
    b L_02048f14
L_02048ea4:
    cmp r0, #0x3e
    beq L_02048f0c
    b L_02048f1c
L_02048eb0:
    cmp r0, #0x68
    bgt L_02048eec
    cmp r0, #0x68
    bge L_0204907c
    cmp r0, #0x49
    bgt L_02048f1c
    cmp r0, #0x40
    blt L_02048f1c
    cmp r0, #0x40
    beq L_0204907c
    cmp r0, #0x41
    beq L_0204907c
    cmp r0, #0x49
    beq L_0204907c
    b L_02048f1c
L_02048eec:
    cmp r0, #0x6a
    bgt L_02048f00
    cmp r0, #0x6a
    beq L_0204907c
    b L_02048f1c
L_02048f00:
    cmp r0, #0x6c
    beq L_0204907c
    b L_02048f1c
L_02048f0c:
    mov r6, #0x0
    b L_0204907c
L_02048f14:
    mov r5, #0x1
    b L_0204907c
L_02048f1c:
    ldrb r0, [r7, #0x784]
    cmp r0, #0x0
    bne L_02048f54
    mov r0, r7
    mov r6, #0x0
    mov r5, #0x1
    bl func_02006060
    mov r2, r6
    ldr r0, =data_0214876c
    ldr r1, =data_021050f0
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
    b L_0204907c
L_02048f54:
    add r1, sp, #0x4
    mov r0, r7
    bl func_020096d4
    mov r6, r0
    b L_0204907c
L_02048f68:
    cmp r2, #0x3f
    bgt L_02048fd0
    cmp r2, #0x3f
    bge L_02049018
    cmp r2, #0x3d
    bgt L_02048fc4
    cmp r2, #0x3d
    bge L_02049050
    cmp r2, #0xb
    addls pc, pc, r2, lsl #0x2
    b L_02049058
L_02048f94:
    b L_02049058
    b L_02049058
    b L_02049058
    b L_02049058
    b L_02049058
    b L_0204907c
    b L_0204907c
    b L_0204907c
    b L_02049058
    b L_02049058
    b L_02049058
    b L_02049050
L_02048fc4:
    cmp r2, #0x3e
    beq L_02049018
    b L_02049058
L_02048fd0:
    cmp r2, #0x68
    bgt L_0204900c
    cmp r2, #0x68
    bge L_0204907c
    cmp r2, #0x49
    bgt L_02049058
    cmp r2, #0x40
    blt L_02049058
    cmp r2, #0x40
    beq L_02049020
    cmp r2, #0x41
    beq L_0204902c
    cmp r2, #0x49
    beq L_0204907c
    b L_02049058
L_0204900c:
    cmp r2, #0x6a
    beq L_0204907c
    b L_02049058
L_02049018:
    mov r6, #0x0
    b L_0204907c
L_02049020:
    bl func_020096d4
    mov r6, r0
    b L_0204907c
L_0204902c:
    bl func_020096d4
    movs r6, r0
    beq L_0204907c
    ldr r0, [r7, #0x748]
    cmp r0, #0x1
    bne L_0204907c
    mov r0, r7
    bl func_02033768
    b L_0204907c
L_02049050:
    mov r5, #0x1
    b L_0204907c
L_02049058:
    mov r0, r7
    mov r5, #0x1
    bl func_02006060
    mov r2, #0x0
    ldr r0, =data_0214876c
    ldr r1, =data_021050f0
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
L_0204907c:
    cmp r6, #0x0
    beq L_020491b8
    ldr r0, [r7, #0xa4]
    ldr r0, [r0, #0x10]
    cmp r0, #0x0
    bne L_020491b8
    mov r0, r7
    ldr r2, [r0, #0x0]
    ldr r1, =data_02104dcc
    ldr r2, [r2, #0x200]
    ldr r1, [r1, #0x0]
    blx r2
    ldr r1, =data_02104dc8
    ldr r1, [r1, #0x0]
    cmp r0, r1
    blt L_020491b8
    ldr r0, [r7, #0x180]
    cmp r0, #0x42
    beq L_020491b8
    cmp r0, #0x52
    beq L_020491b8
    mov r0, r7
    ldr r2, [r0, #0x0]
    mov r1, #0x52
    ldr r2, [r2, #0x1b8]
    blx r2
    cmp r0, #0x0
    beq L_0204911c
    mov r0, r7
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    mov r1, #0x52
    bl func_0202718c
    mov r1, r0
    mov r0, r7
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x1ac]
    blx r2
    b L_020491a8
L_0204911c:
    mov r0, r7
    bl func_02058688
    cmp r0, #0x0
    bne L_0204917c
    cmp r4, #0x0
    bne L_0204917c
    ldrb r0, [r7, #0x15e]
    cmp r0, #0x0
    ldr r0, =0x15e
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r7, r0
    swpb r0, r2, [r1]
    ldr r0, [r7, #0x178]
    add r0, r0, #0x4
    bl func_020012d0
    mov r4, r0
    ldr r0, =data_020a7840
    bl func_020012d0
    mov r1, r0
    mov r0, r7
    add r1, r1, r4
    bl func_02004024
    b L_020491a8
L_0204917c:
    mov r0, r7
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    mov r1, #0x42
    bl func_0202718c
    mov r1, r0
    mov r0, r7
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x1a4]
    blx r2
L_020491a8:
    ldr r0, =0x754
    mov r1, #0x0
    add r0, r7, r0
    bl func_02008770
L_020491b8:
    cmp r6, #0x0
    bne L_020491c8
    cmp r5, #0x0
    beq L_020491d8
L_020491c8:
    add sp, sp, #0x24
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_020491d8:
    mov r0, #0x0
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
