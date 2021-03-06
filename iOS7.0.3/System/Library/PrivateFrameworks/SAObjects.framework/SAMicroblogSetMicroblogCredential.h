/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SAMicroblogSocialCredential, NSString;

@interface SAMicroblogSetMicroblogCredential : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SAMicroblogSocialCredential * socialCredential; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)setMicroblogCredential;
+(id)setMicroblogCredentialWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)socialCredential;
-(void)setSocialCredential:(id)arg1 ;
@end

