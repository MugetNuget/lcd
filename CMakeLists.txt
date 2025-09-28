add_library(lcd STATIC
    src/lcd.c
)

target_include_directories(lcd PUBLIC include)

target_link_libraries(lcd PUBLIC pico_stdlib)