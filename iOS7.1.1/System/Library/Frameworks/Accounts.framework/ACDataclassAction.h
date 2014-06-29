/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@interface ACDataclassAction : NSObject <NSSecureCoding> {

	bool _isDestructive;
	long long _type;

}

@property (nonatomic,readonly) long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) bool isDestructive;              //@synthesize isDestructive=_isDestructive - In the implementation block
+(id)destructiveActionWithType:(long long)arg1 ;
+(bool)supportsSecureCoding;
+(id)actionWithType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 destructivity:(bool)arg2 ;
-(bool)isDestructive;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
@end
