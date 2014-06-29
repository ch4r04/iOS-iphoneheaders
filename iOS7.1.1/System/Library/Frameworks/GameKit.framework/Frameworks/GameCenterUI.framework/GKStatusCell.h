/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionViewCell.h>

@class UILabel;

@interface GKStatusCell : GKCollectionViewCell {

	UILabel* _statusLabel;

}

@property (nonatomic,retain) UILabel * statusLabel;              //@synthesize statusLabel=_statusLabel - In the implementation block
-(bool)canRemoveItem;
-(id)statusLabel;
-(void)setStatusLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(void)setStatus:(id)arg1 ;
@end
