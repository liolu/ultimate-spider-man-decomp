#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02000e8c();
extern void func_02004080();
extern void func_02004398();
extern void func_02004980();
extern void func_020059b8();
extern void func_0200619c();
extern void func_02006428();
extern void func_02027100();
extern void func_02062b00();
extern void func_0207c284();
extern void r1();
extern void r2();
extern char data_020eccb8[];
extern char data_020eccc4[];
extern char data_0214876c[];
// clang-format off
asm void func_0200692c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x8
    mov r6, r0
    ldr r2, [r6, #0x1b8]
    mov r5, r1
    cmp r2, #0x7
    beq L_02006960
    cmp r2, #0x6
    beq L_02006960
    cmp r2, #0xd
    beq L_02006960
    cmp r2, #0x17
    bne L_02006970
L_02006960:
    add sp, sp, #0x8
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02006970:
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x4c]
    blx r1
    ldr r1, [r5, #0x8]
    add r2, r6, #0x4c
    cmp r1, #0x0
    beq L_020069b4
    ldrb r0, [r6, #0x15e]
    cmp r1, #0x0
    movlt r1, #0x1
    movge r1, #0x0
    cmp r1, r0
    moveq r0, #0x1
    movne r0, #0x0
    add r1, r6, #0x190
    swpb r0, r0, [r1]
    b L_020069e0
L_020069b4:
    ldr r1, [r0, #0x0]
    ldr r0, [r2, #0x0]
    cmp r1, r0
    movgt r1, #0x1
    ldrb r0, [r6, #0x15e]
    movle r1, #0x0
    cmp r1, r0
    moveq r0, #0x1
    movne r0, #0x0
    add r1, r6, #0x190
    swpb r0, r0, [r1]
L_020069e0:
    ldr r1, [r5, #0x4]
    mov r4, #0x0
    cmp r1, #0x45
    bgt L_02006ab8
    cmp r1, #0x45
    bge L_02006d9c
    cmp r1, #0x40
    bgt L_02006a90
    cmp r1, #0x40
    bge L_02006c54
    cmp r1, #0x3e
    bgt L_02006a84
    cmp r1, #0x3e
    bge L_02006d9c
    cmp r1, #0x17
    addls pc, pc, r1, lsl #0x2
    b L_02006d8c
L_02006a24:
    b L_02006d9c
    b L_02006c54
    b L_02006c54
    b L_02006c54
    b L_02006c54
    b L_02006d9c
    b L_02006d9c
    b L_02006d9c
    b L_02006d8c
    b L_02006c54
    b L_02006c54
    b L_02006cd0
    b L_02006c54
    b L_02006bbc
    b L_02006c54
    b L_02006b88
    b L_02006bbc
    b L_02006d8c
    b L_02006d8c
    b L_02006d8c
    b L_02006d04
    b L_02006d9c
    b L_02006d34
    b L_02006d58
L_02006a84:
    cmp r1, #0x3f
    beq L_02006d9c
    b L_02006d8c
L_02006a90:
    cmp r1, #0x43
    bgt L_02006aac
    cmp r1, #0x43
    bge L_02006b2c
    cmp r1, #0x41
    beq L_02006c54
    b L_02006d8c
L_02006aac:
    cmp r1, #0x44
    beq L_02006b58
    b L_02006d8c
L_02006ab8:
    cmp r1, #0x65
    bgt L_02006af0
    cmp r1, #0x65
    bge L_02006d9c
    cmp r1, #0x47
    bgt L_02006ae4
    cmp r1, #0x47
    bge L_02006d9c
    cmp r1, #0x46
    beq L_02006d9c
    b L_02006d8c
L_02006ae4:
    cmp r1, #0x64
    beq L_02006d9c
    b L_02006d8c
L_02006af0:
    cmp r1, #0x68
    bgt L_02006b0c
    cmp r1, #0x68
    bge L_02006c44
    cmp r1, #0x67
    beq L_02006c54
    b L_02006d8c
L_02006b0c:
    cmp r1, #0x69
    bgt L_02006b20
    cmp r1, #0x69
    beq L_02006c44
    b L_02006d8c
L_02006b20:
    cmp r1, #0x6a
    beq L_02006c10
    b L_02006d8c
L_02006b2c:
    ldr r0, [r6, #0x1b8]
    sub r0, r0, #0x10
    cmp r0, #0x2
    bhi L_02006d9c
    mov r0, r6
    ldr r2, [r0, #0x0]
    mov r1, r5
    ldr r2, [r2, #0x13c]
    blx r2
    mov r4, #0x1
    b L_02006d9c
L_02006b58:
    ldr r0, [r6, #0x1b8]
    cmp r0, #0x13
    beq L_02006d9c
    cmp r0, #0x14
    beq L_02006d9c
    mov r0, r6
    ldr r2, [r0, #0x0]
    mov r1, r5
    ldr r2, [r2, #0x138]
    blx r2
    mov r4, #0x1
    b L_02006d9c
L_02006b88:
    ldrb r0, [r6, #0xa8]
    cmp r0, #0x0
    beq L_02006d9c
    ldr r0, =data_0214876c
    ldr r1, =data_020eccb8
    mov r2, r4
    mov r3, r4
    str r4, [sp, #0x0]
    bl func_0207c284
    mov r0, r6
    bl func_02004398
    mov r4, #0x1
    b L_02006d9c
L_02006bbc:
    ldr r0, [r6, #0xa4]
    cmp r0, #0x0
    beq L_02006c08
    add r0, r0, #0x4
    add r1, r5, #0x8
    bl func_02000e8c
    ldr r0, [r6, #0xa4]
    add r1, r5, #0x14
    add r0, r0, #0x1c
    bl func_02000e8c
    add r0, r6, #0x198
    mov r1, #0x19c
    bl func_02027100
    cmp r0, #0x0
    beq L_02006c08
    mov r0, r6
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x100]
    blx r1
L_02006c08:
    mov r4, #0x1
    b L_02006d9c
L_02006c10:
    ldr r0, =data_0214876c
    ldr r1, =data_020eccc4
    mov r2, r4
    mov r3, r4
    str r4, [sp, #0x0]
    bl func_0207c284
    ldr r1, [r5, #0x4]
    mov r0, r6
    bl func_0200619c
    mov r0, r6
    bl func_02004980
    mov r4, #0x1
    b L_02006d9c
L_02006c44:
    mov r0, r6
    bl func_02004980
    mov r4, #0x1
    b L_02006d9c
L_02006c54:
    ldr r0, [r5, #0x0]
    cmp r0, #0x0
    beq L_02006d9c
    ldr r0, [r6, #0x1b8]
    cmp r0, #0x3
    beq L_02006c80
    cmp r0, #0x4
    beq L_02006d9c
    cmp r0, #0x5
    beq L_02006d9c
    b L_02006cb4
L_02006c80:
    cmp r1, #0xa
    beq L_02006d9c
    mov r0, r6
    bl func_02006428
    cmp r0, #0x0
    ble L_02006d9c
    mov r0, r6
    ldr r2, [r0, #0x0]
    mov r1, r5
    ldr r2, [r2, #0x138]
    blx r2
    mov r4, r0
    b L_02006d9c
L_02006cb4:
    mov r0, r6
    ldr r2, [r0, #0x0]
    mov r1, r5
    ldr r2, [r2, #0x138]
    blx r2
    mov r4, r0
    b L_02006d9c
L_02006cd0:
    add r0, r6, #0x198
    mov r1, #0x5f
    bl func_02027100
    cmp r0, #0x0
    beq L_02006cfc
    mov r0, r6
    bl func_02006428
    cmp r0, #0x0
    ble L_02006cfc
    mov r0, r6
    bl func_020059b8
L_02006cfc:
    mov r4, #0x1
    b L_02006d9c
L_02006d04:
    mov r0, r6
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xbc]
    blx r1
    cmp r0, #0x0
    beq L_02006d9c
    mov r0, r6
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x104]
    blx r1
    mov r4, #0x1
    b L_02006d9c
L_02006d34:
    ldr r0, [r6, #0x1b8]
    cmp r0, #0x13
    bne L_02006d9c
    mov r0, r6
    add r2, r6, #0x1e8
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02004080
    b L_02006d9c
L_02006d58:
    ldr r0, [r6, #0x1b8]
    sub r0, r0, #0x13
    cmp r0, #0x1
    bhi L_02006d9c
    mov r0, r6
    ldr r2, [r0, #0x0]
    mov r1, r5
    ldr r2, [r2, #0xe8]
    blx r2
    add r1, r6, #0x1e8
    mov r0, r4
    swpb r0, r0, [r1]
    b L_02006d9c
L_02006d8c:
    mov r0, r6
    mov r1, r5
    bl func_02062b00
    mov r4, r0
L_02006d9c:
    mov r0, r4
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
