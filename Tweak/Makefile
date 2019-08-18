ARCHS = arm64 arm64e
TARGET = iphone:clang:latest

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = AirPort
AirPort_FILES = Tweak.xm
AirPort_CFLAGS = -fobjc-arc
AirPort_FRAMEWORKS = UIKit Foundation AVFoundation
AirPort_PRIVATE_FRAMEWORKS = Sharing BatteryCenter
AirPort_EXTRA_FRAMEWORKS += Cephei

include $(THEOS_MAKE_PATH)/tweak.mk
