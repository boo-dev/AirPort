#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>
#import <CepheiPrefs/HBListController.h>
#import <CepheiPrefs/HBAppearanceSettings.h>
#import <Cephei/HBPreferences.h>
#import <spawn.h>

#define ARPThemesDirectory @"/Library/AirPortAnims"

@interface ARPAnim : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *path;
+(ARPAnim *)animWithPath:(NSString *)path;
-(NSString *)getPath:(NSString *)filename;
-(id)initWithPath:(NSString *)path;
@end

@interface ARPThemeListController : PSViewController <UITableViewDelegate,UITableViewDataSource> {
    UITableView *_tableView;
    NSMutableArray *_anims;
    NSString *selectedAnim;
}

@property (nonatomic, retain) NSMutableArray *anims;

@end