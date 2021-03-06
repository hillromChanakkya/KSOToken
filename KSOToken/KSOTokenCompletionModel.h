//
//  KSOTokenCompletionModel.h
//  KSOToken
//
//  Created by William Towe on 6/5/17.
//  Copyright © 2017 Kosoku Interactive, LLC. All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
//
//  1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
//
//  2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Protocol for objects that will be displayed in the completions table view.
 */
@protocol KSOTokenCompletionModel <NSObject>
@required
/**
 Return the title of the completion.
 */
- (NSString *)tokenCompletionModelTitle;
@optional
/**
 Return the matching range of the completion.
 */
- (NSRange)tokenCompletionModelRange;
/**
 Return the matching ranges of the completion. If implemented, this is preferred over tokenCompletionModelRange.
 */
- (NSIndexSet *)tokenCompletionModelIndexes;
@end

/**
 Add support for the KSOTokenCompletionModel protocol to NSString.
 */
@interface NSString (KSOTokenCompletionModelExtensions) <KSOTokenCompletionModel>
@end

/**
 Add support for the KSOTokenCompletionModel protocol to NSURL.
 */
@interface NSURL (KSOTokenCompletionModelExtensions) <KSOTokenCompletionModel>
@end

NS_ASSUME_NONNULL_END
