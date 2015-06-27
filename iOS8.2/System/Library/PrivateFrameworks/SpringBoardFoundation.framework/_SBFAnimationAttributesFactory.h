/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBFAnimationFactory.h>

@class _UIViewAnimationAttributes;

@interface _SBFAnimationAttributesFactory : SBFAnimationFactory {

	_UIViewAnimationAttributes* _attributes;

}
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)duration;
-(double)delay;
-(id)_initWithSettings:(id)arg1 ;
-(id)_initWithAttributes:(id)arg1 ;
-(void)_animateWithAdditionalDelay:(double)arg1 options:(unsigned)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)factoryWithTimingFunction:(id)arg1 ;
@end
