//
// Created by chiheb on 20/08/2026.
//

#include <lv/lv.hpp>
#include <lv/assets/cursor.hpp>

int main() {
    lv::init();
    // Initiate SDL display
    lv::SDLDisplay display(800, 600);

    lv::Label::create(lv::screen_active())
        .text("Hello, LVGL!")
        .center();

    lv::text_button(lv::screen_active(), "Hello")
        .text("Click Me")
        .size(120, 50)
        .center()
        .on_click([](lv::Event) {
            lv::Label::create(lv::screen_active())
                .text("Button Clicked!")
                .center();
        });
    lv::run();
}