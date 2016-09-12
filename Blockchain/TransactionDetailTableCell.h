//
//  TransactionDetailTableCell.h
//  Blockchain
//
//  Created by Kevin Wu on 8/24/16.
//  Copyright © 2016 Blockchain Luxembourg S.A. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Transaction.h"

@protocol DetailViewDelegate
- (void)textViewDidChange:(UITextView *)textView;
- (void)toggleSymbol;
- (NSString *)getReceiveLabel;
@end

@interface TransactionDetailTableCell : UITableViewCell <UITextViewDelegate>

// Value cell
@property (nonatomic) UIButton *amountButton;
@property (nonatomic) UILabel *fiatValueWhenSentLabel;
@property (nonatomic) UILabel *transactionFeeLabel;

// Description cell
@property (nonatomic) UITextView *textView;
@property (nonatomic) UILabel *textViewPlaceholderLabel;
@property (nonatomic) CGFloat defaultTextViewHeight;
@property (nonatomic) UIButton *editButton;

// Generic/To and From cell
@property (nonatomic) UILabel *topLabel;
@property (nonatomic) UILabel *bottomLabel;
@property (nonatomic) UILabel *topAccessoryLabel;
@property (nonatomic) UILabel *bottomAccessoryLabel;

@property (nonatomic) id<DetailViewDelegate> detailViewDelegate;

- (void)configureDescriptionCell:(Transaction *)transaction;
- (void)configureToFromCell:(Transaction *)transaction;
- (void)configureDateCell:(Transaction *)transaction;
- (void)configureStatusCell:(Transaction *)transaction;
- (void)configureValueCell:(Transaction *)transaction;

- (void)addEditButton;

@end
