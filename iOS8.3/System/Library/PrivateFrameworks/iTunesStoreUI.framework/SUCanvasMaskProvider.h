/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:39:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUMaskProvider.h>

@class SUScriptCanvasFunction;

@interface SUCanvasMaskProvider : SUMaskProvider {

	SUScriptCanvasFunction* _function;

}
-(void)dealloc;
-(id)initWithFunction:(id)arg1 ;
-(CGPathRef)copyPathForMaskWithSize:(CGSize)arg1 ;
-(id)copyMaskImageWithSize:(CGSize)arg1 ;
@end
