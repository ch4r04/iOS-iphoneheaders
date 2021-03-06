/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <AssistantServices/NSSecureCoding.h>
#import <AssistantServices/NSCopying.h>

@class NSString, AFSiriContext;

@interface AFDictationOptions : NSObject <NSSecureCoding, NSCopying> {

	NSString* _applicationName;
	NSString* _applicationVersion;
	AFSiriContext* _context;
	NSString* _fieldLabel;
	NSString* _fieldIdentifier;
	NSString* _interactionIdentifier;
	long long _keyboardType;
	NSString* _prefixText;
	NSString* _postfixText;
	NSString* _selectedText;
	long long _returnKeyType;
	long long _transcriptionMode;
	NSString* _languageCodeOverride;

}

@property (nonatomic,copy) NSString * applicationName;                    //@synthesize applicationName=_applicationName - In the implementation block
@property (nonatomic,copy) NSString * applicationVersion;                 //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (nonatomic,retain) AFSiriContext * context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * fieldLabel;                         //@synthesize fieldLabel=_fieldLabel - In the implementation block
@property (nonatomic,copy) NSString * fieldIdentifier;                    //@synthesize fieldIdentifier=_fieldIdentifier - In the implementation block
@property (nonatomic,copy) NSString * interactionIdentifier;              //@synthesize interactionIdentifier=_interactionIdentifier - In the implementation block
@property (assign,nonatomic) long long keyboardType;                      //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,copy) NSString * prefixText;                         //@synthesize prefixText=_prefixText - In the implementation block
@property (nonatomic,copy) NSString * postfixText;                        //@synthesize postfixText=_postfixText - In the implementation block
@property (nonatomic,copy) NSString * selectedText;                       //@synthesize selectedText=_selectedText - In the implementation block
@property (assign,nonatomic) long long returnKeyType;                     //@synthesize returnKeyType=_returnKeyType - In the implementation block
@property (assign,nonatomic) long long transcriptionMode;                 //@synthesize transcriptionMode=_transcriptionMode - In the implementation block
@property (nonatomic,copy) NSString * languageCodeOverride;               //@synthesize languageCodeOverride=_languageCodeOverride - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(AFSiriContext *)context;
-(void)setContext:(AFSiriContext *)arg1 ;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1 ;
-(NSString *)selectedText;
-(void)setApplicationName:(NSString *)arg1 ;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(NSString *)prefixText;
-(void)setFieldLabel:(NSString *)arg1 ;
-(void)setFieldIdentifier:(NSString *)arg1 ;
-(void)setPrefixText:(NSString *)arg1 ;
-(void)setPostfixText:(NSString *)arg1 ;
-(void)setSelectedText:(NSString *)arg1 ;
-(NSString *)postfixText;
-(NSString *)fieldIdentifier;
-(NSString *)interactionIdentifier;
-(void)setInteractionIdentifier:(NSString *)arg1 ;
-(NSString *)languageCodeOverride;
-(void)setLanguageCodeOverride:(NSString *)arg1 ;
-(long long)transcriptionMode;
-(void)setTranscriptionMode:(long long)arg1 ;
-(id)dictationOptionsWithoutTextContext;
-(NSString *)fieldLabel;
-(NSString *)applicationVersion;
-(NSString *)applicationName;
@end

