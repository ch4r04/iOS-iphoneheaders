/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearch.h>

@class NSArray;

@interface TIWordSearchPinyin : TIWordSearch {

	id _dictionaryUpdateObserver;
	/*^block*/id _addressBookLoader;
	char _fuzzyPinyinEnabled;
	char _tenKeyPinyinEnabled;
	NSArray* _fuzzyPinyinPairs;

}

@property (assign,nonatomic) char fuzzyPinyinEnabled;                 //@synthesize fuzzyPinyinEnabled=_fuzzyPinyinEnabled - In the implementation block
@property (assign,nonatomic) char tenKeyPinyinEnabled;                //@synthesize tenKeyPinyinEnabled=_tenKeyPinyinEnabled - In the implementation block
@property (nonatomic,retain) NSArray * fuzzyPinyinPairs;              //@synthesize fuzzyPinyinPairs=_fuzzyPinyinPairs - In the implementation block
+(void)sendDictionaryUpdatePathsForInputMode:(id)arg1 toMecabra:(id)arg2 onQueue:(id)arg3 ;
+(id)pinyinCharacterSetWithTones;
+(id)dynamicDictionaryFileNames;
-(void)dealloc;
-(void)setFuzzyPinyinPairs:(NSArray *)arg1 ;
-(NSArray *)fuzzyPinyinPairs;
-(void)updateAddressBook;
-(void)updateDictionaryPaths;
-(char)fuzzyPinyinEnabled;
-(void)setFuzzyPinyinEnabled:(char)arg1 ;
-(void)updateFuzzyPinyinSettings;
-(char)tenKeyPinyinEnabled;
-(unsigned long)mecabraAnalysisOptionsWithAutocorrectionEnabled:(char)arg1 firstSyllableLocked:(char)arg2 reanalysisMode:(char)arg3 hardwareKeyboardMode:(char)arg4 ;
-(void)clearCacheForInputString:(id)arg1 selectedHiddenCandidateIndex:(unsigned)arg2 ;
-(void)setTenKeyPinyinEnabled:(char)arg1 ;
-(int)mecabraInputMethodType;
-(void)updateMecabraState;
-(id)candidatesCacheKeyForOperation:(id)arg1 ;
-(id)uncachedCandidatesForOperation:(id)arg1 ;
-(void)clearObservers;
@end
