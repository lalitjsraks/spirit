/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSObject.h"
#import "UIKit-Structs.h"


@protocol UIKeyboardLayoutProtocol <NSObject>
-(void)showKeyboardType:(int)type withAppearance:(int)appearance;
-(void)deactivateActiveKeys;
-(void)updateReturnKey;
-(void)updateLocalizedKeys;
-(BOOL)usesAutoShift;
-(void)setShift:(BOOL)shift;
-(BOOL)isShiftKeyBeingHeld;
-(void)longPressAction;
-(BOOL)canHandleHandEvent:(GSEventRef)event;
-(BOOL)handleHandEvent:(GSEventRef)event;
-(void)didClearInput;
-(id)candidateList;
-(void)setLabel:(id)label forKey:(id)key;
-(void)setTarget:(id)target forKey:(id)key;
-(void)setAction:(SEL)action forKey:(id)key;
-(void)setLongPressAction:(SEL)action forKey:(id)key;
-(void)restoreDefaultsForKey:(id)key;
-(void)restoreDefaultsForAllKeys;
-(id)activationIndicatorView;
-(BOOL)shouldShowIndicator;
-(void)phraseBoundaryDidChange;
@end
