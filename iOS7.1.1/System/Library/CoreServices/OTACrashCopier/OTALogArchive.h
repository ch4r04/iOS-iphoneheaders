/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:18 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OTACrashCopier/OTACrashCopier-Structs.h>
@interface OTALogArchive : NSObject {

	z_stream_s* _strm;
	char* _in;
	char* _out;

}
-(id)copyDeflatedDataFromStream:(_sFILE*)arg1 ;
-(void)dealloc;
-(id)init;
@end
