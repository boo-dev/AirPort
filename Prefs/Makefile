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
	$(ECHO_NOTHING)mkdir -p $(THEOS_STAGING_DIR)/Library/AirPortAnims/$(ECHO_END)
	$(ECHO_NOTHING)mkdir -p $(THEOS_STAGING_DIR)/System/Library/PreinstalledAssetsV2/RequiredByOs/com_apple_MobileAsset_SharingDeviceAssets/c53fb4500843621ffa42a55d5c097f4d9250a201.asset/AssetData/AirPods1_2-CL_0.devicebundle/$(ECHO_END)
	$(ECHO_NOTHING)cp -r Resources/WirelessCaseOrig/ $(THEOS_STAGING_DIR)/System/Library/PreinstalledAssetsV2/RequiredByOs/com_apple_MobileAsset_SharingDeviceAssets/c53fb4500843621ffa42a55d5c097f4d9250a201.asset/AssetData/AirPods1_2-CL_0.devicebundle/$(ECHO_END)

	$(ECHO_NOTHING)cp -r Resources/Default $(THEOS_STAGING_DIR)/Library/AirPortAnims/$(ECHO_END)

	$(ECHO_NOTHING)cp -r Resources/Default $(THEOS_STAGING_DIR)/Library/AirPortAnims/$(ECHO_END)
	$(ECHO_NOTHING)cp -r "Resources/Black Airpods" $(THEOS_STAGING_DIR)/Library/AirPortAnims/$(ECHO_END)
	$(ECHO_NOTHING)cp -r "Resources/Wireless Case" $(THEOS_STAGING_DIR)/Library/AirPortAnims/$(ECHO_END)
	$(ECHO_NOTHING)cp -r Resources/JuulPods $(THEOS_STAGING_DIR)/Library/AirPortAnims/$(ECHO_END)

	$(ECHO_NOTHING)mkdir -p $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences$(ECHO_END)
	$(ECHO_NOTHING)cp entry.plist $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences/AirPortPrefs.plist$(ECHO_END)
	