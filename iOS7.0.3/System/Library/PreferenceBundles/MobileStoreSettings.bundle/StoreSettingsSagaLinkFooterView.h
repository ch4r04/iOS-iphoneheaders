/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/MobileStoreSettings.bundle/MobileStoreSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileStoreSettings/MobileStoreSettings-Structs.h>
#import <UIKit/UIView.h>
#import <Preferences/PSHeaderFooterView.h>

@class NSMutableArray;

@interface StoreSettingsSagaLinkFooterView : UIView <PSHeaderFooterView> {

	NSMutableArray* _linkButtons;

}
-(id)initWithSpecifier:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)_text;
-(CFAttributedStringRef)_newAttributedString;
-(void)_linkButtonHighlightChanged:(id)arg1 ;
-(id)_infoURL;
-(void)_linkButtonAction:(id)arg1 ;
@end

