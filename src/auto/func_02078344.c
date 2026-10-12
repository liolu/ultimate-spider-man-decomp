#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205ab84();
extern void func_0205c2bc();
extern void func_0205c2cc();
extern void func_0206f5a0();
extern void func_0206f618();
extern void func_020708cc();
extern void func_02070944();
extern void func_02070950();
extern void func_02070f20();
extern void func_02078cc8();
extern void func_02078da0();
extern void func_02079920();
extern void func_02079b6c();
extern void func_02079cc8();
extern void func_02079e88();
extern void func_0207a29c();
extern void func_0207ae04();
extern void func_0207cdc8();
extern void func_02082e38();
extern void func_020909c4();
extern void func_020910f0();
extern void func_020911d0();
extern void func_02091204();
extern void func_02091414();
extern char data_02148658[];
extern char data_0214865c[];
extern char data_02148660[];
extern char data_02148668[];
extern char data_0214866c[];
extern char data_0214868c[];
// clang-format off
asm void func_02078344(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x90
    mov r4, r0
    add r0, r4, #0x1d0
    bl func_02070944
    ldr r1, [r4, #0x470]
    add r0, r4, #0x320
    cmp r0, r1
    bne L_02078388
    bl func_02070944
    ldrb r0, [r4, #0x474]
    cmp r0, #0x0
    bne L_02078388
    ldr r0, [r4, #0x46c]
    cmp r0, #0x0
    addeq r0, r4, #0x1d0
    streq r0, [r4, #0x470]
L_02078388:
    mov r0, #0x0
    str r0, [r4, #0xb84]
    ldr r1, [r4, #0x470]
    ldr r0, [r1, #0xec]
    cmp r0, #0x0
    ble L_020783d4
    ldr r0, =data_0214868c
    ldr r1, [r1, #0xf4]
    ldr r2, [r0, #0x4]
    ldr r0, =data_0214868c
    cmp r2, r1
    movle r2, r1
    str r2, [r0, #0x4]
    ldr r0, [r4, #0x470]
    ldr r0, [r0, #0xf8]
    cmp r2, r0
    movge r2, r0
    ldr r0, =data_0214868c
    str r2, [r0, #0x4]
L_020783d4:
    mov r0, r4
    bl func_02079cc8
    mov r0, r4
    bl func_02079b6c
    mvn r1, #0x0
    ldr r0, =data_0214868c
    str r1, [sp, #0x18]
    ldr r2, [r0, #0x10]
    str r1, [sp, #0x1c]
    ldr r0, [r4, #0x470]
    mov r1, r2, asr #0x1f
    mov r5, r1, lsl #0xb
    mov r3, r2, lsl #0xb
    mov r1, #0x800
    adds r1, r3, r1
    orr r5, r5, r2, lsr #0x15
    ldr r3, [r0, #0xe8]
    ldr r2, [r0, #0x64]
    adc r5, r5, #0x0
    mov r1, r1, lsr #0xc
    cmp r2, r3
    orr r1, r1, r5, lsl #0x14
    movle r2, r3
    ldr r5, [r0, #0xc8]
    ldr r3, [r0, #0xd4]
    ldr r6, [r0, #0xcc]
    add r3, r5, r3
    ldr r5, [r0, #0xd0]
    add r3, r6, r3
    add r3, r5, r3
    cmp r2, r3
    movle r2, r3
    ldr r3, =data_0214868c
    ldr r5, [r0, #0xb8]
    ldr r0, [r3, #0x8]
    ldr r3, [r3, #0x4]
    add r1, r0, r1
    add r0, r1, r2
    str r0, [sp, #0x0]
    sub r0, r1, r2
    str r0, [sp, #0x4]
    str r1, [sp, #0x8]
    mov r1, #0x0
    str r1, [sp, #0xc]
    add r0, sp, #0x18
    str r0, [sp, #0x10]
    add r1, sp, #0x1c
    str r1, [sp, #0x14]
    sub r2, r3, r5
    mov r0, r4
    add r3, r3, r5
    mov r1, #0x1
    bl func_02079e88
    ldr r1, [sp, #0x18]
    ldr r2, [sp, #0x1c]
    mov r0, r4
    bl func_02078da0
    ldr r1, =data_0214868c
    mov r2, #0x1000
    ldr r1, [r1, #0x44]
    str r0, [sp, #0x20]
    str r2, [sp, #0x24]
    cmp r1, #0x0
    beq L_020784e8
    add r1, sp, #0x24
    add r2, sp, #0x20
    mov r0, r4
    bl func_02079920
    b L_02078520
L_020784e8:
    ldr r0, [r4, #0x470]
    ldr r5, [r4, #0x51c]
    ldr r1, [r4, #0x520]
    ldr r0, [r0, #0x114]
    sub r3, r1, r5
    smull r2, r1, r3, r0
    mov r0, #0x800
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r5, r1
    str r0, [sp, #0x24]
    str r0, [r4, #0x51c]
L_02078520:
    ldr r1, =data_02148660
    ldr r2, [r1, #0x0]
    ands r0, r2, #0x1
    orreq r2, r2, #0x1
    streq r2, [r1, #0x0]
    ldr r1, =data_02148668
    ldreq r0, =data_0214865c
    moveq r3, #0x1000
    ldr r2, [r1, #0x0]
    streq r3, [r0, #0x0]
    ands r0, r2, #0x1
    orreq r2, r2, #0x1
    streq r2, [r1, #0x0]
    ldr r1, =data_0214865c
    ldreq r0, =data_02148658
    moveq r3, #0x1b
    streq r3, [r0, #0x0]
    ldr r0, [r4, #0x470]
    ldr r6, [r1, #0x0]
    mov r2, #0x1000
    ldr r0, [r0, #0x13c]
    sub r5, r2, r6
    smull r3, r2, r5, r0
    mov r0, #0x800
    adds r3, r3, r0
    adc r0, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    add r0, r6, r2
    str r0, [r1, #0x0]
    subs r1, r0, #0x1000
    ldr r0, [r4, #0x470]
    rsbmi r1, r1, #0x0
    ldr r0, [r0, #0x140]
    mov r3, #0x0
    cmp r1, r0
    ldrlt r0, =data_0214865c
    movlt r1, #0x1000
    strlt r1, [r0, #0x0]
    ldr r0, =data_0214865c
    mov r2, #0x1000
    ldr r1, [r0, #0x0]
    ldr r0, =0x1f64
    mov r5, r1, asr #0x1f
    umull r7, r6, r1, r0
    mla r6, r1, r3, r6
    mov r1, #0x800
    adds r1, r7, r1
    mla r6, r5, r0, r6
    adc r0, r6, #0x0
    mov r1, r1, lsr #0xc
    str r2, [sp, #0x2c]
    cmp r2, #0x80000
    orr r1, r1, r0, lsl #0x14
    bhs L_02078608
    mov r0, #0x1000000
    bl func_02082e38
    b L_02078644
L_02078608:
    ldr r5, =0x4000280
    mov r0, #0x1
    ldr r2, =0x4000290
    strh r0, [r5, #0x0]
    mov r0, #0x1000000
    str r0, [r2, #0x0]
    ldr r0, =0x4000298
    str r3, [r2, #0x4]
    str r1, [r0, #0x0]
    str r3, [r0, #0x4]
L_02078630:
    ldrh r0, [r5, #0x0]
    ands r0, r0, #0x8000
    bne L_02078630
    ldr r0, =0x40002a0
    ldr r0, [r0, #0x0]
L_02078644:
    bl func_02091414
    ldr r1, =data_02148658
    str r0, [sp, #0x30]
    str r0, [r1, #0x0]
    cmp r0, #0x80000
    bhs L_0207867c
    ldr r2, =0xa2f96525
    mov r3, r0, lsl #0xc
    smull r1, r5, r2, r3
    add r5, r5, r0, lsl #0xc
    mov r5, r5, asr #0xe
    mov r0, r3, lsr #0x1f
    add r5, r0, r5
    b L_020786cc
L_0207867c:
    ldr r3, =0x4000280
    mov r2, r0, asr #0x1f
    mov r1, #0x1
    mov r5, r2, lsl #0xc
    ldr r2, =0x4000290
    strh r1, [r3, #0x0]
    mov r1, r0, lsl #0xc
    str r1, [r2, #0x0]
    orr r5, r5, r0, lsr #0x14
    ldr r1, =0x6488
    ldr r0, =0x4000298
    str r5, [r2, #0x4]
    str r1, [r0, #0x0]
    mov r1, #0x0
    str r1, [r0, #0x4]
L_020786b8:
    ldrh r0, [r3, #0x0]
    ands r0, r0, #0x8000
    bne L_020786b8
    ldr r0, =0x40002a0
    ldr r5, [r0, #0x0]
L_020786cc:
    mov r0, r5
    bl func_0205c2cc
    mov r6, r0, asr #0x12
    mov r0, r5
    bl func_0205c2bc
    ldr r2, =data_02148658
    ldr r1, =data_0214866c
    ldr r2, [r2, #0x0]
    str r6, [sp, #0x34]
    str r2, [r1, #0x14]
    cmp r6, #0x80000
    mov r5, r0, asr #0x12
    bhs L_02078710
    mov r1, r5
    mov r0, r6, lsl #0xc
    bl func_02082e38
    b L_0207875c
L_02078710:
    ldr r3, =0x4000280
    mov r0, r6, asr #0x1f
    mov r7, #0x1
    mov r2, r0, lsl #0xc
    ldr r1, =0x4000290
    strh r7, [r3, #0x0]
    mov r0, r6, lsl #0xc
    str r0, [r1, #0x0]
    orr r2, r2, r6, lsr #0x14
    ldr r0, =0x4000298
    str r2, [r1, #0x4]
    str r5, [r0, #0x0]
    mov r1, #0x0
    str r1, [r0, #0x4]
L_02078748:
    ldrh r0, [r3, #0x0]
    ands r0, r0, #0x8000
    bne L_02078748
    ldr r0, =0x40002a0
    ldr r0, [r0, #0x0]
L_0207875c:
    ldr r2, =data_0214866c
    ldr r1, =data_0214865c
    str r0, [r2, #0x10]
    ldr r2, [r4, #0x470]
    ldr r0, [r1, #0x0]
    ldr r1, [r2, #0x144]
    sub r2, r0, #0x1000
    smull r7, r3, r2, r1
    mov r1, #0x800
    adds r7, r7, r1
    adc r2, r3, #0x0
    mov r3, r7, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    ldr r2, [sp, #0x24]
    add r0, r0, r3
    smull r3, r0, r2, r0
    adds r1, r3, r1
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0x24]
    mov r0, #0x400
    str r0, [sp, #0x0]
    ldr r1, [r4, #0x1cc]
    mov r0, #0x1000
    str r1, [sp, #0x4]
    str r0, [sp, #0x8]
    ldr r1, [r4, #0x1c4]
    add r2, r4, #0x4
    mov r0, #0xe0
    mla r0, r1, r0, r2
    add r7, r0, #0x60
    ldr r3, =0x1547
    mov r0, r4
    mov r1, r6
    mov r2, r5
    str r7, [sp, #0xc]
    bl func_0206f618
    mov r0, #0x400
    str r0, [sp, #0x0]
    ldr r1, [r4, #0x1cc]
    ldr r0, =0xda8
    str r1, [sp, #0x4]
    str r0, [sp, #0x8]
    ldr r1, [r4, #0x1c4]
    add r2, r4, #0x4
    mov r0, #0xe0
    mla r0, r1, r0, r2
    add r7, r0, #0xa0
    ldr r3, =0x1547
    mov r0, r4
    mov r1, r6
    mov r2, r5
    str r7, [sp, #0xc]
    bl func_0206f618
    mov r0, r4
    bl func_0207ae04
    ldr r2, [r4, #0x470]
    ldr r3, [r4, #0x484]
    ldr r1, [r2, #0x28]
    ldr r0, [r4, #0x488]
    smull r6, r5, r3, r1
    mov r1, #0x800
    adds r6, r6, r1
    adc r3, r5, #0x0
    mov r5, r6, lsr #0xc
    orr r5, r5, r3, lsl #0x14
    ldr r2, [r2, #0x2c]
    sub r5, r5, r0
    smull r3, r2, r5, r2
    adds r3, r3, r1
    adc r2, r2, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    add r0, r0, r3
    str r0, [r4, #0x488]
    ldr r2, [r4, #0x470]
    ldr r5, [r4, #0x484]
    ldr r3, [r2, #0x30]
    ldr r0, [r4, #0x48c]
    smull r6, r3, r5, r3
    adds r5, r6, r1
    adc r3, r3, #0x0
    mov r5, r5, lsr #0xc
    orr r5, r5, r3, lsl #0x14
    ldr r2, [r2, #0x34]
    sub r5, r5, r0
    smull r3, r2, r5, r2
    adds r3, r3, r1
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r0, r0, r2
    str r0, [r4, #0x48c]
    ldr r2, [sp, #0x20]
    ldr r0, [r4, #0x488]
    ldr r1, =data_0214866c
    add r0, r2, r0
    str r0, [r1, #0x4]
    ldr r3, [r4, #0x470]
    add r2, sp, #0x38
    str r2, [sp, #0x0]
    ldr r1, =data_0214868c
    ldr r2, [r3, #0x20]
    ldr r1, [r1, #0x8]
    ldr r3, [r3, #0x24]
    bl func_0205ab84
    mov r0, #0x0
    str r0, [sp, #0x28]
    add r1, sp, #0x28
    str r1, [sp, #0x0]
    add r3, sp, #0x5c
    ldr r1, [sp, #0x18]
    ldr r2, [sp, #0x1c]
    mov r0, r4
    add r3, r3, #0x8
    bl func_0207a29c
    ldr r2, [r4, #0x470]
    ldr r0, [r2, #0xf0]
    cmp r0, #0x0
    ble L_0207895c
    ldr r0, [r2, #0xfc]
    ldr r2, [sp, #0x64]
    add r1, sp, #0x5c
    cmp r2, r0
    add r1, r1, #0x8
    movle r2, r0
    str r2, [r1, #0x0]
L_0207895c:
    mov r0, r4
    bl func_02078cc8
    ldr r1, [r4, #0x470]
    mov r6, r0
    add r5, sp, #0x68
    ldmia r1, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    ldr r2, [sp, #0x68]
    ldr r1, [sp, #0x24]
    mov r0, #0x800
    smull r3, r1, r2, r1
    adds r2, r3, r0
    adc r0, r1, #0x0
    mov r3, r2, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    ldr r2, =data_0214866c
    add r1, sp, #0x38
    str r3, [r2, #0x0]
    mov r0, r5
    mov r2, r5
    str r3, [sp, #0x68]
    bl func_020909c4
    add r1, sp, #0x5c
    mov r0, r5
    mov r2, r5
    bl func_02091204
    mov r1, #0x0
    ldr r2, [sp, #0x70]
    ldr r0, =data_0214866c
    str r1, [sp, #0x74]
    str r2, [r0, #0x8]
    mov r0, #0x1000
    str r1, [sp, #0x78]
    str r0, [sp, #0x7c]
    ldr r0, [r4, #0x470]
    add r3, sp, #0x80
    add r0, r0, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r5, sp, #0x80
    ldr r1, [sp, #0x84]
    ldr r0, [r4, #0x48c]
    mov r2, r5
    add r0, r1, r0
    str r0, [sp, #0x84]
    ldr r0, [r4, #0x470]
    ldr r0, [r0, #0x48]
    cmp r0, #0x0
    ldrgt r1, [sp, #0x88]
    ldrgt r0, [sp, #0x28]
    addgt r0, r1, r0
    strgt r0, [sp, #0x88]
    ldr r0, [sp, #0x88]
    add r1, sp, #0x38
    add r3, r0, r6
    mov r0, r5
    str r3, [sp, #0x88]
    bl func_020909c4
    add r1, sp, #0x5c
    mov r0, r5
    mov r2, r5
    bl func_02091204
    ldr r2, [sp, #0x88]
    ldr r0, =data_0214866c
    add r3, r4, #0x4
    str r2, [r0, #0xc]
    ldr r2, [r4, #0x1c4]
    mov r0, #0xe0
    mov r1, r5
    mla r5, r2, r0, r3
    add r3, r5, #0xc
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r1, sp, #0x68
    mov r0, r3
    mov r2, r3
    bl func_020911d0
    add lr, r5, #0xc
    ldr r1, [lr, #0x4]
    ldr r2, [lr, #0x0]
    smull r0, r7, r1, r1
    smlal r0, r7, r2, r2
    ldr r1, [lr, #0x8]
    mov r2, #0x2
    smlal r0, r7, r1, r1
    ldr r1, =0x4000280
    mov r6, #0x0
    strh r2, [r1, #0x0]
    ldr r2, =0x4000290
    mov r3, #0x1000000
    str r6, [r2, #0x0]
    str r3, [r2, #0x4]
    ldr r1, =0x4000298
    ldr r3, =0x40002b0
    str r0, [r1, #0x0]
    str r7, [r1, #0x4]
    mov r1, r7, lsl #0x2
    mov r2, #0x1
    strh r2, [r3, #0x0]
    orr r1, r1, r0, lsr #0x1e
    mov r2, r0, lsl #0x2
    ldr r0, =0x40002b8
    str r2, [r0, #0x0]
    str r1, [r0, #0x4]
L_02078afc:
    ldrh r0, [r3, #0x0]
    ands r0, r0, #0x8000
    bne L_02078afc
    ldr r0, =0x40002b4
    ldr r0, [r0, #0x0]
    ldr r2, =0x4000280
L_02078b14:
    ldrh r1, [r2, #0x0]
    ands r1, r1, #0x8000
    bne L_02078b14
    ldr r7, =0x40002a0
    mov r1, r0, asr #0x1f
    ldr r6, [r7, #0x0]
    ldr r2, [lr, #0x0]
    umull ip, r3, r6, r0
    mla r3, r6, r1, r3
    ldr r9, [r7, #0x4]
    mov r1, r2, asr #0x1f
    umull r8, r7, ip, r2
    mla r7, ip, r1, r7
    mla r3, r9, r0, r3
    mov r6, #0x0
    mla r7, r3, r2, r7
    adds r0, r8, r6
    adc r0, r7, #0x1000
    mov r0, r0, asr #0xd
    str r0, [lr, #0x0]
    ldr r2, [lr, #0x4]
    add r1, sp, #0x74
    umull r0, r7, ip, r2
    adds r0, r0, r6
    mov r0, r2, asr #0x1f
    mla r7, ip, r0, r7
    mla r7, r3, r2, r7
    adc r0, r7, #0x1000
    mov r0, r0, asr #0xd
    str r0, [lr, #0x4]
    ldr r8, [lr, #0x8]
    add r0, r5, #0xc
    umull r10, r9, ip, r8
    mov r7, r8, asr #0x1f
    mla r9, ip, r7, r9
    mla r9, r3, r8, r9
    adds r6, r10, r6
    adc r3, r9, #0x1000
    mov r3, r3, asr #0xd
    mov r2, r5
    str r3, [lr, #0x8]
    bl func_020910f0
    mov r0, r5
    add r1, r5, #0xc
    add r2, r5, #0x18
    bl func_020910f0
    add ip, r5, #0x24
    add lr, sp, #0x68
    ldmia lr, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    ldr r0, [r4, #0x1c4]
    add r6, r4, #0x4
    mov r5, #0xe0
    mla r5, r0, r5, r6
    add r0, r5, #0x30
    add r3, sp, #0x80
    mov r1, lr
    add r2, sp, #0x74
    str r0, [sp, #0x0]
    bl func_0207cdc8
    ldr r1, [r4, #0x470]
    ldr r0, =data_0214866c
    ldr r1, [r1, #0x18]
    str r1, [r0, #0x18]
    ldr r1, [r4, #0x470]
    ldr r1, [r1, #0x1c]
    str r1, [r0, #0x1c]
    ldrb r0, [r4, #0x47c]
    cmp r0, #0x0
    beq L_02078c5c
    ldr r0, [r4, #0x478]
    mov r1, #0xf0000002
    bl func_02070f20
    mov r1, r0
    ldr r0, [r4, #0x470]
    bl func_02070950
    ldr r0, [r4, #0x470]
    bl func_020708cc
    ldr r0, =0x47c
    mov r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
L_02078c5c:
    ldr r1, =data_0214868c
    mov r0, r4
    ldr r1, [r1, #0x4]
    str r1, [r4, #0x480]
    bl func_0206f5a0
    add sp, sp, #0x90
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on
