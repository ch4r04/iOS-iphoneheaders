/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:05 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <QuartzCore/CALayer.h>
#import <iWorkImport/TSCHMultiDataAnimatingFrameLayerProtocol.h>

@interface TSCHMultiDataAnimatingFrameLayer : CALayer <TSCHMultiDataAnimatingFrameLayerProtocol> {

	CGRect mPresentationBounds;
	CGPoint mPresentationPosition;

}

@property (assign,nonatomic) CGRect presentationBounds; 
@property (assign,nonatomic) CGPoint presentationPosition; 
-(void)setPresentationBounds:(CGRect)arg1 ;
-(void)setPresentationPosition:(CGPoint)arg1 ;
-(CGRect)presentationBounds;
-(CGPoint)presentationPosition;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(CGRect)currentFrame;
@end

