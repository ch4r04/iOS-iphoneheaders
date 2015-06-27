/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIPrintPaper : NSObject {

	int _paperOrientation;
	id _internal;

}

@property (readonly) CGSize paperSize; 
@property (readonly) CGRect printableRect; 
+(id)bestPaperForPageSize:(CGSize)arg1 andContentType:(int)arg2 withPapersFromArray:(id)arg3 ;
+(id)_defaultPaperForOutputType:(int)arg1 ;
+(id)_defaultPKPaperForOuptutType:(int)arg1 ;
+(id)bestPaperForPageSize:(CGSize)arg1 withPapersFromArray:(id)arg2 ;
+(id)_readyPaperListForPrinter:(id)arg1 withDuplexMode:(int)arg2 forContentType:(int)arg3 contentSize:(CGSize)arg4 ;
+(id)_defaultPaperListForOutputType:(int)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)_pkPaper;
-(CGSize)paperSize;
-(CGRect)printableRect;
-(void)_updatePKPaper:(id)arg1 ;
-(id)_initWithPrintKitPaper:(id)arg1 ;
-(CGRect)_printableRectForDuplex:(char)arg1 ;
-(id)_localizedName;
-(id)_localizedMediaTypeName;
-(void)_setPaperOrientation:(int)arg1 ;
-(int)_paperOrientation;
-(CGRect)printRect;
@end
