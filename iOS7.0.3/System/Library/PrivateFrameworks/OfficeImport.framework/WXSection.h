/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WXSection : NSObject
+(void)initialize;
+(float)scaleFromPrinterSettings:(id)arg1 ;
+(void)readFrom:(xmlNode*)arg1 to:(id)arg2 state:(id)arg3 ;
+(void)mapHeader:(xmlNode*)arg1 toSection:(id)arg2 state:(id)arg3 ;
+(void)mapFooter:(xmlNode*)arg1 toSection:(id)arg2 state:(id)arg3 ;
+(void)mapPrinterSettings:(xmlNode*)arg1 toSection:(id)arg2 state:(id)arg3 ;
+(void)mapProperties:(xmlNode*)arg1 toSection:(id)arg2 state:(id)arg3 ;
@end

