//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSArray, NSAttributedString, UIColor;
@protocol KindaUILabelDelegate;

@interface KindaUILabel : UILabel
{
    id <KindaUILabelDelegate> _delegate;
    NSArray *_highlightRanges;
    UIColor *_highlightColor;
    NSAttributedString *_backupAttributedText;
}

@property(retain, nonatomic) NSAttributedString *backupAttributedText; // @synthesize backupAttributedText=_backupAttributedText;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) NSArray *highlightRanges; // @synthesize highlightRanges=_highlightRanges;
@property(nonatomic) __weak id <KindaUILabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)rangeForIndex:(long long)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (long long)indexInLocation:(struct CGPoint)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
