/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBHUDView.h>

@interface SBRingerHUDView : SBHUDView {

	char _silent;

}

@property (assign,getter=isSilent,nonatomic) char silent;              //@synthesize silent=_silent - In the implementation block
-(void)_updateSilentImage;
-(void)setSilent:(char)arg1 ;
-(char)isSilent;
-(id)init;
@end

