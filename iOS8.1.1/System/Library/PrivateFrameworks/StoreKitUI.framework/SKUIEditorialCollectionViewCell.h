/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICollectionViewCell.h>
#import <StoreKitUI/SKUICellLayoutParentView.h>

@class SKUIEditorialCellLayout, NSString;

@interface SKUIEditorialCollectionViewCell : SKUICollectionViewCell <SKUICellLayoutParentView> {

	SKUIEditorialCellLayout* _layout;
	BOOL _layoutNeedsLayout;

}

@property (nonatomic,readonly) SKUIEditorialCellLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(SKUIEditorialCellLayout *)layout;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setCellLayoutNeedsLayout;
@end
