/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <coreauthd/MechanismBase.h>

@interface MechanismPassphrase : MechanismBase {

	unsigned _purpose;

}

@property (nonatomic,readonly) unsigned purpose;              //@synthesize purpose=_purpose - In the implementation block
-(id)initWithPassphrasePurpose:(unsigned)arg1 ;
-(void)enterPassphrase:(id)arg1 reply:(/*^block*/id)arg2 ;
-(unsigned)purpose;
@end
