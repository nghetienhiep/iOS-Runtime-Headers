/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDProgressBarView : UIView {
    UIView *_barView;
    UIImageView *_indicatorView;
    float _progress;
}

@property (nonatomic, retain) UIView *barView;
@property (nonatomic, retain) UIImageView *indicatorView;
@property (nonatomic) float progress;

- (void).cxx_destruct;
- (id)barView;
- (id)indicatorView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)progress;
- (void)setBarView:(id)arg1;
- (void)setIndicatorHidden:(BOOL)arg1;
- (void)setIndicatorView:(id)arg1;
- (void)setProgress:(float)arg1;

@end