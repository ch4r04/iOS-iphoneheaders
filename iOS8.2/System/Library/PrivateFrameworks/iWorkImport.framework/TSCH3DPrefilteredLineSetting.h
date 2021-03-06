/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDStroke;

@interface TSCH3DPrefilteredLineSetting : NSObject {

	char mDisableColorOutput;
	char mCullBackfaces;
	char mUseNormals;
	tvec4<float> mFilterRadius;
	float mLineWidth;
	tvec4<float> mStrokeColor;
	TSDStroke* mStroke;

}

@property (assign,nonatomic) char useNormals; 
@property (assign,nonatomic) char disableColorOutput; 
@property (assign,nonatomic) char cullBackfaces; 
@property (assign,nonatomic) tvec4<float> filterRadius; 
@property (assign,nonatomic) float lineWidth; 
@property (assign,nonatomic) tvec4<float> strokeColor; 
@property (nonatomic,copy) TSDStroke * stroke; 
+(id)setting;
-(void)setUseNormals:(char)arg1 ;
-(void)setDisableColorOutput:(char)arg1 ;
-(void)setCullBackfaces:(char)arg1 ;
-(void)setFilterRadius:(tvec4<float>)arg1 ;
-(char)useNormals;
-(char)disableColorOutput;
-(char)cullBackfaces;
-(tvec4<float>)filterRadius;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSDStroke *)stroke;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(void)setStrokeColor:(tvec4<float>)arg1 ;
-(tvec4<float>)strokeColor;
-(void)setStroke:(TSDStroke *)arg1 ;
@end

