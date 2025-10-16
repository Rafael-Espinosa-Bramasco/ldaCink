#include <ldaCink_AEC.h>

void ldaCink_AEC_CursorUp(void)
{
    printf("\033[1A");
    return;
}
void ldaCink_AEC_CursorUpNum(size_t _times)
{
    if(_times == 0) return;
    printf("\033[%dA",_times);
    return;
}
void ldaCink_AEC_CursorDown(void)
{
    printf("\033[1B");
    return;
}
void ldaCink_AEC_CursorDownNum(size_t _times)
{
    if(_times == 0) return;
    printf("\033[%dB",_times);
    return;
}
void ldaCink_AEC_CursorRight(void)
{
    printf("\033[1C");
    return;
}
void ldaCink_AEC_CursorRightNum(size_t _times)
{
    if(_times == 0) return;
    printf("\033[%dC",_times);
    return;
}
void ldaCink_AEC_CursorLeft(void)
{
    printf("\033[1D");
    return;
}
void ldaCink_AEC_CursorLeftNum(size_t _times)
{
    if(_times == 0) return;
    printf("\033[%dD",_times);
    return;
}
void ldaCink_AEC_CursorNextLine(void)
{
    printf("\033[1E");
    return;
}
void ldaCink_AEC_CursorNextLineNum(size_t _times)
{
    if(_times == 0) return;
    printf("\033[%dE",_times);
    return;
}
void ldaCink_AEC_CursorPrevLine(void)
{
    printf("\033[1F");
    return;
}
void ldaCink_AEC_CursorPrevLineNum(size_t _times)
{
    if(_times == 0) return;
    printf("\033[%dF",_times);
    return;
}
void ldaCink_AEC_CursorToFirstColumn(void)
{
    printf("\033[1G");
    return;
}
void ldaCink_AEC_CursorToColumnNum(size_t _num)
{
    if(_num == 0) return;
    printf("\033[%dG",_num);
    return;
}
void ldaCink_AEC_CursorToXY(size_t _x, size_t _y)
{
    if(_x == 0 || _y == 0) return;
    printf("\033[%d;%dH",_y,_x);
    return;
}
void ldaCink_AEC_CursorToXYHVP(size_t _x, size_t _y)
{
    if(_x == 0 || _y == 0) return;
    printf("\033[%d;%df",_y,_x);
    return;
}
void ldaCink_AEC_CursorCleanToEnd(void)
{
    printf("\033[0J");
    return;
}
void ldaCink_AEC_CursorCleanToStart(void)
{
    printf("\033[1J");
    return;
}
void ldaCink_AEC_CleanScreen(void)
{
    printf("\033[2J");
    return;
}
void ldaCink_AEC_CleanScreenComplete(void)
{
    printf("\033[3J");
    return;
}
void ldaCink_AEC_CleanLineCursorEnd(void)
{
    printf("\033[0K");
    return;
}
void ldaCink_AEC_CleanLineCursorStart(void)
{
    printf("\033[1K");
    return;
}
void ldaCink_AEC_CleanLineComplete(void)
{
    printf("\033[2K");
    return;
}
void ldaCink_AEC_ScrollUp(void)
{
    printf("\033[1S");
    return;
}
void ldaCink_AEC_ScrollUpNumber(size_t _num)
{
    printf("\033[%dS",_num);
    return;
}
void ldaCink_AEC_ScrollDown(void)
{
    printf("\033[1T");
    return;
}
void ldaCink_AEC_ScrollDownNumber(size_t _num)
{
    printf("\033[%dT",_num);
    return;
}
void ldaCink_AEC_HideCursor(void)
{
    printf("\033[?25h");
    return;
}
void ldaCink_AEC_ShowCursor(void)
{
    printf("\033[?25l");
    return;
}
void ldaCink_AEC_ColorReset(void)
{
    printf("\033[0m");
    return;
}
void ldaCink_AEC_FontSetBold(void)
{
    printf("\033[1m");
    return;
}
void ldaCink_AEC_FontSetLight(void)
{
    printf("\033[2m");
    return;
}
void ldaCink_AEC_FontSetItalic(void)
{
    printf("\033[3m");
    return;
}
void ldaCink_AEC_FontSetUnderline(void)
{
    printf("\033[4m");
    return;
}
void ldaCink_AEC_FontSetSlowBlink(void)
{
    printf("\033[5m");
    return;
}
void ldaCink_AEC_FontSetRapidBlink(void)
{
    printf("\033[6m");
    return;
}
void ldaCink_AEC_ColorsInvert(void)
{
    printf("\033[7m");
    return;
}
void ldaCink_AEC_FontSetCrossedOut(void)
{
    printf("\033[9m");
    return;
}
void ldaCink_AEC_FontSetDefault(void)
{
    printf("\033[10m");
    return;
}
void ldaCink_AEC_FontSetAlternative(size_t _font)
{
    if(!(_font >= 11 && _font <= 19)) return;
    printf("\033[%dm",_font);
    return;
}
void ldaCink_AEC_FontSetNormalIntensity(void)
{
    printf("\033[21m");
    return;
}
void ldaCink_AEC_FontSetNotItalic(void)
{
    printf("\033[23m");
    return;
}
void ldaCink_AEC_FontSetNotBlinking(void)
{
    printf("\033[15m");
    return;
}
void ldaCink_AEC_FontSetNotUnderlined(void)
{
    printf("\033[24m");
    return;
}
void ldaCink_AEC_FontSetNotCrossedOut(void)
{
    printf("\033[29m");
    return;
}
void ldaCink_AEC_ForegroundSetColor(size_t _r, size_t _g, size_t _b)
{
    printf("\033[38;2;%d;%d;%dm");
    return;
}
void ldaCink_AEC_ForegroundSetColorNumber(size_t _num) //30 37
{
    if(!(_num >= 30 && _num <= 37)) return;
    printf("\033[%dm",_num);
    return;
}
void ldaCink_AEC_ForegroundSetDefaultColor(void)
{
    printf("\033[39m");
    return;
}
void ldaCink_AEC_BackgroundSetColor(size_t _r, size_t _g, size_t _b)
{
    printf("\033[48;2;%d;%d;%dm");
    return;
}
void ldaCink_AEC_BackgroundSetColorNum(size_t _num) // 40 47
{
    if(!(_num >= 40 && _num <= 47)) return;
    printf("\033[%dm",_num);
    return;
}
void ldaCink_AEC_BackgroundSetDefaultColor(void)
{
    printf("\033[49m");
    return;
}