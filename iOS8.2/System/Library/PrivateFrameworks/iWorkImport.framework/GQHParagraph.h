/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQHParagraph : NSObject
+(int)handleParagraph:(id)arg1 state:(id)arg2 bulletStates:(CFDictionaryRef)arg3 isMultiColumn:(char)arg4 ;
+(int)mapParagraphStyle:(id)arg1 paragraph:(id)arg2 state:(id)arg3 bulletStates:(CFDictionaryRef)arg4 isMultiColumn:(char)arg5 ;
+(int)handleInlineList:(id)arg1 state:(id)arg2 ;
+(int)handleLink:(id)arg1 state:(id)arg2 ;
+(int)handleBookmark:(id)arg1 state:(id)arg2 ;
+(id)getBulletStyle:(id)arg1 level:(int)arg2 ;
+(char)retrieveFontSizeForFirstCharacter:(id)arg1 fontSize:(float*)arg2 ;
+(char)setupBulletStatesForParagraphStyle:(id)arg1 paragraph:(id)arg2 state:(id)arg3 bulletStates:(CFDictionaryRef)arg4 ;
+(CFDictionaryRef)prepareBullet:(id)arg1 paragraph:(id)arg2 style:(id)arg3 state:(id)arg4 bulletStates:(CFDictionaryRef)arg5 showBullet:(char)arg6 ;
+(void)mapBullet:(CFDictionaryRef)arg1 state:(id)arg2 ;
@end
