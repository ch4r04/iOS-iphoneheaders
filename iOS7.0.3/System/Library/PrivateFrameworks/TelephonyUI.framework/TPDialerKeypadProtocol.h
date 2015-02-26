/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol TPDialerKeypadProtocol <NSObject>
@optional
-(void)performTapActionDownForHighlightedKey;
-(void)performTapActionEndForHighlightedKey;

@required
-(void)setDelegate:(id)arg1;
-(void)setPlaysSounds:(BOOL)arg1;
-(BOOL)supportsHardPause;
-(void)setSupportsHardPause:(BOOL)arg1;
-(void)highlightKeyAtIndex:(int)arg1;
-(int)indexForHighlightedKey;
@end
