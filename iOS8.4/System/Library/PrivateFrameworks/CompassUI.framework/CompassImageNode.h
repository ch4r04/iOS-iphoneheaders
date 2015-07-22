/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CompassUI/CompassUI-Structs.h>
@class NSString;

@interface CompassImageNode : NSObject {

	CompassImageNode* _leftChild;
	CompassImageNode* _rightChild;
	NSString* _imageKey;
	CGRect _rect;

}

@property (nonatomic,retain) CompassImageNode * leftChild;               //@synthesize leftChild=_leftChild - In the implementation block
@property (nonatomic,retain) CompassImageNode * rightChild;              //@synthesize rightChild=_rightChild - In the implementation block
@property (assign,nonatomic) CGRect rect;                                //@synthesize rect=_rect - In the implementation block
@property (nonatomic,copy) NSString * imageKey;                          //@synthesize imageKey=_imageKey - In the implementation block
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(id)insertImageWithSize:(CGSize)arg1 key:(id)arg2 ;
-(void)setImageKey:(NSString *)arg1 ;
-(NSString *)imageKey;
-(CompassImageNode *)rightChild;
-(CompassImageNode *)leftChild;
-(void)setLeftChild:(CompassImageNode *)arg1 ;
-(void)setRightChild:(CompassImageNode *)arg1 ;
@end
