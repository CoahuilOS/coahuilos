// Template de comando
#include <stdint.h>

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern unsigned int INPUT_MAX;
extern u8 color;
extern unsigned int cy;
extern unsigned int cx;
extern void print(const char *s);
extern void perror(const char *s);
extern void clear(void);
extern void readline(char *buf, int max);
extern int strcmp(const char *a, const char *b);
extern void draw_tb(void);
extern void run_script(const char *path);

int temp(void)
{

    char line[INPUT_MAX];
    char *a;
    char *b;

    color = 0x1F;
    u8 oldcolor = color;
    print("         Menu de ayuda de CoahuilOS");
    color = 0x1D;
    print("\n");
    print("Controles y Atajos [Controls]\n");
    print("Sobre CoahuilOS [Abt]\n");
    print("Comando de ayuda [Cmds]\n");
    print("Keymap [KM]\n");
    print("Ubicacion de Memoria [Addr]\n");
    print("F.A.Q [FAQ]\n");
    color = oldcolor;
    for(;;)
    {

        draw_tb();
        color = oldcolor;
    }
}
