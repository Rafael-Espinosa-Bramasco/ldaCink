#ifndef LDACINK_AEC_H
#define LDACINK_AEC_H

#include <stdio.h>

void ldaCink_AEC_CursorUp(void);
void ldaCink_AEC_CursorUpNum(size_t _times);
void ldaCink_AEC_CursorDown(void);
void ldaCink_AEC_CursorDownNum(size_t _times);
void ldaCink_AEC_CursorRight(void);
void ldaCink_AEC_CursorRightNum(size_t _times);
void ldaCink_AEC_CursorLeft(void);
void ldaCink_AEC_CursorLeftNum(size_t _times);

void ldaCink_AEC_CursorNextLine(void);
void ldaCink_AEC_CursorNextLineNum(size_t _times);
void ldaCink_AEC_CursorPrevLine(void);
void ldaCink_AEC_CursorPrevLineNum(size_t _times);

void ldaCink_AEC_CursorToFirstColumn(void);
void ldaCink_AEC_CursorToColumnNum(size_t _num);

void ldaCink_AEC_CursorToXY(size_t _x, size_t _y);
void ldaCink_AEC_CursorToXYHVP(size_t _x, size_t _y);

void ldaCink_AEC_CursorCleanToEnd(void);
void ldaCink_AEC_CursorCleanToStart(void);
void ldaCink_AEC_CleanScreen(void);
void ldaCink_AEC_CleanScreenComplete(void);

void ldaCink_AEC_CleanLineCursorEnd(void);
void ldaCink_AEC_CleanLineCursorStart(void);
void ldaCink_AEC_CleanLineComplete(void);

void ldaCink_AEC_ScrollUp(void);
void ldaCink_AEC_ScrollUpNumber(size_t _num);
void ldaCink_AEC_ScrollDown(void);
void ldaCink_AEC_ScrollDownNumber(size_t _num);

void ldaCink_AEC_HideCursor(void);
void ldaCink_AEC_ShowCursor(void);

void ldaCink_AEC_ColorReset(void);
void ldaCink_AEC_FontSetBold(void);
void ldaCink_AEC_FontSetLight(void);
void ldaCink_AEC_FontSetItalic(void);
void ldaCink_AEC_FontSetUnderline(void);
void ldaCink_AEC_FontSetSlowBlink(void);
void ldaCink_AEC_FontSetRapidBlink(void);
void ldaCink_AEC_ColorsInvert(void);
void ldaCink_AEC_FontSetCrossedOut(void);
void ldaCink_AEC_FontSetDefault(void);
void ldaCink_AEC_FontSetAlternative(size_t _font);
void ldaCink_AEC_FontSetNormalIntensity(void);
void ldaCink_AEC_FontSetNotItalic(void);
void ldaCink_AEC_FontSetNotBlinking(void);
void ldaCink_AEC_FontSetNotUnderlined(void);
void ldaCink_AEC_FontSetNotCrossedOut(void);
void ldaCink_AEC_ForegroundSetColor(void);
void ldaCink_AEC_ForegroundSetColorNumber(size_t _num); //30 37
void ldaCink_AEC_ForegroundSetDefaultColor(void);
void ldaCink_AEC_BackgroundSetColor(void);
void ldaCink_AEC_BackgroundSetColorNum(size_t _num); // 40 47
void ldaCink_AEC_BackgroundSetDefaultColor(void);

#endif /* LDACINK_AEC_H */
