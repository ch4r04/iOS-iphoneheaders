/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIVisualEffectLayerConfig.h>

@class UIColor;

@interface _UIVisualEffectVibrantLayerConfig : _UIVisualEffectLayerConfig {

	UIColor* _vibrantColor;
	UIColor* _tintColor;

}

@property (nonatomic,readonly) UIColor * vibrantColor;              //@synthesize vibrantColor=_vibrantColor - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                 //@synthesize tintColor=_tintColor - In the implementation block
+(id)layerWithVibrantColor:(id)arg1 tintColor:(id)arg2 filterType:(id)arg3 ;
-(void)dealloc;
-(UIColor *)tintColor;
-(void)configureLayerView:(id)arg1 ;
-(UIColor *)vibrantColor;
@end
