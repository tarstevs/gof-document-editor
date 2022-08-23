add_library(doc-editor-lib INTERFACE include/Window.h)
target_include_directories(doc-editor-lib INTERFACE include/)
target_sources(doc-editor-lib INTERFACE
        include/Character.h
        include/Glyph.h
        )