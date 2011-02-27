/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRMediaMenuController.h>

#import "BRMenuListItemProviderProtocol.h"

@class BRImageAndSyncingPreviewController;

@interface BRSettingsiTunesConnectionController : BRMediaMenuController <BRMenuListItemProvider>
{
    BOOL _iTunesCurrentlySynced;
    BRImageAndSyncingPreviewController *_cachedPreviewController;
}

- (id)init;
- (void)dealloc;
- (id)previewControlForItem:(long)fp8;
- (void)itemSelected:(long)fp8;
- (id)itemForRow:(long)fp8;
- (long)itemCount;
- (id)titleForRow:(long)fp8;
- (float)heightForRow:(long)fp8;
- (BOOL)rowSelectable:(long)fp8;
- (void)willBeExhumed;
- (void)_networkChanged:(id)fp8;
- (BOOL)_itemNeedsNetwork:(long)fp8;
- (void)_syncStatusChanged;

@end

