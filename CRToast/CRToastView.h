//
//  CRToastView.h
//  CRToastDemo
//
//  Created by Daniel on 12/19/14.
//  Copyright (c) 2014 Collin Ruffenach. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CRToast.h"

/**
 Calculate the width of the view given all necessary values of the given `CRToastView`s properties
 
 @param fullContentWidth           full width of contentView to fill
 @param fullContentHeight          full height of the content view. It is assumed the image & activity indicators frame is a square with sides the length of the height of the contentView.
 @param showingImage               @c YES if an image is being shown and should be accounted for. @c NO otherwise.
 @param imageAlignment             alignment of image. Only used if @c showingImage is set to @c YES
 @param showingActivityIndicator   @c YES if an activity indicator is being shown and should be accounted for. @c NO otherwise.
 @param activityIndicatorAlignment alignment of activity indicator. Only used if @c showingActivityIndicator is set to @c YES
 */
CGFloat CRContentWidthForAccessoryViewsWithAlignments(CGFloat fullContentWidth, CGFloat fullContentHeight, BOOL showingImage, CRToastAccessoryViewAlignment imageAlignment, BOOL showingActivityIndicator, CRToastAccessoryViewAlignment activityIndicatorAlignment);

CGFloat CRContentWidthForActionView(CGFloat fullContentWidth, CGFloat fullContentHeight, UIView *actionView);

@interface CRToastView : UIView
@property (nonatomic, strong) CRToast *toast;

@property (nonatomic, strong) UIView *backgroundView;
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) UILabel *label;
@property (nonatomic, strong) UILabel *subtitleLabel;
@property (nonatomic, strong) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, strong) UIView *actionView;

@end
