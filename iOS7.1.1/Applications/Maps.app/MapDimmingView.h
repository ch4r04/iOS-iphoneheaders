/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MapDimmingViewDelegate;
@interface MapDimmingView : UIView {

	<MapDimmingViewDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <MapDimmingViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void).cxx_destruct;
@end
