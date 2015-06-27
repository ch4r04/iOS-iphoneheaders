/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:20:01 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned originatorType : 1;
	unsigned originatorVersion : 1;
} SCD_Struct_MP1;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct {
	unsigned containerItemType : 1;
} SCD_Struct_MP3;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct UIOffset {
	float horizontal;
	float vertical;
} UIOffset;

typedef struct {
	CGSize baseSize;
	CGRect bounds;
	CGPoint centerInLocalCoordinates;
	char forcesIntegralX;
	char forcesIntegralY;
	UIOffset maximumRelativeOffsetStep;
	float scale;
	CGSize sizeInsetStep;
	CGPoint vanishingPoint;
} SCD_Struct_MP8;

typedef struct __CFArray* CFArrayRef;
