#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>
#import <CepheiPrefs/HBRootListController.h>
#import <CepheiPrefs/HBAppearanceSettings.h>
#import <Cephei/HBPreferences.h>
#import "NSTask.h"
#import <dlfcn.h>

#define kBundlePath @"/Library/PreferenceBundles/AirPortPrefs.bundle"
#define BUNDLE_ID @"com.boo.airport"

@interface ARPPrefsListController : HBRootListController
@property (nonatomic, retain) UIBarButtonItem *respringButton;
-(void)respring:(id)sender;
-(void)resetPrefs:(id)sender;
-(void)setAnimName:(NSString *)name;
@end