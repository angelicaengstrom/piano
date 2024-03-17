target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets)

set_target_properties(${PROJECT_NAME} PROPERTIES
        WIN64_EXECUTABLE ON
        MACOSX_BUNDLE ON
        )

target_sources(${PROJECT_NAME} PRIVATE main.cpp mainwindow.cpp ui/MainWindow.ui)