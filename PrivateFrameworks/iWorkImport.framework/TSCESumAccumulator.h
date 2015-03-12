/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <TSUMultipleChoiceListChoiceProviding>, NSDate, NSString;

@interface TSCESumAccumulator : NSObject {
    struct TSCENumberValue { 
        int (**_vptr$TSCEAbstractValue)(); 
        double mDouble; 
        int mBaseUnits[1]; 
        struct TSUFormat { 
            int (**_vptr$TSUFormat)(); 
            int mFormatType; 
            boolmIsImplicitFormat; 
            union { 
                struct { 
                    unsigned int mCurrencyCodeIndex : 16; 
                    unsigned int mDecimalPlaces : 8; 
                    unsigned int mNegativeStyle : 3; 
                    unsigned int mShowThousandsSeparator : 1; 
                    unsigned int mUseAccountingStyle : 1; 
                } mNumberStruct; 
                struct { 
                    unsigned int mFractionAccuracy : 8; 
                } mFractionFormatStruct; 
                struct { 
                    unsigned int mBase : 8; 
                    unsigned int mBasePlaces : 8; 
                    unsigned int mBaseUseMinusSign : 1; 
                } mBaseFormatStruct; 
                struct { 
                    unsigned int mSuppressDateFormat : 1; 
                    unsigned int mSuppressTimeFormat : 1; 
                    NSString *mDateTimeFormat; 
                } mDateFormatStruct; 
                struct { 
                    unsigned int mUseAutomaticUnits : 1; 
                    int mDurationUnitSmallest; 
                    int mDurationUnitLargest; 
                    int mDurationStyle; 
                } mDurationFormatStruct; 
                struct { 
                    unsigned int mCustomFormatID; 
                    struct { /* ? */ } *mData; 
                } mCustomFormatStruct; 
                struct { 
                    double mMinimum; 
                    double mMaximum; 
                    double mIncrement; 
                    int mDisplayFormatType; 
                    unsigned int mOrientation : 2; 
                    unsigned int mPosition : 2; 
                } mControlFormatStruct; 
                struct { 
                    int mInitialValue; 
                    unsigned int mMultipleChoiceListFormatID; 
                    <TSUMultipleChoiceListChoiceProviding> *mData; 
                } mMultipleChoiceListFormatStruct; 
            } mData; 
            struct TSUCustomFormat {} *mCustomFormat; 
        } mFormat; 
        BOOL mIsUnitlessZero; 
    NSDate *mDateAccumulator;
    BOOL mFoundANumber;
    BOOL mMixedDurationsAndNumbers;
    } mNumberAccumulator;
    double mSecondsToAdd;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addValue:(struct TSCEValue { unsigned int x1[68]; int x2; })arg1 function:(id)arg2 warningReportingContext:(struct TSCEWarningReportingContext { BOOL x1; BOOL x2; struct ObjcSharedPtr<NSMutableSet> { id x_3_1_1; } x3; }*)arg3;
- (id)init;
- (struct TSCEValue { unsigned int x1[68]; int x2; })resultForFunction:(id)arg1;

@end