/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */



@interface CPAggregateDictionary : NSObject 
{
}

@property(getter=isEnabled,readonly) BOOL enabled;

+ (id)sharedAggregateDictionary;

- (void)addValue:(long long)arg1 forKey:(id)arg2;
- (void)pushValue:(double)arg1 forKey:(id)arg2;
- (NSInteger)commit;
- (BOOL)isEnabled;
- (void)significantTimeChanged;
- (void)clearScalarKey:(id)arg1;
- (void)setValue:(long long)arg1 forScalarKey:(id)arg2;
- (void)decrementKey:(id)arg1;
- (void)subtractValue:(long long)arg1 forKey:(id)arg2;
- (void)clearDistributionKey:(id)arg1;
- (void)setValue:(double)arg1 forDistributionKey:(id)arg2;
- (void)incrementKey:(id)arg1;

@end