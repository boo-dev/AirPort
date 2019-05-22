#import <Cephei/HBPreferences.h>
#import <AVFoundation/AVFoundation.h>

bool dpkgInvalid;
bool postPair;

@interface UIImage (Private)
- (UIImage *)_flatImageWithColor:(UIColor *)color;
@property CGFloat scale;
@end

@interface NSURL (Private)
- (BOOL) isEqualToURL:(NSURL*)otherURL;
@end

@interface SFDevice : NSObject
@end

@interface SFBLEScanner : NSObject {
	NSMutableDictionary* _devices;
}
@end

@interface SFBLEDevice : NSObject
@property (nonatomic,copy) NSDictionary * advertisementFields;                               //@synthesize advertisementFields=_advertisementFields - In the implementation block
@property (assign,nonatomic) unsigned connectedServices;                                     //@synthesize connectedServices=_connectedServices - In the implementation block
@property (nonatomic,copy) NSUUID * counterpartIdentifier;                                   //@synthesize counterpartIdentifier=_counterpartIdentifier - In the implementation block                                 //@synthesize foundTicks=_foundTicks - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                                              //@synthesize identifier=_identifier - In the implementation block                                                   //@synthesize paired=_paired - In the implementation block
@property (assign,nonatomic) unsigned productID2;                                            //@synthesize productID2=_productID2 - In the implementation block
@property (nonatomic,copy) NSString * model;                                 //@synthesize model=_model - In the implementation block
@end 

@interface BCBatteryDeviceController : NSObject
@property (nonatomic,readonly) NSString * connectedDevicesDidChangeNotificationName; 
@property (nonatomic,weak,readonly) NSArray * connectedDevices; 
+(id)_internalBatteryDeviceGlyph;
+(id)_glyphForBatteryDeviceWithTransport:(long long)arg1 accessoryCategory:(unsigned long long)arg2 vendor:(long long)arg3 productIdentifier:(long long)arg4 parts:(unsigned long long)arg5 ;
+(id)_glyphForBatteryDevice:(id)arg1 ;
+(id)sharedInstance;
-(NSArray *)connectedDevices;
@end

@interface BCBatteryDevice : NSObject
@property (nonatomic,copy) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long percentCharge;                                                  //@synthesize percentCharge=_percentCharge - In the implementation block
@property (assign,getter=isConnected,nonatomic) BOOL connected;                                        //@synthesize connected=_connected - In the implementation block
@property (assign,getter=isCharging,nonatomic) BOOL charging;                                          //@synthesize charging=_charging - In the implementation block
@property (assign,getter=isPowerSource,nonatomic) BOOL powerSource;                                    //@synthesize powerSource=_powerSource - In the implementation block
@property (assign,nonatomic) unsigned long long parts;                                                 //@synthesize parts=_parts - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                                       //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy,readonly) NSString * matchIdentifier;                                        //@synthesize matchIdentifier=_matchIdentifier - In the implementation block
@property (assign,nonatomic) long long powerSourceState;                                               //@synthesize powerSourceState=_powerSourceState - In the implementation block
@property (nonatomic,copy) NSString * accessoryIdentifier;                                             //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long accessoryCategory;                                     //@synthesize accessoryCategory=_accessoryCategory - In the implementation block
@property (nonatomic,readonly) long long vendor;                                                       //@synthesize vendor=_vendor - In the implementation block
@property (nonatomic,readonly) long long productIdentifier;                                            //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,readonly) UIImage * glyph; 
+(id)batteryDeviceWithIdentifier:(id)arg1 vendor:(long long)arg2 productIdentifier:(long long)arg3 parts:(unsigned long long)arg4 matchIdentifier:(id)arg5 ;
-(long long)vendor;
-(BOOL)isConnected;
-(long long)productIdentifier;
-(UIImage *)glyph;
-(long long)percentCharge;
-(NSString *)matchIdentifier;
-(void)setPowerSource:(BOOL)arg1 ;
-(void)setPowerSourceState:(long long)arg1 ;
-(void)setPercentCharge:(long long)arg1 ;
-(void)setBatterySaverModeActive:(BOOL)arg1 ;
-(void)setApproximatesPercentCharge:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 vendor:(long long)arg2 productIdentifier:(long long)arg3 parts:(unsigned long long)arg4 matchIdentifier:(id)arg5 ;
-(id)_lazyGlyph;
-(long long)powerSourceState;
-(BOOL)isPowerSource;
-(BOOL)approximatesPercentCharge;
-(void)setParts:(unsigned long long)arg1 ;
-(BOOL)isCharging;
-(void)setAccessoryCategory:(unsigned long long)arg1 ;
-(NSString *)accessoryIdentifier;
-(unsigned long long)accessoryCategory;
-(void)setAccessoryIdentifier:(NSString *)arg1 ;
-(void)setConnected:(BOOL)arg1 ;
-(void)setCharging:(BOOL)arg1 ;
-(unsigned long long)parts;
-(NSString *)identifier;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(BOOL)isLowBattery;
@end

@interface ProximityStatusViewController : UIViewController {
    UILabel *titleLabel;
    AVQueuePlayer *_avPlayer;
    _Bool _avPlaying;
    AVPlayerItem *_avItemLoop;
    _Bool _avItemLoopLoaded;
    AVPlayerLooper *_avLooper;
    NSString *_movieStatusLoopName;
    UIImageView *leftImageView;
    UIImageView *leftIndicatorImageView;
    UIImageView *leftExclamationPointImageView;
    UILabel *leftBatteryLabel;
    UIImageView *leftBatteryLevelImageView;
    UIImageView *leftBatteryShellImageView;
    UIImageView *leftBatteryChargeImageView;
    UIImageView *rightImageView;
    UIImageView *rightIndicatorImageView;
    UIImageView *rightExclamationPointImageView;
    UILabel *rightBatteryLabel;
    UIImageView *rightBatteryLevelImageView;
    UIImageView *rightBatteryShellImageView;
    UIImageView *rightBatteryChargeImageView;
    UIView *bothBatteryView;
    UILabel *bothBatteryLabel;
    UIImageView *bothBatteryLevelImageView;
    UIImageView *bothBatteryShellImageView;
    UIImageView *bothBatteryChargeImageView;
    UIView *caseBatteryView;
    UIImageView *caseImageView;
    UILabel *caseBatteryLabel;
    UIImageView *caseBatteryLevelImageView;
    UIImageView *caseBatteryShellImageView;
    UIImageView *caseBatteryChargeImageView;
    UIView *mainBatteryView;
    UIImageView *mainImageView;
    UILabel *mainBatteryLabel;
    UIImageView *mainBatteryLevelImageView;
    UIImageView *mainBatteryShellImageView;
    UIImageView *mainBatteryChargeImageView;
    UIButton *dismissButton;
    NSDictionary *_userInfo;
}
@property(nonatomic, assign) double caseCharge;
@property(nonatomic, assign) BOOL caseCharging;
@property(nonatomic, assign) double leftCharge;
@property(nonatomic, assign) BOOL leftCharging;
@property(nonatomic, assign) double rightCharge;
@property(nonatomic, assign) BOOL rightCharging;
@property(nonatomic, assign) BOOL bothCharging;
@property(copy, nonatomic) NSDictionary *userInfo;
-(void)getBatteryValues;
-(void)_updateBatteryLevelLeft:(double)arg1 levelRight:(double)arg2 levelCase:(double)arg3;
@end

@interface SBUIRemoteAlertServiceViewController : UIViewController
@end

@interface SVSBaseMainController : SBUIRemoteAlertServiceViewController
@property(copy, nonatomic) NSDictionary *userInfo;
-(void)dismiss:(int)arg1;
-(unsigned long long)desiredHomeButtonEvents;
-(void)_willAppearInRemoteViewController;
@end

@interface ProximityPairingViewController : SVSBaseMainController {
    UIImageView *_leftImageView;
    UIImageView *_leftIndicatorImageView;
    UIImageView *_leftExclamationPointImageView;
    UIImageView *_rightImageView;
    UIImageView *_rightIndicatorImageView;
    UIImageView *_rightExclamationPointImageView;
    UIActivityIndicatorView *_activityIndicatorView;
    UIButton *_connectButton;
    UILabel *_connectingLabel;
    _Bool _connecting;
    NSUUID *_deviceIdentifier;
    UIButton *_dismissButton;
    _Bool _done;
    UIImageView *_errorImageView;
    UIImageView *_imageView;
    UILabel *_infoLabel;
    _Bool _repairMode;
    long long _repairRSSI;
    UIButton *_reportBugButton;
    int _testMode;
    UILabel *_titleLabel;
    NSString *_movieIntroName;
    AVPlayerItem *_avItemIntro;
    _Bool _avItemIntroLoaded;
    NSString *_moviePairLoopName;
    AVPlayerItem *_avItemPairLoop;
    _Bool _avItemPairLoopLoaded;
    NSString *_movieStatusLoopName;
    AVPlayerItem *_avItemStatusLoop;
    _Bool _avItemStatusLoopLoaded;
    AVPlayerLooper *_avLooper;
    NSMutableArray *_avLoops;
    AVQueuePlayer *_avPlayer;
    _Bool _avPlaying;
    id _avStopObserver;
    NSLayoutConstraint *_avViewPairYConstraint;
    NSLayoutConstraint *_avViewPairHeightConstraint;
    NSLayoutConstraint *_avViewStatusYCombinedConstraint;
    NSLayoutConstraint *_avViewStatusYSplitConstraint;
    NSLayoutConstraint *_avViewStatusHeightConstraint;
    UIView *_budsBatteryView;
    UILabel *_budsBatteryLabel;
    UIImageView *_budsBatteryLevelImageView;
    UIImageView *_budsBatteryShellImageView;
    UIImageView *_budsBatteryChargeImageView;
    UIView *_caseBatteryView;
    UILabel *_caseBatteryLabel;
    UIImageView *_caseBatteryLevelImageView;
    UIImageView *_caseBatteryShellImageView;
    UIImageView *_caseBatteryChargeImageView;
    UIView *_mainBatteryView;
    UILabel *_mainBatteryLabel;
    UIImageView *_mainBatteryLevelImageView;
    UIImageView *_mainBatteryShellImageView;
    UIImageView *_mainBatteryChargeImageView;
    NSDictionary *_userInfo;
}
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic, assign) double caseCharge;
@property(nonatomic, assign) BOOL caseCharging;
@property(nonatomic, assign) double leftCharge;
@property(nonatomic, assign) BOOL leftCharging;
@property(nonatomic, assign) double rightCharge;
@property(nonatomic, assign) BOOL rightCharging;
@property(nonatomic, assign) BOOL bothCharging;
-(void)getBatteryValues;
- (void)_updateBatteryUIForDevice:(id)arg1;
@end

@interface SFPowerSourceMonitor : NSObject {

	BOOL _activateCalled;
	NSMutableDictionary* _powerSources;
	int _psNotifyTokenAccessoryAttach;
	int _psNotifyTokenAccessoryPowerSource;
	int _psNotifyTokenAccessoryTimeRemaining;
	int _psNotifyTokenAnyPowerSource;
	unsigned _changeFlags;
	id _invalidationHandler;
	id _powerSourcesFoundHandler;
	id _powerSourcesLostHandler;
	id _powerSourcesChangedHandler;
}
@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id powerSourcesFoundHandler;                               //@synthesize powerSourcesFoundHandler=_powerSourcesFoundHandler - In the implementation block
@property (nonatomic,copy) id powerSourcesLostHandler;                                //@synthesize powerSourcesLostHandler=_powerSourcesLostHandler - In the implementation block
@property (nonatomic,copy) id powerSourcesChangedHandler;                             //@synthesize powerSourcesChangedHandler=_powerSourcesChangedHandler - In the implementation block
-(void)setPowerSourcesFoundHandler:(id)arg1 ;
-(void)setPowerSourcesChangedHandler:(id)arg1 ;
-(void)setPowerSourcesLostHandler:(id)arg1 ;
-(unsigned)changeFlags;
-(void)_triggerUpdatePowerSources;
-(void)_updatePowerSources;
-(void)_updatePowerSource:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3 ;
-(void)_foundPowerSource:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3 ;
-(void)_handlePowerSourcesLost:(id)arg1 ;
-(void)_handlePowerSourcesFound:(id)arg1 ;
-(void)_handlePowerSourcesChanged:(id)arg1 changes:(unsigned)arg2 ;
-(id)powerSourcesFoundHandler;
-(id)powerSourcesLostHandler;
-(id)powerSourcesChangedHandler;
-(void)setChangeFlags:(unsigned)arg1 ;
-(void)activateWithCompletion:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_cleanup;
-(void)_update;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
@end

@interface ProximityCommonViewControllerProxy : SVSBaseMainController
@end

@interface ProximityPairingViewControllerProxy : ProximityCommonViewControllerProxy
- (void)viewDidAppear:(_Bool)arg1;
@end

@interface ProximityStatusViewControllerProxy : ProximityCommonViewControllerProxy
- (_Bool)updateViewForLevelLeft:(double)arg1 levelRight:(double)arg2 levelCase:(double)arg3;
@end