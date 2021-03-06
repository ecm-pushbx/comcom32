#ifndef __CMDBUF_H__
#define __CMDBUF_H__

/*
 * Command parser defines
 */
#define MAX_CMD_BUFLEN 128        // Define max command length

enum { UP, LEFT, RIGHT, DOWN, HOME, END };

unsigned int cmdbuf_get_tail(void);
void cmdbuf_move(char *cmd_buf, int direction);
void cmdbuf_delch(char *cmd_buf);
char cmdbuf_putch(char *cmd_buf, unsigned int buf_size, char ch, unsigned short flag);
char *cmdbuf_gets(char *cmd_buf);

#endif
