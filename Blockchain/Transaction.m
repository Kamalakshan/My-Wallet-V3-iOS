//
//  Transaction.m
//  Blockchain
//
//  Created by Ben Reeves on 10/01/2012.
//  Copyright (c) 2012 Qkos Services Ltd. All rights reserved.
//

#import "Transaction.h"
#import "AccountInOut.h"
#import "AddressInOut.h"

@implementation Transaction


+ (Transaction*)fromJSONDict:(NSDictionary *)transactionDict {
    
    Transaction * transaction = [[Transaction alloc] init];
    
    transaction.from = [[InOut alloc] init];
    transaction.to = [[InOut alloc] init];

    transaction.block_height = [[transactionDict objectForKey:DICTIONARY_KEY_TRANSACTION_BLOCK_HEIGHT] intValue];
    transaction.confirmations = [[transactionDict objectForKey:DICTIONARY_KEY_TRANSACTION_CONFIRMATIONS] intValue];
    transaction.fee = [[transactionDict objectForKey:DICTIONARY_KEY_TRANSACTION_FEE] longLongValue];
    transaction.myHash = [transactionDict objectForKey:DICTIONARY_KEY_TRANSACTION_MY_HASH];
    transaction.txType = [transactionDict objectForKey:DICTIONARY_KEY_TRANSACTION_TX_TYPE];
    transaction.amount = [[transactionDict objectForKey:DICTIONARY_KEY_TRANSACTION_AMOUNT] longLongValue];
    transaction.time = [[transactionDict objectForKey:DICTIONARY_KEY_TRANSACTION_TIME] longLongValue];
    transaction.fromWatchOnly = [[transactionDict objectForKey:DICTIONARY_KEY_TRANSACTION_FROM_WATCH_ONLY] boolValue];
    transaction.toWatchOnly = [[transactionDict objectForKey:DICTIONARY_KEY_TRANSACTION_TO_WATCH_ONLY] boolValue];
    
    return transaction;
}

@end
