/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBTestAlertItem : SBAlertItem {
    bool  _allowLockScreenDismissal;
    bool  _allowMenuButtonDismissal;
    bool  _behavesSuperModally;
    bool  _forcesModalAlertAppearance;
    bool  _reappearsAfterLock;
    bool  _reappearsAfterUnlock;
    bool  _shouldShowInLockScreen;
    NSString * _title;
}

@property (nonatomic) bool allowLockScreenDismissal;
@property (nonatomic) bool allowMenuButtonDismissal;
@property (nonatomic) bool behavesSuperModally;
@property (nonatomic) bool forcesModalAlertAppearance;
@property (nonatomic) bool reappearsAfterLock;
@property (nonatomic) bool reappearsAfterUnlock;
@property (nonatomic) bool shouldShowInLockScreen;
@property (nonatomic, copy) NSString *title;

+ (id)alertItemWithShowInLockScreen:(bool)arg1 forcesModal:(bool)arg2 superModal:(bool)arg3;

- (void).cxx_destruct;
- (bool)allowLockScreenDismissal;
- (bool)allowMenuButtonDismissal;
- (bool)behavesSuperModally;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (id)description;
- (bool)forcesModalAlertAppearance;
- (bool)reappearsAfterLock;
- (bool)reappearsAfterUnlock;
- (void)setAllowLockScreenDismissal:(bool)arg1;
- (void)setAllowMenuButtonDismissal:(bool)arg1;
- (void)setBehavesSuperModally:(bool)arg1;
- (void)setForcesModalAlertAppearance:(bool)arg1;
- (void)setReappearsAfterLock:(bool)arg1;
- (void)setReappearsAfterUnlock:(bool)arg1;
- (void)setShouldShowInLockScreen:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldShowInLockScreen;
- (id)title;

@end
