#pragma once

#include "flipboard.h"

#include <gui/view_dispatcher.h>
#include <gui/modules/widget.h>
#include "../common/app_menu.h"
#include "../common/flipboard_model.h"
#include "../common/key_config.h"
#include "../common/leds.h"
#include "../common/keyboard.h"

struct Flipboard {
    ViewDispatcher* view_dispatcher;

    AppMenu* app_menu;

    KeyConfig* key_config;
    View* view_primary;
    Widget* widget_about;

    FlipboardModel* model;
};

typedef enum {
    FlipboardViewAppMenuId, // The first entry must be the app menu
    FlipboardViewConfigureId,
    FlipboardViewConfigureSubviewId,
    FlipboardViewConfigureTextInputId,
    FlipboardViewConfigureKeyboardInputId,

    FlipboardViewAboutId,
    FlipboardViewPrimaryId,
} FlipboardViewId;
