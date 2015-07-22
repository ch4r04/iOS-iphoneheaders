/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UITableViewCell.h>

@class _MessageCallToActionCellView, MessageCallToAction;

@interface MessageCallToActionCell : UITableViewCell {

	_MessageCallToActionCellView* _actionView;

}

@property (assign,nonatomic) id<MFSuggestionHandlingDelegate> delegate; 
@property (nonatomic,retain) MessageCallToAction * action; 
-(void)dealloc;
-(void)setDelegate:(id<MFSuggestionHandlingDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MFSuggestionHandlingDelegate>)delegate;
-(MessageCallToAction *)action;
-(void)setAction:(MessageCallToAction *)arg1 ;
@end
