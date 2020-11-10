cmake_minimum_required(VERSION 3.4.1)

add_library(KeyLib SHARED
            key.c)

# Include libraries needed for hello-jni lib
target_link_libraries(KeyLib
                      android
                      log)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../jniLibs/${ANDROID_ABI})
