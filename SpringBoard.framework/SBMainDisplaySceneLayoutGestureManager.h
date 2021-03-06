/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBMainDisplaySceneLayoutGestureManager : NSObject <BSTransactionObserver, SBPanSystemGestureRecognizerDelegate> {
    SBPanSystemGestureRecognizer * _resizePanSystemGestureRecognizer;
    SBAppResizeGestureWorkspaceTransaction * _resizePanSystemGestureRecognizerWorkspaceTransaction;
    SBMainDisplaySceneLayoutViewController * _sceneLayoutViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBMainDisplaySceneLayoutViewController *sceneLayoutViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_allowSystemGestureRecognizer:(id)arg1 withSystemGestureType:(unsigned long long)arg2 toReceiveTouch:(id)arg3;
- (void)_createResizePanSystemGestureRecognizerWorkspaceTransactionForPanSystemGestureRecognizer:(id)arg1;
- (void)_handleResizePanSystemGestureRecognizer:(id)arg1;
- (bool)_hasActiveModalFloatingApplication;
- (bool)_hasActiveSystemGestureRecognizerWorkspaceTransaction;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)init;
- (id)initWithSceneLayoutViewController:(id)arg1;
- (id)sceneLayoutViewController;
- (void)transactionDidComplete:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;

@end
