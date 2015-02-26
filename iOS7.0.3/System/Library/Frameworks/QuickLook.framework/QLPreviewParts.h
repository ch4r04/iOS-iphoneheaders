/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <QuickLook/QuickLook-Structs.h>
@class NSURL, NSData, NSString, NSURLConnection, NSURLResponse, NSMutableSet, NSMutableDictionary, NSThread, NSError, NSURLRequest, NSSet;

@interface QLPreviewParts : NSObject {

	NSURL* _url;
	NSData* _data;
	NSString* _fileName;
	NSString* _uti;
	NSString* _password;
	BOOL _progressive;
	void* _convertFunction;
	NSURLConnection* _connection;
	id _delegate;
	int _pageCount;
	float _pageWidth;
	float _pageHeight;
	NSURL* previewURL;
	NSURLResponse* previewResponse;
	NSMutableSet* registeredURLs;
	NSMutableSet* outstandingURLs;
	NSMutableDictionary* encodingsForURLs;
	NSThread* delegateCallbackThread;
	NSError* mainError;
	BOOL computed;
	BOOL cancelled;
	const void* representedObject;
	SCD_Struct_QL0* representedObjectCallbacks;
	long representedObjectProtection;
	BOOL htmlErrorDisabled;

}

@property (nonatomic,retain) NSURL * url;                                    //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * fileName;                            //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSString * uti;                                 //@synthesize uti=_uti - In the implementation block
@property (nonatomic,retain) NSString * password;                            //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL progressive;                               //@synthesize progressive=_progressive - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                   //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) id delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL htmlErrorDisabled; 
@property (nonatomic,readonly) NSURLRequest * previewRequest; 
@property (nonatomic,readonly) NSURLResponse * previewResponse; 
@property (nonatomic,readonly) NSURL * previewURL; 
@property (nonatomic,readonly) NSSet * attachmentURLs; 
@property (readonly) int pageCount;                                          //@synthesize pageCount=_pageCount - In the implementation block
@property (readonly) float pageWidth;                                        //@synthesize pageWidth=_pageWidth - In the implementation block
@property (readonly) float pageHeight;                                       //@synthesize pageHeight=_pageHeight - In the implementation block
@property (getter=isComputed,readonly) BOOL computed; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
+(void)registerPreview:(id)arg1 ;
+(void)unregisterPreview:(id)arg1 ;
+(BOOL)isSafeURL:(id)arg1 ;
+(BOOL)isSafeRequest:(id)arg1 ;
+(id)safeURLScheme;
+(id)relativeStringForSafeURL:(id)arg1 ;
-(id)password;
-(void)setPassword:(id)arg1 ;
-(void)setError:(id)arg1 ;
-(id)previewURL;
-(void)setUti:(id)arg1 ;
-(BOOL)isComputed;
-(id)uti;
-(void)startComputingPreview;
-(void)setHtmlErrorDisabled:(BOOL)arg1 ;
-(BOOL)htmlErrorDisabled;
-(void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(BOOL)arg3 ;
-(id)mimeTypeForAttachmentURL:(id)arg1 ;
-(id)_voidRequest;
-(id)_requestForURL:(id)arg1 ;
-(void)computePreviewInThread;
-(void)_protectRepresentedObjectSafely;
-(void)computePreview;
-(void)_discardRepresentedObjectSafely;
-(void)startDataRepresentationWithContentType:(id)arg1 properties:(id)arg2 ;
-(void)_registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3 ;
-(void)setDocumentObject:(const void*)arg1 callbacks:(const SCD_Struct_QL0*)arg2 ;
-(const void*)documentObject;
-(id)newAttachmentURLWithID:(id)arg1 properties:(id)arg2 ;
-(id)newSafeAttachmentURLWithID:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3 ;
-(unsigned long)cfEncodingForAttachmentURL:(id)arg1 ;
-(BOOL)progressive;
-(void)setProgressive:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)data;
-(void)setData:(id)arg1 ;
-(BOOL)isCancelled;
-(void)cancel;
-(int)pageCount;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(id)attachmentURLs;
-(id)fileName;
-(float)pageWidth;
-(float)pageHeight;
-(void)setFileName:(id)arg1 ;
-(id)previewRequest;
-(id)safeRequestForRequest:(id)arg1 ;
-(id)previewResponse;
@end
