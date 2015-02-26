/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABPropertyGroupItem.h>

@class CNPostalAddress;

@interface ABPropertyGroupPostalAddressItem : ABPropertyGroupItem

@property (nonatomic,readonly) CNPostalAddress * address; 
-(BOOL)isEquivalentToItem:(id)arg1 whenEditing:(BOOL)arg2 ;
-(id)normalizedValue;
-(id)defaultActionURL;
-(id)displayStringForValue:(id)arg1 ;
-(id)bestValue:(id)arg1 ;
-(BOOL)_isMinimalAddress:(id)arg1 ;
-(CNPostalAddress *)address;
@end
