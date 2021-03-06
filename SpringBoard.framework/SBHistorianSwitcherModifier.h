/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBHistorianSwitcherModifier : SBSwitcherModifier <SBFluidSwitcherScrollProviding> {
    <SBHistorianSwitcherModifierDelegate> * _historianDelegate;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> * _rootModifier;
    <SBFluidSwitcherScrollProvidingDelegate> * _scrollDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBHistorianSwitcherModifierDelegate> *historianDelegate;
@property (nonatomic, readonly) SBSwitcherModifier<SBFluidSwitcherScrollProviding> *rootModifier;
@property (nonatomic) <SBFluidSwitcherScrollProvidingDelegate> *scrollDelegate;
@property (readonly) Class superclass;

+ (bool)canLogEvent:(id)arg1;

- (void).cxx_destruct;
- (id)_actionSnapshotFromAction:(id)arg1;
- (id)_eventSnapshotFromEvent:(id)arg1;
- (id)_modifierStackSnapshotFromModifier:(id)arg1;
- (void)_populateIndexedQueryMethodDescription:(id)arg1 fromModifier:(id)arg2 queryName:(id)arg3 descriptionProvider:(id /* block */)arg4 appLayouts:(id)arg5;
- (void)_populateQueryMethodDescription:(id)arg1 fromModifier:(id)arg2 queryName:(id)arg3 descriptionProvider:(id /* block */)arg4 appLayouts:(id)arg5;
- (id)_querySnapshotFromModifier:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)handleEvent:(id)arg1;
- (id)historianDelegate;
- (id)initWithRootModifier:(id)arg1;
- (id)rootModifier;
- (id)scrollDelegate;
- (void)setDelegate:(id)arg1;
- (void)setHistorianDelegate:(id)arg1;
- (void)setScrollDelegate:(id)arg1;

@end
