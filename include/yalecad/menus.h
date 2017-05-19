#ifndef MENUS_H
#define MENUS_H

extern VOID TWdrawMenus();
extern VOID TWfreeMenuWindows();
extern VOID TWinforMenus();
extern VOID TWmouse_tracking_start();
extern BOOL TWmouse_tracking_end();
extern BOOL TWmouse_tracking_pt(INT *x, INT *y);

#endif
