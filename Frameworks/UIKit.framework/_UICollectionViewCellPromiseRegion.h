/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICollectionViewCellPromiseRegion : NSObject <_UIFocusRegion> {
    UICollectionView *_collectionView;
    UICollectionViewLayoutAttributes *_layoutAttributes;
}

@property (nonatomic) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UICollectionViewLayoutAttributes *layoutAttributes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_childFocusRegions;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_focusDebugOverlayParentView;
- (BOOL)_focusRegionCanBecomeFocused;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_focusRegionFrame;
- (id)_focusRegionGuides;
- (BOOL)_focusRegionIsEligibleForFocus;
- (id)_focusRegionItem;
- (id)_focusRegionView;
- (id)_fulfillPromisedFocusRegion;
- (BOOL)_isPromiseFocusRegion;
- (BOOL)_isTransparentFocusRegion;
- (id)collectionView;
- (id)description;
- (id)layoutAttributes;
- (void)setCollectionView:(id)arg1;
- (void)setLayoutAttributes:(id)arg1;

@end
