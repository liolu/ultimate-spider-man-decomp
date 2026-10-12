#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9e94();
extern void func_01ff9ea0();
extern void func_02061ee4();
extern void func_0206214c();
extern void func_020621d4();
extern void func_02062208();
extern void func_0206232c();
extern void func_020624bc();
extern void func_020626a0();
extern void func_020627ac();
// clang-format off
asm void func_020628c0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r1, [r4, #0x224]
    cmp r1, #0x0
    beq L_020628e8
    bl func_01ff9ea0
    add r1, r4, #0x224
    mov r0, #0x0
    swpb r0, r0, [r1]
    b L_02062908
L_020628e8:
    ldrb r1, [r4, #0x225]
    cmp r1, #0x0
    beq L_02062908
    bl func_01ff9e94
    ldr r0, =0x225
    mov r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
L_02062908:
    ldr r0, [r4, #0x1d0]
    cmp r0, #0x8
    addls pc, pc, r0, lsl #0x2
    b L_020629b4
L_02062918:
    b L_0206293c
    b L_0206294c
    b L_0206295c
    b L_0206296c
    b L_0206297c
    b L_0206298c
    b L_0206299c
    b L_020629ac
    b L_020629ac
L_0206293c:
    mov r0, r4
    bl func_020627ac
    ldmfd sp!, {r4, lr}
    bx lr
L_0206294c:
    mov r0, r4
    bl func_0206232c
    ldmfd sp!, {r4, lr}
    bx lr
L_0206295c:
    mov r0, r4
    bl func_020621d4
    ldmfd sp!, {r4, lr}
    bx lr
L_0206296c:
    mov r0, r4
    bl func_0206214c
    ldmfd sp!, {r4, lr}
    bx lr
L_0206297c:
    mov r0, r4
    bl func_02061ee4
    ldmfd sp!, {r4, lr}
    bx lr
L_0206298c:
    mov r0, r4
    bl func_020624bc
    ldmfd sp!, {r4, lr}
    bx lr
L_0206299c:
    mov r0, r4
    bl func_020626a0
    ldmfd sp!, {r4, lr}
    bx lr
L_020629ac:
    mov r0, r4
    bl func_02062208
L_020629b4:
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
