/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:13 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCharacterSet;

@interface Romakana : NSObject {

	BOOL _kanaMode;
	NSCharacterSet* _consonantsCharacterSet;

}
+(id)hiraganaString:(id)arg1 mappingArray:(id)arg2 withKanaMode:(BOOL)arg3 ;
+(id)oneKanaToRoma:(id)arg1 ;
+(id)hiraganaString:(id)arg1 withKanaMode:(BOOL)arg2 ;
+(id)kanaSymbol:(id)arg1 ;
-(void)dealloc;
-(id)roma2hiragana:(id)arg1 stripIncompleteRomajiAtEnd:(BOOL)arg2 incompleteRomajiLength:(unsigned long long*)arg3 ;
-(id)initWithKanaMode:(BOOL)arg1 ;
-(id)roma2katakana:(id)arg1 ;
-(id)adjustIncompleteRomaji:(id)arg1 ;
@end
