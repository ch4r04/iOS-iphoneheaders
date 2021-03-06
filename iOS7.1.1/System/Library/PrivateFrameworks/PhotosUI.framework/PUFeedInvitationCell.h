/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUFeedCell.h>

@class NSString, UILabel, UIButton, UIView;

@interface PUFeedInvitationCell : PUFeedCell {

	NSString* _title;
	NSString* _subtitle;
	UILabel* __titleLabel;
	UILabel* __subtitleLabel;
	UIButton* __acceptButon;
	UIButton* __declineButton;
	UIView* __bottomSeparatorView;

}

@property (nonatomic,copy) NSString * title;                                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (setter=_setTitleLabel:,nonatomic,retain) UILabel * _titleLabel;                               //@synthesize _titleLabel=__titleLabel - In the implementation block
@property (setter=_setSubtitleLabel:,nonatomic,retain) UILabel * _subtitleLabel;                         //@synthesize _subtitleLabel=__subtitleLabel - In the implementation block
@property (setter=_setAcceptButton:,nonatomic,retain) UIButton * _acceptButon;                           //@synthesize _acceptButon=__acceptButon - In the implementation block
@property (setter=_setDeclineButton:,nonatomic,retain) UIButton * _declineButton;                        //@synthesize _declineButton=__declineButton - In the implementation block
@property (setter=_setBottomSeparatorView:,nonatomic,retain) UIView * _bottomSeparatorView;              //@synthesize _bottomSeparatorView=__bottomSeparatorView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_delegate;
-(id)title;
-(id)_titleLabel;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void).cxx_destruct;
-(id)_subtitleLabel;
-(void)_setTitleLabel:(id)arg1 ;
-(void)_setSubtitleLabel:(id)arg1 ;
-(void)_replyButtonAction:(id)arg1 ;
-(void)_setAcceptButton:(id)arg1 ;
-(void)_setDeclineButton:(id)arg1 ;
-(void)_setBottomSeparatorView:(id)arg1 ;
-(id)_acceptButon;
-(id)_declineButton;
-(id)_bottomSeparatorView;
@end

