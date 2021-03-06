/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView, UIImageView, WiFiNetwork;

@interface APTableCell : PSTableCell {

	UIActivityIndicatorView* _spinnerView;
	UIImageView* _lockView;
	UIImageView* _barsView;
	BOOL _showSpinner;
	BOOL _labelOnly;
	BOOL _hidesInfoButton;
	WiFiNetwork* _network;

}

@property (nonatomic,retain) WiFiNetwork * network;              //@synthesize network=_network - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)updateImages;
-(void)setNetwork:(id)arg1 ;
-(void)setLabelOnly;
-(void)setHidesInfoButton:(BOOL)arg1 ;
-(BOOL)_displayCheckmark;
-(float)_rightBarsPadding;
-(BOOL)_displaySpinner;
-(void)_dumpCellLayout;
-(id)network;
-(void)setSpinner:(BOOL)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)setDetailText:(id)arg1 ;
@end

