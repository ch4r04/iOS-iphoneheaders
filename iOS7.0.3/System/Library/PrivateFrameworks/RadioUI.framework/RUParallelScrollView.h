/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIScrollView;

@interface RUParallelScrollView : UIScrollView {

	UIScrollView* _targetScrollView;

}

@property (assign,nonatomic,__weak) UIScrollView * targetScrollView;              //@synthesize targetScrollView=_targetScrollView - In the implementation block
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setTargetScrollView:(id)arg1 ;
-(void)_layoutTargetScrollView;
-(id)targetScrollView;
-(void).cxx_destruct;
@end

