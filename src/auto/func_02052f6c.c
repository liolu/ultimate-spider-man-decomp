#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffaeb4();
extern void func_01ffafc0();
extern void func_01ffb114();
extern void func_01ffb540();
extern void func_01ffb558();
extern void func_0200c2e8();
extern void func_02014b1c();
extern void func_02018b80();
extern void func_0201ff80();
extern void func_02020554();
extern void func_02021938();
extern void func_020219e0();
extern void func_02021d44();
extern void func_02024ca4();
extern void func_02026798();
extern void func_0202f358();
extern void func_0202f5f0();
extern void func_0202f92c();
extern void func_02030a24();
extern void func_02030d30();
extern void func_02046fa4();
extern void func_02051dcc();
extern void func_02051ee4();
extern void func_020522ec();
extern void func_02052328();
extern void func_02052350();
extern void func_02052440();
extern void func_020537d8();
extern void func_0205c8dc();
extern void func_0205d5ec();
extern void func_02064fc8();
extern void func_02066778();
extern void func_02066d74();
extern void func_02070344();
extern void func_02077708();
extern void func_02077880();
extern void func_0207b564();
extern void func_0207c67c();
extern void func_0207d2b0();
extern void func_0207d838();
extern void func_0207e018();
extern void func_0207e1a4();
extern void func_02082204();
extern void func_02083d50();
extern void func_02086380();
extern void func_02086c8c();
extern void func_02086d90();
extern void func_0208c600();
extern void r1();
extern void r2();
extern char data_020b4680[];
extern char data_02116ad8[];
extern char data_0211d784[];
extern char data_0213ade4[];
extern char data_0213b6e0[];
extern char data_0213e270[];
extern char data_0213e738[];
extern char data_0213e8d0[];
extern char data_0213ea68[];
extern char data_02143e44[];
extern char data_02146058[];
extern char data_02146128[];
extern char data_0214868c[];
extern char data_02150bb8[];
extern char data_02150c78[];
// clang-format off
asm void func_02052f6c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    ldr r2, [r0, #0x0]
    mov r5, r0
    ldr r2, [r2, #0x38]
    mov r6, r1
    blx r2
    ldrb r0, [r5, #0x40]
    mov r4, #0x0
    cmp r0, #0x0
    bne L_02053024
    ldr r0, =data_02143e44
    ldr r1, [r0, #0x4]
    cmp r1, #0x13
    beq L_02052fb4
    sub r0, r1, #0x7
    cmp r0, #0x1
    bhi L_02052fc8
L_02052fb4:
    mov r0, #0x2
    mov r1, #0x4b000
    mov r2, #0x0
    bl func_02024ca4
    b L_02052ff4
L_02052fc8:
    cmp r1, #0x11
    bne L_02052fe4
    mov r2, r4
    mov r0, #0x2
    mov r1, #0x2bc00
    bl func_02024ca4
    b L_02052ff4
L_02052fe4:
    mov r2, r4
    mov r0, #0x2
    mov r1, #0x28000
    bl func_02024ca4
L_02052ff4:
    ldrb r0, [r5, #0x6b]
    cmp r0, #0x0
    beq L_02053024
    mov r0, #0x2
    bl func_01ffb558
    mov r0, #0x20
    bl func_02064fc8
    movs r4, r0
    beq L_02053020
    bl func_0207e1a4
    mov r4, r0
L_02053020:
    bl func_01ffb540
L_02053024:
    bl func_0202f92c
    ldr r0, =data_02150bb8
    ldrb r1, [r0, #0x1]
    cmp r1, #0x0
    bne L_02053064
    ldr r0, =data_02143e44
    bl func_02046fa4
    cmp r0, #0x0
    beq L_02053078
    ldr r0, =data_02146128
    bl func_0205c8dc
    cmp r0, #0x0
    bne L_02053078
    mov r0, #0x1
    bl func_0207d838
    b L_02053078
L_02053064:
    bl func_02082204
    cmp r0, #0x1
    bne L_02053078
    mov r0, #0x1
    bl func_0207d838
L_02053078:
    ldr r0, [r5, #0x6c]
    cmp r0, #0x0
    bne L_02053094
    ldr r0, =data_02116ad8
    mov r1, #0x0
    bl func_0207c67c
    str r0, [r5, #0x6c]
L_02053094:
    ldr r0, [r5, #0x70]
    cmp r0, #0x0
    bne L_020530b0
    ldr r0, =data_0213ade4
    ldr r0, [r0, #0x0]
    bl func_02086380
    str r0, [r5, #0x70]
L_020530b0:
    cmp r6, #0x0
    ble L_020530c0
    ldr r0, =data_020b4680
    bl func_0202f5f0
L_020530c0:
    bl func_02026798
    bl func_02021d44
    mov r0, r5
    mov r1, r6
    bl func_02014b1c
    ldr r0, =data_0213b6e0
    mov r1, #0x0
    str r1, [r0, #0x0]
    bl func_020537d8
    ldr r0, [r5, #0x3c]
    ldr r0, [r0, #0x8]
    bl func_0205d5ec
    bl func_02066d74
    ldr r0, =data_0213e738
    bl func_02030d30
    ldr r0, =data_0213ea68
    bl func_02030d30
    ldr r0, =data_0213e270
    bl func_02030d30
    ldr r0, =data_0213e8d0
    bl func_02030d30
    ldr r0, =data_02150c78
    ldr r1, [r5, #0x3c]
    ldr r1, [r1, #0x0]
    bl func_0208c600
    bl func_02083d50
    ldr r0, =0x808
    bl func_02064fc8
    cmp r0, #0x0
    beq L_0205313c
    bl func_02086c8c
L_0205313c:
    mov r0, #0x4
    bl func_02064fc8
    cmp r0, #0x0
    beq L_02053150
    bl func_02086d90
L_02053150:
    mov r0, #0xc
    bl func_02064fc8
    str r0, [r5, #0x48]
    ldr r0, [r5, #0x48]
    ldr r1, =data_0211d784
    mov r2, #0x0
    str r1, [r0, #0x0]
    ldr r1, [r5, #0x48]
    mov r0, #0xc
    strh r2, [r1, #0x4]
    ldr r1, [r5, #0x48]
    strh r2, [r1, #0x6]
    ldr r1, [r5, #0x48]
    str r2, [r1, #0x8]
    bl func_02064fc8
    movs r1, r0
    beq L_020531a0
    ldr r1, [r5, #0x48]
    bl func_0207e018
    mov r1, r0
L_020531a0:
    ldr r2, =data_02146058
    mov r0, r5
    str r1, [r2, #0x0]
    mov r2, #0x1
    bl func_0202f358
    ldr r1, [r5, #0x3c]
    add r0, sp, #0x4
    ldr r1, [r1, #0x14]
    ldr r1, [r1, #0x0]
    ldr r1, [r1, #0x0]
    bl func_0207d2b0
    mov r0, #0x1c
    bl func_02064fc8
    cmp r0, #0x0
    beq L_020531e8
    add r2, sp, #0x4
    mov r1, #0x0
    bl func_02077880
L_020531e8:
    str r0, [r5, #0x44]
    ldr r1, [r5, #0x44]
    mov r0, r5
    mov r2, #0x0
    bl func_0202f358
    ldr r0, =0xb88
    bl func_02064fc8
    movs r1, r0
    beq L_0205322c
    ldr r3, [r5, #0x3c]
    mov r1, #0x1
    str r1, [sp, #0x0]
    ldr r1, [r3, #0x2c]
    ldr r2, [r3, #0x30]
    ldr r3, [r3, #0xc]
    bl func_0207b564
    mov r1, r0
L_0205322c:
    ldr r0, [r5, #0x44]
    mov r2, #0x0
    mov r3, #0x1
    bl func_02077708
    ldr r0, [r5, #0x3c]
    ldr r0, [r0, #0x20]
    bl func_02020554
    bl func_02018b80
    mov r0, r5
    ldr r1, =data_02143e44
    ldr r1, [r1, #0x4]
    bl func_02051ee4
    ldr r0, =data_02143e44
    bl func_02046fa4
    mov r1, r0
    mov r0, r5
    bl func_02051dcc
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r0, #0x1
    mov r2, r1
    mov r3, r1
    bl func_0201ff80
    bl func_02066778
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r0, #0x1
    mov r2, r1
    mov r3, r1
    bl func_0201ff80
    bl func_020219e0
    mov r0, #0x0
    bl func_01ffafc0
    bl func_01ffb114
    cmp r0, #0x0
    beq L_0205332c
    bl func_01ffaeb4
    ldr r6, =data_0214868c
    ldr r3, [r0, #0x50]
    ldrh r2, [r0, #0x3a]
    ldrh r1, [r0, #0x38]
    ldrb r11, [r0, #0x15e]
    ldr r9, [r0, #0x4c]
    mov r8, #0x0
    add r0, r6, #0x40
    add ip, r6, #0x42
    add lr, r6, #0x48
    rsb r10, r3, #0x0
    add r3, r6, #0x41
    mov r7, #0x1
    swpb r11, r11, [r0]
    swpb r0, r7, [r3]
    swpb r0, r8, [ip]
    swpb r0, r8, [lr]
    str r9, [r6, #0x4]
    str r10, [r6, #0x8]
    str r1, [r6, #0xc]
    str r2, [r6, #0x10]
    str r8, [r6, #0x14]
    str r8, [r6, #0x18]
    str r8, [r6, #0x1c]
    str r8, [r6, #0x20]
    str r8, [r6, #0x24]
    str r8, [r6, #0x3c]
L_0205332c:
    ldr r1, [r5, #0x3c]
    mov r0, r5
    bl func_02052440
    bl func_02066778
    bl func_02021938
    mov r0, #0x18
    bl func_02064fc8
    cmp r0, #0x0
    beq L_02053354
    bl func_0200c2e8
L_02053354:
    str r0, [r5, #0x38]
    ldr r1, [r5, #0x38]
    mov r0, r5
    mov r2, #0x1
    bl func_0202f358
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x40]
    blx r1
    cmp r4, #0x0
    beq L_02053390
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x4]
    blx r1
L_02053390:
    ldr r0, [r5, #0x3c]
    ldr r1, [r0, #0x34]
    cmp r1, #0x0
    beq L_020533a8
    mov r0, r5
    bl func_02052350
L_020533a8:
    bl func_02030a24
    mov r1, #0x0
    strh r1, [r0, #0x0]
    add r0, r5, #0x7c
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    mov r0, r5
    bl func_02052328
    mov r0, r5
    bl func_020522ec
    mov r1, #0x1
    mov r0, #0x2
    mov r2, r1
    bl func_02070344
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
