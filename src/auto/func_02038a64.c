#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffc080();
extern void func_02033f90();
extern void func_02034460();
extern void func_02036a3c();
extern void func_02036a9c();
extern void func_02036b68();
extern void func_02038488();
extern void func_02046f7c();
extern void func_02046fcc();
extern void r1();
extern char data_020b5798[];
extern char data_020b57a0[];
extern char data_020b57ac[];
extern char data_020b57b8[];
extern char data_020b57c0[];
extern char data_020b57cc[];
extern char data_020b57f8[];
extern char data_020b5800[];
extern char data_020b580c[];
extern char data_020b5818[];
extern char data_020b5820[];
extern char data_020b582c[];
extern char data_020b5838[];
extern char data_020b5840[];
extern char data_020b584c[];
extern char data_020b5858[];
extern char data_020b5860[];
extern char data_020b586c[];
extern char data_020b5938[];
extern char data_020b5944[];
extern char data_020b5950[];
extern char data_020b595c[];
extern char data_020b5968[];
extern char data_020b5974[];
extern char data_02143e44[];
// clang-format off
asm void func_02038a64(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x48
    mov r4, r0
    mov r1, #0x0
    str r1, [r4, #0x1d4]
    add r2, r4, #0x1d8
    mov r3, #0x1
    swpb r1, r3, [r2]
    add r2, r4, #0x1c4
    swpb r1, r3, [r2]
    bl func_02034460
    add r1, r4, #0x1e0
    swpb r0, r0, [r1]
    mov r1, #0x0
    str r1, [r4, #0x230]
    mov r0, r4
    str r1, [r4, #0x234]
    bl func_02034460
    cmp r0, #0x0
    beq L_02038cf0
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x17c]
    blx r1
    cmp r0, #0x0
    beq L_02038ae8
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x130]
    blx r1
    add sp, sp, #0x48
    ldmfd sp!, {r4, lr}
    bx lr
L_02038ae8:
    ldr r0, [r4, #0x30]
    cmp r0, #0x4
    bne L_02038b5c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x80
    beq L_02038b5c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x170]
    blx r1
    cmp r0, #0x0
    beq L_02038b5c
    ldrb r0, [r4, #0x15e]
    ldr r1, =0x15e
    cmp r0, #0x0
    moveq r3, #0x1
    movne r3, #0x0
    add r2, r4, r1
    swpb r1, r3, [r2]
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x124]
    blx r1
    add sp, sp, #0x48
    ldmfd sp!, {r4, lr}
    bx lr
L_02038b5c:
    ldr r0, [r4, #0x30]
    cmp r0, #0x4
    bne L_02038bd0
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x80
    beq L_02038bd0
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x174]
    blx r1
    cmp r0, #0x0
    beq L_02038bd0
    ldrb r0, [r4, #0x15e]
    ldr r1, =0x15e
    cmp r0, #0x0
    moveq r3, #0x1
    movne r3, #0x0
    add r2, r4, r1
    swpb r1, r3, [r2]
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x11c]
    blx r1
    add sp, sp, #0x48
    ldmfd sp!, {r4, lr}
    bx lr
L_02038bd0:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x170]
    blx r1
    cmp r0, #0x0
    beq L_02038c5c
    mov r0, r4
    mov r1, #0x39
    bl func_02033f90
    ldr r0, =data_020b5798
    ldr r1, =data_020b57a0
    ldr r2, [r0, #0x0]
    add r3, r4, #0x7c
    str r2, [r4, #0x74]
    ldr r0, [r0, #0x4]
    ldr ip, =data_020b57ac
    str r0, [r4, #0x78]
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r3, r4, #0x88
    ldmia ip, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x0
    bl func_02036a9c
    mov r0, r4
    mov r1, #0x11
    mov r2, #0x0
    bl func_02036a3c
    mov r0, #0x12
    add sp, sp, #0x48
    str r0, [r4, #0x194]
    ldmfd sp!, {r4, lr}
    bx lr
L_02038c5c:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x174]
    blx r1
    cmp r0, #0x0
    addeq sp, sp, #0x48
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    mov r1, #0x3a
    bl func_02033f90
    ldr r0, =data_020b57b8
    ldr r1, =data_020b57c0
    ldr r2, [r0, #0x0]
    add r3, r4, #0x7c
    str r2, [r4, #0x74]
    ldr r0, [r0, #0x4]
    ldr ip, =data_020b57cc
    str r0, [r4, #0x78]
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r3, r4, #0x88
    ldmia ip, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x0
    bl func_02036a9c
    mov r0, r4
    mov r1, #0x11
    mov r2, #0x0
    bl func_02036a3c
    mov r0, #0x12
    add sp, sp, #0x48
    str r0, [r4, #0x194]
    ldmfd sp!, {r4, lr}
    bx lr
L_02038cf0:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x17c]
    blx r1
    cmp r0, #0x0
    beq L_02038d4c
    ldr r0, [r4, #0x30]
    cmp r0, #0x0
    bne L_02038d30
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x134]
    blx r1
    add sp, sp, #0x48
    ldmfd sp!, {r4, lr}
    bx lr
L_02038d30:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x12c]
    blx r1
    add sp, sp, #0x48
    ldmfd sp!, {r4, lr}
    bx lr
L_02038d4c:
    ldr r0, [r4, #0x30]
    cmp r0, #0x0
    bne L_020390d0
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x170]
    blx r1
    cmp r0, #0x0
    beq L_02038db8
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x80
    beq L_02038db8
    ldr r0, [r4, #0x1e8]
    cmp r0, #0x0
    addne sp, sp, #0x48
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x124]
    blx r1
    add sp, sp, #0x48
    ldmfd sp!, {r4, lr}
    bx lr
L_02038db8:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x170]
    blx r1
    cmp r0, #0x0
    beq L_02038f10
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x100]
    blx r1
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x40
    beq L_02038e40
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x17
    bl func_02036b68
    ldr r0, =data_020b5938
    add r3, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x0
    bl func_02036a9c
    add r1, sp, #0x0
    mov r0, r4
    mov r2, #0x0
    bl func_01ffc080
    b L_02038ec8
L_02038e40:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x16
    bl func_02036b68
    ldr r0, =data_02143e44
    bl func_02046fcc
    cmp r0, #0x0
    bne L_02038e74
    ldr r0, =data_02143e44
    bl func_02046f7c
    cmp r0, #0x0
    beq L_02038e98
L_02038e74:
    ldr r0, =data_020b5944
    add r3, sp, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r1, r3
    mov r2, #0x0
    bl func_01ffc080
    b L_02038eb8
L_02038e98:
    ldr r0, =data_020b5950
    add r3, sp, #0x18
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r1, r3
    mov r2, #0x0
    bl func_01ffc080
L_02038eb8:
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x0
    bl func_02036a9c
L_02038ec8:
    ldr r0, =data_020b57f8
    ldr r1, =data_020b5800
    ldr r2, [r0, #0x0]
    add r3, r4, #0x7c
    str r2, [r4, #0x74]
    ldr r0, [r0, #0x4]
    ldr ip, =data_020b580c
    str r0, [r4, #0x78]
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r3, r4, #0x88
    ldmia ip, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, #0x12
    add sp, sp, #0x48
    str r0, [r4, #0x194]
    ldmfd sp!, {r4, lr}
    bx lr
L_02038f10:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x174]
    blx r1
    cmp r0, #0x0
    beq L_02038f70
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x80
    beq L_02038f70
    ldr r0, [r4, #0x1e8]
    cmp r0, #0x0
    addne sp, sp, #0x48
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x11c]
    blx r1
    add sp, sp, #0x48
    ldmfd sp!, {r4, lr}
    bx lr
L_02038f70:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x174]
    blx r1
    cmp r0, #0x0
    addeq sp, sp, #0x48
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x100]
    blx r1
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x40
    beq L_02039000
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x1a
    bl func_02036b68
    ldr r0, =data_020b595c
    add r3, sp, #0x24
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x0
    bl func_02036a9c
    add r1, sp, #0x24
    mov r0, r4
    mov r2, #0x0
    bl func_01ffc080
    b L_02039088
L_02039000:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x19
    bl func_02036b68
    ldr r0, =data_02143e44
    bl func_02046fcc
    cmp r0, #0x0
    bne L_02039034
    ldr r0, =data_02143e44
    bl func_02046f7c
    cmp r0, #0x0
    beq L_02039058
L_02039034:
    ldr r0, =data_020b5968
    add r3, sp, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r1, r3
    mov r2, #0x0
    bl func_01ffc080
    b L_02039078
L_02039058:
    ldr r0, =data_020b5974
    add r3, sp, #0x3c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    mov r1, r3
    mov r2, #0x0
    bl func_01ffc080
L_02039078:
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x0
    bl func_02036a9c
L_02039088:
    ldr r0, =data_020b5838
    ldr r1, =data_020b5840
    ldr r2, [r0, #0x0]
    add r3, r4, #0x7c
    str r2, [r4, #0x74]
    ldr r0, [r0, #0x4]
    ldr ip, =data_020b584c
    str r0, [r4, #0x78]
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r3, r4, #0x88
    ldmia ip, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, #0x12
    add sp, sp, #0x48
    str r0, [r4, #0x194]
    ldmfd sp!, {r4, lr}
    bx lr
L_020390d0:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x40
    beq L_020391f8
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x20
    bne L_020391f8
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x10
    bne L_020391f8
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x170]
    blx r1
    cmp r0, #0x0
    bne L_02039148
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x174]
    blx r1
    cmp r0, #0x0
    beq L_020391f8
L_02039148:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x170]
    blx r1
    cmp r0, #0x0
    beq L_020391ac
    mov r0, r4
    mov r1, #0x3c
    bl func_02033f90
    ldr r0, =data_020b5858
    ldr r1, =data_020b5860
    ldr r2, [r0, #0x0]
    add r3, r4, #0x7c
    str r2, [r4, #0x74]
    ldr r0, [r0, #0x4]
    ldr ip, =data_020b586c
    str r0, [r4, #0x78]
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r3, r4, #0x88
    ldmia ip, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add sp, sp, #0x48
    ldmfd sp!, {r4, lr}
    bx lr
L_020391ac:
    mov r0, r4
    mov r1, #0x3b
    bl func_02033f90
    ldr r0, =data_020b5818
    ldr r1, =data_020b5820
    ldr r2, [r0, #0x0]
    add r3, r4, #0x7c
    str r2, [r4, #0x74]
    ldr r0, [r0, #0x4]
    ldr ip, =data_020b582c
    str r0, [r4, #0x78]
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r3, r4, #0x88
    ldmia ip, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add sp, sp, #0x48
    ldmfd sp!, {r4, lr}
    bx lr
L_020391f8:
    mov r0, r4
    bl func_02038488
    add sp, sp, #0x48
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
