// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: menu_practice

#include "../ui.h"

void ui_Screen3_screen_init(void)
{
    ui_Screen3 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Header3 = ui_Header_create(ui_Screen3);
    lv_obj_set_x(ui_Header3, 0);
    lv_obj_set_y(ui_Header3, 0);

    lv_label_set_text(ui_comp_get_child(ui_Header3, UI_COMP_HEADER_SCREENNAME), "Screen 3");

}