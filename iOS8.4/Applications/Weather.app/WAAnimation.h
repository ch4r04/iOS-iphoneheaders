/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAnimation.h>

@class TabController;

@interface WAAnimation : UIAnimation {

	double _w0;
	double _zeta;
	double _wd;
	double _A;
	double _B;
	TabController* _tabController;
	double _animationDuration;

}

@property (nonatomic,retain) TabController * tabController;              //@synthesize tabController=_tabController - In the implementation block
@property (assign,nonatomic) double animationDuration;                   //@synthesize animationDuration=_animationDuration - In the implementation block
-(TabController *)tabController;
-(void)setTabController:(TabController *)arg1 ;
-(void)dealloc;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setProgress:(float)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(float)progressForFraction:(float)arg1 ;
-(double)animationDuration;
-(float)eval:(float)arg1 ;
@end

