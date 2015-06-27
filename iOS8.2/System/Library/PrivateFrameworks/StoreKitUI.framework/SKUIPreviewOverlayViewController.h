/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <StoreKitUI/SKUIArtworkRequestDelegate.h>
#import <StoreKitUI/SKUILayoutCacheDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class IKAppDocument, SKUILayoutCache, SKUIViewElementLayoutContext, SKUIHorizontalLockupView, SUPlayerStatus, UITapGestureRecognizer, NSString;

@interface SKUIPreviewOverlayViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, UIGestureRecognizerDelegate> {

	int _backgroundStyle;
	IKAppDocument* _document;
	SKUILayoutCache* _layoutCache;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUIHorizontalLockupView* _lockupView;
	SUPlayerStatus* _previewStatus;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (assign,nonatomic) int backgroundStyle;                   //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)loadView;
-(id)initWithDocument:(id)arg1 ;
-(void)_tapAction:(id)arg1 ;
-(void)setBackgroundStyle:(int)arg1 ;
-(int)backgroundStyle;
-(void)documentDidUpdate:(id)arg1 ;
-(void)layoutCacheDidFinishBatch:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)prepareOverlayView;
-(void)showPreviewProgressWithStatus:(id)arg1 animated:(char)arg2 ;
-(id)_layoutCache;
-(float)_overlayWidth;
-(void)reloadOverlayView;
@end
