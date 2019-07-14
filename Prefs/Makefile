include $(THEOS)/makefiles/common.mk

ARCHS = arm64 arm64e
TARGET = iphone:clang:latest

BUNDLE_NAME = AirPortPrefs
AirPortPrefs_FILES = Preferences.m CustomAnimController.m
AirPortPrefs_INSTALL_PATH = /Library/PreferenceBundles
AirPortPrefs_FRAMEWORKS = UIKit
AirPortPrefs_EXTRA_FRAMEWORKS = Cephei CepheiPrefs
AirPortPrefs_PRIVATE_FRAMEWORKS = Preferences
AirPortPrefs_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/bundle.mk

internal-stage::
	$(ECHO_NOTHING)mkdir -p \
	$(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences \
	$(THEOS_STAGING_DIR)/Library/AirPortAnims$(ECHO_END)

	$(ECHO_NOTHING)cp entry.plist $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences/AirPortPrefs.plist$(ECHO_END)
	
	$(ECHO_NOTHING)cp -rn Resources/Default $(THEOS_STAGING_DIR)/Library/AirPortAnims/$(ECHO_END)
	$(ECHO_NOTHING)cp -rn "Resources/Wireless Case" $(THEOS_STAGING_DIR)/Library/AirPortAnims/$(ECHO_END)
