/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_0209560c(void);
extern u32 func_02095620(u32 state);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_0209b3fc(void);
extern UnkSndCommand *data_02152aec;
extern UnkSndCommand *data_02152adc;

/* func_0207adcc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_0209b3fc(void) {
    UnkSndCommand *cmd;
    u32 enabled = func_0209560c();

    cmd = data_02152adc;
    if (cmd == 0) {
        func_02095620(enabled);
        return 0;
    }
    data_02152adc = cmd->next;
    if (data_02152adc == 0) {
        data_02152aec = 0;
    }
    func_02095620(enabled);
    return cmd;
}
