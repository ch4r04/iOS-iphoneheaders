/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class SSAccount, NSString, SSDialog, NSURL;

@interface SSResponseAction : NSObject <NSCopying> {

	SSAccount* _account;
	NSString* _actionType;
	NSString* _clientIdentifier;
	NSString* _creditsString;
	SSDialog* _dialog;
	NSString* _footerSection;
	NSURL* _url;
	int _urlBagType;

}

@property (nonatomic,readonly) NSString * actionType;                    //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) SSAccount * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * creditsString;                 //@synthesize creditsString=_creditsString - In the implementation block
@property (nonatomic,readonly) SSDialog * dialog;                        //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,readonly) NSString * footerSection;                 //@synthesize footerSection=_footerSection - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) int URLBagType;                           //@synthesize urlBagType=_urlBagType - In the implementation block
+(id)_dialogActionWithDialog:(id)arg1 ;
+(id)_invalidateURLBagsAction;
+(id)_setActiveAccountActionWithAccount:(id)arg1 ;
+(id)_setCreditsActionWithCredits:(id)arg1 account:(id)arg2 ;
+(id)_actionWithActionType:(id)arg1 ;
+(id)_urlActionWithType:(id)arg1 URL:(id)arg2 ;
+(id)_selectFooterActionWithSection:(id)arg1 ;
+(id)_checkInAppQueueActionWithClientID:(id)arg1 environment:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)URL;
-(id)account;
-(id)actionType;
-(id)footerSection;
-(id)clientIdentifier;
-(int)URLBagType;
-(id)dialog;
-(id)creditsString;
@end

