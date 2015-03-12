/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDate, NSMapTable, NSString, NSURL, _UIDocumentPickerContainerModel;

@interface _UIDocumentPickerContainerItem : NSObject {
    id _item;
    NSString *_pickabilityReason;
    BOOL _pickable;
    NSMapTable *_thumbnailsBySize;
    int _type;
    _UIDocumentPickerContainerModel *_weak_parentModel;
}

@property(retain) id item;
@property _UIDocumentPickerContainerModel * parentModel;
@property(copy) NSString * pickabilityReason;
@property BOOL pickable;
@property(readonly) NSDate * sortDate;
@property(retain,readonly) NSString * subtitle2;
@property(retain,readonly) NSString * subtitle;
@property(retain) NSMapTable * thumbnailsBySize;
@property(retain,readonly) NSString * title;
@property(readonly) int type;
@property(retain,readonly) NSURL * url;

+ (id)_lruThumbnailArray;
+ (void)clearLRUThumbnailCache;
+ (void)markThumbnailAsRecentlyUsed:(id)arg1;

- (id)_blipWithTags:(id)arg1 height:(float)arg2 scale:(float)arg3;
- (id)_blockingThumbnailWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (id)_createThumbnailWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (id)_defaultThumbnailWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)initWithItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)item;
- (id)parentModel;
- (id)pickabilityReason;
- (BOOL)pickable;
- (void)setItem:(id)arg1;
- (void)setParentModel:(id)arg1;
- (void)setPickabilityReason:(id)arg1;
- (void)setPickable:(BOOL)arg1;
- (void)setThumbnailsBySize:(id)arg1;
- (id)sortDate;
- (id)sortTag;
- (id)subtitle2;
- (id)subtitle;
- (id)tagBlipsWithHeight:(float)arg1 scale:(float)arg2;
- (id)tags;
- (id)thumbnailWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (id)thumbnailsBySize;
- (id)title;
- (int)type;
- (id)url;

@end