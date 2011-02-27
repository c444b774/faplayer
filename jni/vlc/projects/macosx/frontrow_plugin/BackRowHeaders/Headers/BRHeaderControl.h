/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRControl.h>

@class BRHeaderLayer;

@interface BRHeaderControl : BRControl
{
    BRHeaderLayer *_header;
}

- (id)init;
- (void)dealloc;
- (id)layer;
- (void)setTitle:(id)fp8 withAttributes:(id)fp12;
- (void)setTitle:(id)fp8;
- (id)title;
- (void)setIcon:(id)fp8 horizontalOffset:(float)fp12 kerningFactor:(float)fp16;
- (id)icon;
- (void)setIconHorizontalOffset:(float)fp8;
- (float)iconHorizontalOffset;
- (void)setIconKerningFactor:(float)fp8;
- (float)iconKerningFactor;
- (struct CGRect)iconFrame;
- (void)setIconHidden:(BOOL)fp8;

@end

