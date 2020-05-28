//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSRecursiveLock, NSString, WCFinderDataItem;

@interface WCFinderTempSaveService : MMService <MMServiceProtocol>
{
    WCFinderDataItem *_dataItemModel;
    NSRecursiveLock *_lock;
}

@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) WCFinderDataItem *dataItemModel; // @synthesize dataItemModel=_dataItemModel;
- (void).cxx_destruct;
- (id)getFinderDataItemFromFileWithScene:(long long)arg1;
- (void)removeOldDataItemFileWithDataItem:(id)arg1;
- (void)setDataItem:(id)arg1;
- (_Bool)onServiceMemoryWarning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
