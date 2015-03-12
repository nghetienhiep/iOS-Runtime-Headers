/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>;

@interface CMActivityAlarm : NSObject {
    double _duration;
    unsigned int _trigger;
    id fHandler;
    BOOL fIsValid;
    NSObject<OS_dispatch_queue> *fQueue;
    struct __CFRunLoop { } *fRunLoop;
}

@property double duration;
@property unsigned int trigger;

+ (BOOL)activityAlarmAvailable;
+ (id)activityAlarmInfo;

- (void)dealloc;
- (double)duration;
- (void)fire;
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onQueue:(id)arg3 withHandler:(id)arg4;
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onRunLoop:(struct __CFRunLoop { }*)arg3 withHandler:(id)arg4;
- (void)invalidate;
- (BOOL)isValid;
- (void)setDuration:(double)arg1;
- (void)setTrigger:(unsigned int)arg1;
- (unsigned int)trigger;

@end