/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/AVRecorderImpl.h>

@class NSMutableDictionary, NSString;

@interface AVRecorderAudioQueueImpl : NSObject <AVRecorderImpl> {

	BOOL _isActive;
	BOOL _isRecording;
	BOOL _isWriting;
	NSMutableDictionary* _attributes;
	unsigned _fileType;
	unsigned _audioCodec;
	long long _maxPCMFramesToRecord;
	BOOL _haveRecordedMaxPCMFrames;
	AudioStreamBasicDescription _recordingFormat;
	OpaqueAudioFileIDRef _audioFile;
	OpaqueAudioQueueRef _audioQueue;
	unsigned _numDeviceChannels;
	AudioQueueLevelMeterState* _audioLevels;
	AudioQueueLevelMeterState* _audioLevelsDB;
	unsigned long long _totalBytesRecorded;
	unsigned long long _totalPacketsRecorded;
	unsigned long long _totalFramesRecorded;
	AudioQueueBuffer* _buffers[3];
	BOOL _bufferUsed[3];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isRecording;
-(double)recordedDuration;
-(BOOL)takePhoto;
-(void)dealloc;
-(id)init;
-(BOOL)isActive;
-(void)stop;
-(void)deactivate;
-(BOOL)start;
-(void)setFilePath:(id)arg1 ;
-(id)filePath;
-(BOOL)activate:(id*)arg1 ;
-(BOOL)autoFocusAtPoint:(CGPoint)arg1 ;
-(float)micVolume;
-(void)setMicVolume:(float)arg1 ;
-(long long)recordedFileSizeInBytes;
-(unsigned long long)audioNumDeviceChannels;
-(BOOL)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2 ;
-(BOOL)audioCurrentAverageDecibelLevels:(float*)arg1 andPeakDecibelLevels:(float*)arg2 ;
-(void)copyEncoderCookieToFile;
-(BOOL)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2 useDB:(BOOL)arg3 ;
-(void)haveABuffer:(AudioQueueBuffer*)arg1 withTimeStamp:(const AudioTimeStamp*)arg2 andNumPackets:(unsigned)arg3 andPacketDescs:(const AudioStreamPacketDescription*)arg4 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)attributeForKey:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
@end

