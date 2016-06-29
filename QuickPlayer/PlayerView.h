//
//  PlayerView.h
//  QuickPlayer
//
//  Created by xiaoyu on 16/6/24.
//  Copyright © 2016年 Damon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#define FULLBUTTON_TAG 2000
#define ReturnFullBtn_Tag 2001
#define PlayButton_Tag 2002
@protocol PlayerViewDelegate <NSObject>
- (void)playerBtndidClicked:(UIButton *)sender;
@end

@interface PlayerView : UIView
{
    
}
@property (nonatomic, assign) id<PlayerViewDelegate>gd_delegate;
@property (nonatomic, strong) AVPlayer *player;
@property (nonatomic, strong) UISlider *videoSlider;//控制视频
@property (nonatomic, strong) UIProgressView *videoLoadProgressView;//背景缓存进度
@property (nonatomic) void(^SliderValuePans)(float value);//手滑动slider调整进度
@property (nonatomic) void(^SliderTouchInside)(float state);//不操作Slider后
@property (nonatomic, strong) UIView *clearView;
@property (nonatomic ,strong) UIView *topView;
@property (nonatomic, strong) UIView *underView;
@property (nonatomic, assign) BOOL isPortrait;
@property (nonatomic, strong) UIButton *playButton;
@property (nonatomic, strong) UILabel *timeLabel;


- (void)clearViewUpdate_scaleScreen;

#pragma mark - 变竖屏
- (void)InterfaceOrientationPortraitor;

#pragma mark - 变横屏
- (void)InterfaceOrientationLandscapeLeft;

@end
