/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _MFSearchResultsConsumer <NSObject>
@required
-(bool)_isResetting;
-(void)_addResults:(id)arg1 ofType:(int)arg2;
-(bool)_shouldProcessResultsAfterFinishingType:(int)arg1;
-(bool)_didFinishSearchForType:(int)arg1;
-(void)_enumerateSearchResultTypesInSortOrderUsingBlock:(/*^block*/ id)arg1;
-(void)_appendSortedResultsOfType:(int)arg1 excluding:(id)arg2 toResults:(id)arg3;
@end
