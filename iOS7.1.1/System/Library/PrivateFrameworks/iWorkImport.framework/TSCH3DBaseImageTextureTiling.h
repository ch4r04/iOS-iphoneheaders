/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DTextureTiling.h>

@interface TSCH3DBaseImageTextureTiling : TSCH3DTextureTiling {

	tvec2<float> mScale;
	float mRotation;

}

@property (assign,nonatomic) tvec2<float> scale; 
@property (assign,nonatomic) float rotation; 
+(id)instanceWithArchive:(const Chart3DBaseImageTextureTilingArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(Chart3DBaseImageTextureTilingArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DBaseImageTextureTilingArchive*)arg1 unarchiver:(id)arg2 ;
-(void)restoreDefault;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(tvec2<float>)scale;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setScale:(tvec2<float>)arg1 ;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(id).cxx_construct;
@end

