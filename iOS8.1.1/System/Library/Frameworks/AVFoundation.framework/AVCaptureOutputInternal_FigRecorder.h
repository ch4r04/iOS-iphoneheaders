/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureSession_FigRecorder, NSMutableArray;

@interface AVCaptureOutputInternal_FigRecorder : NSObject {

	AVCaptureSession_FigRecorder* session;
	NSMutableArray* connections;
	int changeSeed;
	CGAffineTransform metadataTransform;
	double rollAdjustment;
	BOOL physicallyMirrorsVideo;

}
-(void)dealloc;
-(id)init;
-(BOOL)isKindOfClass:(Class)arg1 ;
@end

