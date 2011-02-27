/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRMediaPlayer.h>

@class BRIPhotoMediaCollection, BRMusicPlayer, BRRenderContext, NSArray, NSDictionary, NSTimer, PhotoConnection;

@interface BRPhotoPlayer : BRMediaPlayer
{
    BRRenderContext *_renderContext;
    double _timeFreq;
    double _prevTime;
    BRIPhotoMediaCollection *_collection;
    struct CGSize _contextSizeHint;
    int _state;
    BOOL _suppressMusic;
    BOOL _allowMusicToPlayThrough;
    BOOL _allowBackgroundActivity;
    BRMusicPlayer *_musicPlayer;
    NSArray *_musicTracksToPlay;
    int _currentTrack;
    id <BRMediaCollection> _savedPlaylist;
    NSTimer *_userActivityTimer;
    PhotoConnection *_photoConnection;
    id <BRMediaProvider> _mediaMusicProvider;
    id <BRMediaProvider><BRIPhotoMediaProvider> _mediaPhotoProvider;
    NSDictionary *_slideshowPlaybackOptions;
}

- (id)init;
- (void)dealloc;
- (void)setPhotoConnection:(id)fp8;
- (id)mediaMusicProvider;
- (id)mediaPhotoProvider;
- (void)setPlaybackContext:(id)fp8;
- (id)playbackContext;
- (void)setMediaCollection:(id)fp8 error:(id *)fp12;
- (id)collection;
- (void)suppressMusic:(BOOL)fp8 allowMusicToPlayThrough:(BOOL)fp12;
- (void)setSlideshowPlaybackOptions:(id)fp8;
- (void)allowBackgroundActivity:(BOOL)fp8;
- (void)setContextSizeHint:(struct CGSize)fp8;
- (BOOL)newFrameTextureInfoForTime:(const CDAnonymousStruct2 *)fp8 frameTexture:(id *)fp12;
- (BOOL)initiatePlayback:(id *)fp8;
- (void)play;
- (void)pause;
- (void)stop;
- (void)resume;
- (void)leftArrowClick;
- (void)rightArrowClick;
- (int)playerState;

@end

