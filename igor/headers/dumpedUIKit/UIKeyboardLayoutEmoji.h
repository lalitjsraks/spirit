/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardEmojiController.h"
#import "UIKeyboardLayout.h"
#import "UIKit-Structs.h"

@class UIKeyboardEmojiFactory, UIKeyboardEmojiCategoryController, UIKeyboardEmojiScrollView, UIButton, UIKeyboardEmojiCategoriesControl, UIKeyboardEmojiRecentsController;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutEmoji : UIKeyboardLayout <UIKeyboardEmojiController> {
@private
	UIKeyboardEmojiScrollView* _emojiView;
	UIButton* _globeButton;
	UIButton* _deleteButton;
	UIKeyboardEmojiCategoriesControl* _categoriesView;
	UIKeyboardEmojiFactory* _emojiFactory;
	UIKeyboardEmojiRecentsController* _recentsController;
	UIKeyboardEmojiCategoryController* _categoryController;
}
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)setFrame:(CGRect)frame;
-(void)updateCornerButtonImages;
-(void)layoutSubviews;
-(void)deactivateActiveKeys;
-(id)defaultsDictionary;
-(id)emojiForCodePoint:(id)codePoint;
-(void)emojiSelected:(id)selected;
-(id)recents;
-(void)save:(id)save;
-(void)globeDown;
-(void)globeSwitch;
-(void)deleteBegin;
-(void)deleteEnd;
-(BOOL)shouldShowIndicator;
-(void)categoryChangedNoSounds;
-(void)showKeyboardType:(int)type withAppearance:(int)appearance;
-(void)categoryChanged;
-(void)categoryReselected;
-(BOOL)canHandleHandEvent:(GSEventRef)event;
-(BOOL)handleHandEvent:(GSEventRef)event;
@end

