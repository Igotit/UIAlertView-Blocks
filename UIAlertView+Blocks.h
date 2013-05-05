//
//  UIAlertView+Blocks.h
//  Shibui
//
//  Created by Jiva DeVoe on 12/28/10.
//  Copyright 2010 Random Ideas, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RIButtonItem.h"

@interface UIAlertView (Blocks)

+ (id)alertViewWithTitle:(NSString *)inTitle message:(NSString *)inMessage otherButtonTitle:(NSString *)otherButtonTitle otherButtonAction:(void(^)())otherButtonAction;

+ (id)alertViewWithTitle:(NSString *)inTitle message:(NSString *)inMessage cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitle:(NSString *)otherButtonTitle otherButtonAction:(void(^)())otherButtonAction;

-(id)initWithTitle:(NSString *)inTitle message:(NSString *)inMessage cancelButtonItem:(RIButtonItem *)inCancelButtonItem otherButtonItems:(RIButtonItem *)inOtherButtonItems, ... NS_REQUIRES_NIL_TERMINATION;

- (NSInteger)addButtonItem:(RIButtonItem *)item;

@end
