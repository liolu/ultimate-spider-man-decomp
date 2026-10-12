#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffaeb4();
extern void func_02006428();
extern void func_02009c00();
extern void func_020101d8();
extern void func_02010314();
extern void func_020106a4();
extern void func_02020618();
extern void func_02046d84();
extern void func_0204eab0();
extern void func_0204eb30();
extern void func_020573a0();
extern void func_02057cc8();
extern void func_02057ddc();
extern void func_02058114();
extern void r2();
extern void r3();
extern char data_020b3718[];
extern char data_020d420c[];
extern char data_020d4230[];
extern char data_020d4254[];
extern char data_020f7568[];
extern char data_020f75e4[];
extern char data_020f75e8[];
extern char data_0213b6e0[];
extern char data_02143e44[];
// clang-format off
asm void func_02010fe0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r4, r0
    bl func_01ffaeb4
    ldr r2, [r4, #0x4c]
    ldr r1, [r0, #0x4c]
    subs r2, r2, r1
    ldr r1, =data_020f7568
    rsbmi r2, r2, #0x0
    ldr r1, [r1, #0x0]
    cmp r2, r1
    bge L_02011038
    ldr r1, [r4, #0x50]
    ldr r0, [r0, #0x50]
    subs r1, r1, r0
    ldr r0, =data_020f7568
    rsbmi r1, r1, #0x0
    ldr r0, [r0, #0x4]
    cmp r1, r0
    bge L_02011038
    mov r0, r4
    bl func_020106a4
L_02011038:
    ldr r0, =data_0213b6e0
    ldr r1, [r4, #0x780]
    ldr r0, [r0, #0x0]
    cmp r1, r0
    bgt L_02011090
    ldr r0, [r4, #0x700]
    cmp r0, #0x0
    beq L_02011060
    cmp r0, #0x3
    bne L_02011090
L_02011060:
    ldr r1, =0x76c
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02057ddc
    mov r0, r4
    bl func_02010314
    cmp r0, #0x0
    beq L_02011090
    mov r0, r4
    bl func_020101d8
L_02011090:
    ldr r0, =data_0213b6e0
    ldr r1, [r4, #0x77c]
    ldr r0, [r0, #0x0]
    cmp r1, r0
    bgt L_0201111c
    ldr r0, [r4, #0x700]
    cmp r0, #0x0
    beq L_020110b8
    cmp r0, #0x3
    bne L_0201111c
L_020110b8:
    ldr r1, =0x76c
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02057ddc
    ldr r0, =0x139
    bl func_02020618
    mov r5, r0
    mov r0, r4
    bl func_020573a0
    mov r1, r5
    mov r2, r0
    mov r0, #0x1
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    mov r0, r4
    ldr r3, =data_020b3718
    bl func_02057cc8
    mov r1, r0
    mov r0, r4
    mov r2, #0x2
    ldr r3, [r0, #0x0]
    ldr r3, [r3, #0x1a0]
    blx r3
L_0201111c:
    ldr r0, [r4, #0x700]
    cmp r0, #0x3
    bne L_02011130
    mov r0, r4
    bl func_02058114
L_02011130:
    ldr r0, [r4, #0x180]
    cmp r0, #0x1b0
    bne L_02011178
    mov r0, r4
    ldr r5, [r4, #0x748]
    bl func_02006428
    ldr r3, =data_020f75e8
    ldr r2, [r4, #0x748]
    ldr r1, =data_020f75e4
    ldr r3, [r3, r5, lsl #0x4]
    ldr r2, [r1, r2, lsl #0x4]
    add r1, r0, r3
    cmp r1, r2
    mov r0, r4
    movge r1, r2
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0xc4]
    blx r2
L_02011178:
    mov r0, r4
    bl func_02009c00
    ldrb r0, [r4, #0x78c]
    cmp r0, #0x0
    bne L_020111e8
    mov r0, r4
    bl func_02006428
    mov r5, r0
    ldr r0, =data_02143e44
    bl func_02046d84
    mov r1, #0x3
    mul r1, r0, r1
    mov r0, r1, asr #0x1
    add r0, r1, r0, lsr #0x1e
    cmp r5, r0, asr #0x2
    addgt sp, sp, #0xc
    ldmgtfd sp!, {r4, r5, lr}
    bxgt lr
    bl func_0204eb30
    ldr r1, =data_020d420c
    bl func_0204eab0
    ldr r0, =0x78c
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_020111e8:
    ldrb r0, [r4, #0x78d]
    cmp r0, #0x0
    bne L_02011244
    mov r0, r4
    bl func_02006428
    mov r5, r0
    ldr r0, =data_02143e44
    bl func_02046d84
    add r0, r0, r0, lsr #0x1f
    cmp r5, r0, asr #0x1
    addgt sp, sp, #0xc
    ldmgtfd sp!, {r4, r5, lr}
    bxgt lr
    bl func_0204eb30
    ldr r1, =data_020d4230
    bl func_0204eab0
    ldr r0, =0x78d
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02011244:
    ldrb r0, [r4, #0x78e]
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    mov r0, r4
    bl func_02006428
    mov r5, r0
    ldr r0, =data_02143e44
    bl func_02046d84
    mov r1, r0, asr #0x1
    add r0, r0, r1, lsr #0x1e
    cmp r5, r0, asr #0x2
    addgt sp, sp, #0xc
    ldmgtfd sp!, {r4, r5, lr}
    bxgt lr
    bl func_0204eb30
    ldr r1, =data_020d4254
    bl func_0204eab0
    ldr r0, =0x78e
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
