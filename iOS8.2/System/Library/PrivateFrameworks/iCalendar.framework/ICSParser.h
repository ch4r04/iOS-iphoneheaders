/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ICSTokenizer, NSData;

@interface ICSParser : NSObject {

	int _options;
	ICSTokenizer* _lexer;
	NSData* _data;

}

@property (readonly) ICSTokenizer * lexer;              //@synthesize lexer=_lexer - In the implementation block
+(id)entitiesFromNSData:(id)arg1 options:(int)arg2 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 options:(unsigned)arg2 ;
-(void)parseParameter:(id)arg1 ;
-(char)createPropertyType:(int)arg1 component:(id)arg2 withName:(id)arg3 ;
-(id)makeComponent:(char*)arg1 ;
-(void)parseComponent:(id)arg1 ;
-(char)parseProperty:(id)arg1 ;
-(id)parseData;
-(ICSTokenizer *)lexer;
@end
