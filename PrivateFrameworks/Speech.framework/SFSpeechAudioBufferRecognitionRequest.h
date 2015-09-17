/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Speech.framework/Speech
 */

@interface SFSpeechAudioBufferRecognitionRequest : SFSpeechRecognitionRequest {
    BOOL _audioEnded;
    <SFSpeechRecognitionBufferDelegate> *_bufferDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queuedBuffers;
}

@property (nonatomic, readonly) AVAudioFormat *nativeAudioFormat;

- (void).cxx_destruct;
- (void)_appendAudioPCMBuffer:(id)arg1;
- (void)_appendAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_endAudio;
- (id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(int)arg3 requestIdentifier:(id)arg4;
- (void)appendAudioPCMBuffer:(id)arg1;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)endAudio;
- (id)init;
- (id)nativeAudioFormat;

@end