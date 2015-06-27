/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:37 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayRenderer.h>

@interface MKTileOverlayRenderer : MKOverlayRenderer
-(void)drawMapRect:(SCD_Struct_MK2)arg1 zoomScale:(float)arg2 inContext:(CGContextRef)arg3 ;
-(char)canDrawMapRect:(SCD_Struct_MK2)arg1 zoomScale:(float)arg2 ;
-(id)initWithTileOverlay:(id)arg1 ;
-(void)reloadData;
-(id)initWithOverlay:(id)arg1 ;
@end
