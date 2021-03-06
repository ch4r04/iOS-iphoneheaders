/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <FacebookSettings/PSHeaderFooterView.h>

@class NSString, UILabel;

@interface SLFacebookAccountVerificationFooterView : UIView <PSHeaderFooterView> {

	NSString* _verificationMessage;
	UILabel* _verificationMessageLabel;

}
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)layoutSubviews;
-(id)_font;
-(double)_heightForMessageConstrainedToWidth:(double)arg1 ;
@end

