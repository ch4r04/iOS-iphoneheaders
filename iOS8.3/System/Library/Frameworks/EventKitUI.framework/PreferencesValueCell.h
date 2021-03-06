/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:47:17 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@protocol EKCellShortener;
@interface PreferencesValueCell : EKUIConstrainedFontsTableViewCell {

	id<EKCellShortener> _shortener;

}

@property (assign,nonatomic,__weak) id<EKCellShortener> shortener;              //@synthesize shortener=_shortener - In the implementation block
-(void)setShortener:(id<EKCellShortener>)arg1 ;
-(void)_checkValueWidth;
-(id<EKCellShortener>)shortener;
-(void)layoutSubviews;
@end

