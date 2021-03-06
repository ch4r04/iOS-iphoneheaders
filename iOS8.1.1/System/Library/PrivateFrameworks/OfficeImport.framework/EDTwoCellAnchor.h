/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDAnchor.h>

@interface EDTwoCellAnchor : EDAnchor {

	EDCellAnchorMarker mFrom;
	EDCellAnchorMarker mTo;
	BOOL mIsRelative;
	int mEditAs;

}
-(id)init;
-(EDCellAnchorMarker)from;
-(void)setFrom:(EDCellAnchorMarker)arg1 ;
-(BOOL)isRelative;
-(EDCellAnchorMarker)to;
-(void)setRelative:(BOOL)arg1 ;
-(void)setTo:(EDCellAnchorMarker)arg1 ;
-(int)editAs;
-(void)setEditAs:(int)arg1 ;
@end

