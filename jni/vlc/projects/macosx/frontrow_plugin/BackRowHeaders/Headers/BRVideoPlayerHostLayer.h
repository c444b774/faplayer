/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

#import "BRRenderScenePlaybackDelegateProtocol.h"

@class BRImage, BRRenderContext, BRVideoPlayer;

@interface BRVideoPlayerHostLayer : NSObject <BRRenderScenePlaybackDelegate>
{
    BRVideoPlayer *_player;
    unsigned long long _currentFrameTime;
    struct __CVBuffer *_currentFrame;
    BRImage *_backupImage;
    struct CGRect _backupImageFrame;
    BRRenderContext *_context;
    float _backupImageHeight;
    float _aspectRatio;
}

- (id)init;
- (void)dealloc;
- (void)setPlayer:(id)fp8;
- (id)player;
- (BOOL)newFrameForTime:(const CDAnonymousStruct2 *)fp8;
- (void)drawFrameInBounds:(struct CGSize)fp8;
- (id)blurredVideoFrame;
- (void)setBackupImage:(id)fp8 withHeight:(float)fp12;

@end

