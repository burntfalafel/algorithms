add_library(linkedlists
    SHARED
    linkedlists.cpp
)

set_property(TARGET linkedlists PROPERTY POSITION_INDEPENDENT_CODE ON)

target_include_directories(linkedlists
    PUBLIC
    include
)
