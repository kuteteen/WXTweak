//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol SolitaireToolViewDelegate;

@interface SolitaireToolView : UIView
{
    id <SolitaireToolViewDelegate> _delegate;
    UIView *_buttonContainerView;
}

@property(retain, nonatomic) UIView *buttonContainerView; // @synthesize buttonContainerView=_buttonContainerView;
@property(nonatomic) __weak id <SolitaireToolViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getButtonHLImage:(int)arg1;
- (id)getButtonImage:(int)arg1;
- (void)onClickItem:(id)arg1;
- (id)getButtonTitle:(int)arg1;
- (void)initView;
- (id)init;

@end
