
LOCAL_PATH := $(call my-dir)

# libaout_android-4_plugin.so

include $(CLEAR_VARS)

LOCAL_ARM_MODE := arm

LOCAL_MODULE := aout_android-4_plugin

LOCAL_CFLAGS += \
    -D__PLATFORM__=4 \
    -D__THROW= \
    -DHAVE_CONFIG_H \
    -DNDEBUG \
    -D__PLUGIN__ \
    -DMODULE_STRING=\"aout_android-4\"

LOCAL_C_INCLUDES += \
    $(DEPROOT)/android-4/include \
    $(VLCROOT)/compat \
    $(VLCROOT) \
    $(VLCROOT)/include \
    $(VLCROOT)/src

LOCAL_SRC_FILES := \
    android_AudioTrack.cpp

LOCAL_CPPFLAGS += $(COMMON_OPT_CFLAGS)
LOCAL_LDFLAGS += $(COMMON_OPT_LDFLAGS)

LOCAL_LDFLAGS += -L$(DEPROOT)/android-4/lib
LOCAL_LDLIBS += -lmedia

LOCAL_SHARED_LIBRARIES += vlccore

include $(BUILD_SHARED_LIBRARY)

# libaout_android-5_plugin.so

include $(CLEAR_VARS)

LOCAL_ARM_MODE := arm

LOCAL_MODULE := aout_android-5_plugin

LOCAL_CFLAGS += \
    -D__PLATFORM__=5 \
    -D__THROW= \
    -DHAVE_CONFIG_H \
    -DNDEBUG \
    -D__PLUGIN__ \
    -DMODULE_STRING=\"aout_android-5\"

LOCAL_C_INCLUDES += \
    $(DEPROOT)/android-5/include \
    $(VLCROOT)/compat \
    $(VLCROOT) \
    $(VLCROOT)/include \
    $(VLCROOT)/src

LOCAL_SRC_FILES := \
    android_AudioTrack.cpp

LOCAL_CPPFLAGS += $(COMMON_OPT_CFLAGS)
LOCAL_LDFLAGS += $(COMMON_OPT_LDFLAGS)

LOCAL_LDFLAGS += -L$(DEPROOT)/android-5/lib
LOCAL_LDLIBS += -lmedia

LOCAL_SHARED_LIBRARIES += vlccore

include $(BUILD_SHARED_LIBRARY)

# libaout_android-8_plugin.so

include $(CLEAR_VARS)

LOCAL_ARM_MODE := arm

LOCAL_MODULE := aout_android-8_plugin

LOCAL_CFLAGS += \
    -D__PLATFORM__=8 \
    -D__THROW= \
    -DHAVE_CONFIG_H \
    -DNDEBUG \
    -D__PLUGIN__ \
    -DMODULE_STRING=\"aout_android-8\"

LOCAL_C_INCLUDES += \
    $(DEPROOT)/android-8/include \
    $(VLCROOT)/compat \
    $(VLCROOT) \
    $(VLCROOT)/include \
    $(VLCROOT)/src

LOCAL_SRC_FILES := \
    android_AudioTrack.cpp

LOCAL_CPPFLAGS += $(COMMON_OPT_CFLAGS)
LOCAL_LDFLAGS += $(COMMON_OPT_LDFLAGS)

LOCAL_LDFLAGS += -L$(DEPROOT)/android-8/lib
LOCAL_LDLIBS += -lmedia

LOCAL_SHARED_LIBRARIES += vlccore

include $(BUILD_SHARED_LIBRARY)

# libaout_android-9_plugin.so

include $(CLEAR_VARS)

LOCAL_ARM_MODE := arm

LOCAL_MODULE := aout_android-9_plugin

LOCAL_CFLAGS += \
    -D__PLATFORM__=9 \
    -D__THROW= \
    -DHAVE_CONFIG_H \
    -DNDEBUG \
    -D__PLUGIN__ \
    -DMODULE_STRING=\"aout_android-9\"

LOCAL_C_INCLUDES += \
    $(DEPROOT)/android-9/include \
    $(VLCROOT)/compat \
    $(VLCROOT) \
    $(VLCROOT)/include \
    $(VLCROOT)/src

LOCAL_SRC_FILES := \
    android_AudioTrack.cpp

LOCAL_CPPFLAGS += $(COMMON_OPT_CFLAGS)
LOCAL_LDFLAGS += $(COMMON_OPT_LDFLAGS)

LOCAL_LDFLAGS += -L$(DEPROOT)/android-9/lib
LOCAL_LDLIBS += -lmedia

LOCAL_SHARED_LIBRARIES += vlccore

include $(BUILD_SHARED_LIBRARY)

