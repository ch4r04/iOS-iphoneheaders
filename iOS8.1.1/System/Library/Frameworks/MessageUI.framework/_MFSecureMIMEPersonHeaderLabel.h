/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, NSString;

@interface _MFSecureMIMEPersonHeaderLabel : UIView {

	UIImageView* _imageView;
	UILabel* _label;

}

@property (nonatomic,copy) NSString * text; 
-(id)initWithImage:(id)arg1 text:(id)arg2 textColor:(id)arg3 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end
