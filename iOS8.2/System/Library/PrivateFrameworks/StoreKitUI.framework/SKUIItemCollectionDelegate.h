/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUIItemCollectionDelegate <NSObject>
@optional
-(void)itemCollectionController:(id)arg1 applyScreenshotImage:(id)arg2 toCellLayout:(id)arg3;
-(id)itemCollectionController:(id)arg1 screenshotForItem:(id)arg2;
-(char)shouldCacheAheadWhenIdleForItemCollectionController:(id)arg1;

@required
-(id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(int)arg2;
-(NSRange*)itemCollectionController:(id)arg1 itemPageRangeForOffset:(CGPoint)arg2;
-(NSRange*)visibleItemRangeForItemCollectionController:(id)arg1;

@end

