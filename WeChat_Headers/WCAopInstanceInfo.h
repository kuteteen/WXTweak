//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCAopInstanceInfo : NSObject
{
    NSArray *_beforeActions;
    id _replaceBlock;
    NSArray *_afterActions;
}

@property(retain, nonatomic) NSArray *afterActions; // @synthesize afterActions=_afterActions;
@property(copy, nonatomic) id replaceBlock; // @synthesize replaceBlock=_replaceBlock;
@property(retain, nonatomic) NSArray *beforeActions; // @synthesize beforeActions=_beforeActions;
- (void).cxx_destruct;
- (_Bool)isClear;

@end
