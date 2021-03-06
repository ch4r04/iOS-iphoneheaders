/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:02 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UICollectionViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/_UIDocumentPickerContainedViewController.h>

@protocol _UIDocumentPickerServiceViewController;
@class _UIDocumentPickerSortOrderView, _UIDocumentPickerContainerModel, NSArray, UIActivityIndicatorView, NSString;

@interface _UIDocumentPickerDocumentCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, _UIDocumentPickerContainedViewController> {

	id<_UIDocumentPickerServiceViewController> _weak_serviceViewController;
	char _shouldHideSortBar;
	char _updatesMayAnimate;
	_UIDocumentPickerContainerModel* _model;
	id _monitoringToken;
	_UIDocumentPickerSortOrderView* _sortView;
	NSArray* _modelObjects;
	UIActivityIndicatorView* _initialActivityView;

}

@property (nonatomic,retain) _UIDocumentPickerContainerModel * model;                                              //@synthesize model=_model - In the implementation block
@property (assign,nonatomic,__weak) id<_UIDocumentPickerServiceViewController> serviceViewController; 
@property (nonatomic,retain) id monitoringToken;                                                                   //@synthesize monitoringToken=_monitoringToken - In the implementation block
@property (assign,nonatomic) char shouldHideSortBar;                                                               //@synthesize shouldHideSortBar=_shouldHideSortBar - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerSortOrderView * sortView;                                            //@synthesize sortView=_sortView - In the implementation block
@property (nonatomic,copy) NSArray * modelObjects;                                                                 //@synthesize modelObjects=_modelObjects - In the implementation block
@property (assign,nonatomic) char updatesMayAnimate;                                                               //@synthesize updatesMayAnimate=_updatesMayAnimate - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * initialActivityView;                                        //@synthesize initialActivityView=_initialActivityView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(NSArray *)modelObjects;
-(void)setModelObjects:(NSArray *)arg1 ;
-(_UIDocumentPickerContainerModel *)model;
-(id<_UIDocumentPickerServiceViewController>)serviceViewController;
-(void)setServiceViewController:(id<_UIDocumentPickerServiceViewController>)arg1 ;
-(void)containersChangedWithSnapshot:(id)arg1 differences:(id)arg2 ;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(_UIDocumentPickerContainerModel *)arg1 ;
-(void)scrollSortViewToVisible;
-(_UIDocumentPickerSortOrderView *)sortView;
-(void)setShouldHideSortBar:(char)arg1 ;
-(void)setSortView:(_UIDocumentPickerSortOrderView *)arg1 ;
-(void)setInitialActivityView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)initialActivityView;
-(void)_dynamicTypeSizeChanged:(id)arg1 ;
-(void)_unlockAnimations;
-(void)setUpdatesMayAnimate:(char)arg1 ;
-(void)setMonitoring:(char)arg1 ;
-(void)_updateIconSpacing;
-(char)shouldHideSortBar;
-(id)monitoringToken;
-(void)setMonitoringToken:(id)arg1 ;
-(char)updatesMayAnimate;
@end

