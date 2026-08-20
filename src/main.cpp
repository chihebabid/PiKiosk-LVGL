//
// Created by chiheb on 20/08/2026.
//

#include <lv/lv.hpp>

int main() {
    lv::init();
    lv::X11Display display("Hello", 480, 320);

    lv::Label::create(lv::screen_active())
        .text("Hello, LVGL!")
        .center();

    lv::run();
}