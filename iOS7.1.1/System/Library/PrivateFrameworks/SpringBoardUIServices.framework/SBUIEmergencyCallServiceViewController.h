/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SpringBoardUIServices/SBUIEmergencyCallServiceInterface.h>

@class UIColor;

@interface SBUIEmergencyCallServiceViewController : UIViewController <SBUIEmergencyCallServiceInterface> {

	long long _backgroundStyle;
	UIColor* _tintColor;

}

@property (assign,nonatomic) long long backgroundStyle;              //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                  //@synthesize tintColor=_tintColor - In the implementation block
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)dealloc;
-(id)tintColor;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(long long)backgroundStyle;
-(void)backgroundStyle:(/*^block*/ id)arg1 ;
-(void)noteTintColorForBackgroundStyleChanged:(id)arg1 ;
@end

