/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSUColor;

@interface TSTTableBadge : NSObject {

	int _badgeType;
	TSUColor* _color;
	double _viewScale;
	CGRect _frame;

}

@property (assign,nonatomic) int badgeType;                 //@synthesize badgeType=_badgeType - In the implementation block
@property (nonatomic,retain) TSUColor * color;              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double viewScale;              //@synthesize viewScale=_viewScale - In the implementation block
@property (assign,nonatomic) CGRect frame;                  //@synthesize frame=_frame - In the implementation block
+(id)badgeWithType:(int)arg1 color:(id)arg2 viewScale:(double)arg3 frame:(CGRect)arg4 ;
-(double)viewScale;
-(void)setBadgeType:(int)arg1 ;
-(int)badgeType;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(TSUColor *)color;
-(void)setColor:(TSUColor *)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setViewScale:(double)arg1 ;
@end

