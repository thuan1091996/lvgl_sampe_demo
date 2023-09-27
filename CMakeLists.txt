SET(SOURCES components/ui_comp_header.c
    components/ui_comp_hidewipe.c
    components/ui_comp_labelsw.c
    components/ui_comp.c
    screens/ui_Screen1.c
    screens/ui_Screen2.c
    screens/ui_Screen3.c
    screens/ui_Item.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    images/ui_img_657858778.c)

    
idf_component_register(
    SRCS 
    "${SOURCES}"
    INCLUDE_DIRS 
    "."
)

add_library(ui ${SOURCES})

