/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBLayoutState : NSObject <BSDescriptionProviding> {
    long long  _elementInterfaceOrientation;
    NSSet * _elements;
    long long  _interfaceOrientation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long elementInterfaceOrientation;
@property (nonatomic, readonly) NSSet *elements;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (readonly) Class superclass;

+ (long long)_defaultInterfaceOrientation;

- (void).cxx_destruct;
- (id)_initWithLayoutElements:(id)arg1 interfaceOrientation:(long long)arg2 elementInterfaceOrientation:(long long)arg3;
- (id)appLayout;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayItemFromLayoutElement:(id)arg1;
- (long long)elementInterfaceOrientation;
- (id)elementWithIdentifier:(id)arg1;
- (id)elementWithRole:(long long)arg1;
- (id)elements;
- (id)floatingAppLayout;
- (unsigned long long)hash;
- (id)init;
- (long long)interfaceOrientation;
- (bool)isEqual:(id)arg1;
- (bool)isEqual:(id)arg1 withRole:(long long)arg2;
- (bool)layoutContainsRole:(long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
