/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCBReader.h>

@class NSMutableArray, TSUNoCopyDictionary, WDDocument, WBOfficeArtReaderState;

@interface WBReader : OCBReader {

	WrdNoteTable* mFootnoteTable;
	WrdNoteTable* mEndnoteTable;
	WrdAnnotationTable* mAnnotationTable;
	WrdCPTableHeaders* mTableHeaders;
	WrdBookmarkTable* mBookmarkTable;
	WrdBookmarkTable* mAnnotationBookmarkTable;
	WrdFieldPositionTable* mFieldPositionTables[8];
	WrdStoryTable* mStoryTable;
	WrdStoryTable* mHeaderStoryTable;
	WrdFileShapeAddressTable* mFileShapeAddressTable;
	WrdFileShapeAddressTable* mFileShapeAddressHeaderTable;
	WrdEshObjectFactory* mEshObjectFactory;
	WrdParagraphProperties* mLastRowParagraphProperties;
	NSMutableArray* mAnnotationOwners;
	TSUNoCopyDictionary* mIndexToStyles;
	TSUNoCopyDictionary* mIndexToFonts;
	WDDocument* mTargetDocument;
	WBOfficeArtReaderState* mOfficeArtState;
	vector<WBTextBoxReaderInfo, std::__1::allocator<WBTextBoxReaderInfo> >* mTextBoxes;
	BOOL mReportProgress;
	id mAnnotationRangeStart;

}

@property (assign,nonatomic) WDDocument * targetDocument; 
-(void)dealloc;
-(void)initialize;
-(BOOL)start;
-(void)setOfficeArtState:(id)arg1 ;
-(id)officeArtState;
-(id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2 ;
-(id)read;
-(OCCEncryptionInfoReader*)encryptionInfoReader;
-(OCCBinaryStreamer*)allocBinaryStreamerWithCryptoKey:(OCCCryptoKeyRef)arg1 baseOutputFilenameInUTF8:(const char*)arg2 ;
-(id)drawableForShapeId:(unsigned)arg1 ;
-(WrdAnnotationTable*)annotationTable;
-(WrdBinaryReader*)wrdReader;
-(id)annotationOwner:(int)arg1 ;
-(WrdBookmarkTable*)annotationBookmarkTable;
-(void)setAnnotationRangeStart:(id)arg1 ;
-(id)readCharactersFrom:(unsigned)arg1 to:(unsigned)arg2 textType:(int)arg3 ;
-(WrdBookmarkTable*)bookmarkTable;
-(id)fontAtIndex:(int)arg1 ;
-(id)styleAtIndex:(int)arg1 ;
-(id)readCharactersForTextRun:(WrdTextRun*)arg1 ;
-(void)setTargetDocument:(id)arg1 ;
-(WrdCPTableHeaders*)tableHeaders;
-(unsigned)textBoxCount;
-(WBTextBoxReaderInfo)textBoxInfoAtIndex:(unsigned)arg1 ;
-(void)addFont:(id)arg1 index:(int)arg2 ;
-(WrdNoteTable*)footnoteTable;
-(WrdNoteTable*)endnoteTable;
-(WrdFileShapeAddressTable*)fileShapeAddressHeaderTable;
-(WrdFileShapeAddressTable*)fileShapeAddressTable;
-(id)annotationRangeStart;
-(WrdFieldPositionTable*)fieldPositionTableForTextType:(int)arg1 ;
-(WrdStoryTable*)storyTable;
-(WrdStoryTable*)headerStoryTable;
-(WrdEshObjectFactory*)eshObjectFactory;
-(WrdParagraphProperties*)lastRowParagraphProperties;
-(void)setLastRowParagraphProperties:(WrdParagraphProperties*)arg1 ;
-(void)addStyle:(id)arg1 index:(int)arg2 ;
-(BOOL)reportProgress;
-(void)setReportProgress:(BOOL)arg1 ;
-(void)cacheTextBox:(id)arg1 withChainIndex:(unsigned short)arg2 ;
-(id)targetDocument;
@end

