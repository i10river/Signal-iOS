//
//  Copyright (c) 2018 Open Whisper Systems. All rights reserved.
//

#import "OWSOutgoingSyncMessage.h"

NS_ASSUME_NONNULL_BEGIN

@class YapDatabaseReadTransaction;

@interface OWSSyncGroupsMessage : OWSOutgoingSyncMessage

- (instancetype)init NS_DESIGNATED_INITIALIZER;

- (NSData *)buildPlainTextAttachmentDataWithTransaction:(YapDatabaseReadTransaction *)transaction;

@end

NS_ASSUME_NONNULL_END
