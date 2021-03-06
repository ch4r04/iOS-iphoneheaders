/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLProgram.h>

@interface VGLSkyProgram : VGLProgram {

	int _uHorizon;
	VGLColor _horizon;
	int _uColor;
	VGLColor _color;
	int _uSkyStartOffset;
	float _skyStartOffset;
	float _screenHeight;
	int _uScreenHeight;
	VGLColor _horizonColor;
	VGLColor _baseColor;

}

@property (assign,nonatomic) VGLColor horizon;                  //@synthesize horizonColor=_horizonColor - In the implementation block
@property (assign,nonatomic) VGLColor color;                    //@synthesize baseColor=_baseColor - In the implementation block
@property (assign,nonatomic) float skyStartOffset;              //@synthesize skyStartOffset=_skyStartOffset - In the implementation block
@property (assign,nonatomic) float screenHeight;                //@synthesize screenHeight=_screenHeight - In the implementation block
+(id)vertName;
+(id)fragName;
-(VGLColor)color;
-(void)setColor:(VGLColor)arg1 ;
-(id).cxx_construct;
-(void)setup;
-(void)setScreenHeight:(float)arg1 ;
-(void)setSkyStartOffset:(float)arg1 ;
-(void)setHorizon:(VGLColor)arg1 ;
-(VGLColor)horizon;
-(float)skyStartOffset;
-(float)screenHeight;
@end

