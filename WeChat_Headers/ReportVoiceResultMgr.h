//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@interface ReportVoiceResultMgr : MMObject <PBMessageObserverDelegate>
{
    int _scene;
}

@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ReportResult:(id)arg1 AndResult:(id)arg2;
- (void)dealloc;

@end

