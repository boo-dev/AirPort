#import "Preferences.h"
#import <objc/runtime.h>

// Most of the prefs stuff I've learned from @NepetaDev - all of her tweaks are free and open source so go follow her pls

@implementation ARPPrefsListController
@synthesize respringButton;

- (instancetype)init {
    NSBundle *bundle = [[NSBundle alloc] initWithPath:kBundlePath];
    NSString *applyString = [bundle localizedStringForKey:@"APPLY" value:@"APPLY" table:@"Prefs"];
    self = [super init];

    if (self) {
        HBAppearanceSettings *appearanceSettings = [[HBAppearanceSettings alloc] init];
        appearanceSettings.tintColor = [UIColor colorWithRed:1.0f green:0.81f blue:0.86f alpha:1];
        appearanceSettings.tableViewCellSeparatorColor = [UIColor colorWithWhite:0 alpha:0];
        self.hb_appearanceSettings = appearanceSettings;
        self.respringButton = [[UIBarButtonItem alloc] initWithTitle:applyString
                                    style:UIBarButtonItemStylePlain
                                    target:self 
                                    action:@selector(respring:)];
        self.respringButton.tintColor = [UIColor colorWithRed:0.52 green:1.00 blue:0.89 alpha:1.0];
        self.navigationItem.rightBarButtonItem = self.respringButton;
    }
    return self;
}

- (id)specifiers {
    if(_specifiers == nil) {
        _specifiers = [self loadSpecifiersFromPlistName:@"Prefs" target:self];
    }
    return _specifiers;
}

- (void)viewWillAppear:(BOOL)animated {
	[super viewWillAppear:animated];

    CGRect frame = self.table.bounds;
    frame.origin.y = -frame.size.height;
	
    [self.navigationController.navigationController.navigationBar setShadowImage: [UIImage new]];
    self.navigationController.navigationController.navigationBar.translucent = YES;
}

- (void)respring:(id)sender {
    NSTask *task = [[NSTask alloc] init];
    [task setLaunchPath:@"/usr/bin/killall"];
    [task setArguments:[NSArray arrayWithObjects:@"SpringBoard", @"SharingViewService", @"sharingd", nil]];
    [task launch];
}
- (void)resetPrefs:(id)sender {
    HBPreferences *prefs = [[HBPreferences alloc] initWithIdentifier:@"com.boo.airport"];
    [prefs removeAllObjects];

    [self respring:sender];
}
- (void)setAnimName:(NSString *)name {
    UITableViewCell *cell = [self.table cellForRowAtIndexPath:[NSIndexPath indexPathForRow:2 inSection:1]];

	cell.detailTextLabel.text = name;
}
@end