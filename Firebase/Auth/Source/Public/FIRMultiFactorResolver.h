/*
 * Copyright 2019 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "FIRMultiFactor.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(MultiFactorResolver)
@interface FIRMultiFactorResolver : NSObject

@property(nonatomic, readonly) FIRMultiFactorSession *session;

@property(nonatomic, readonly) NSArray<FIRMultiFactorInfo *> *hints NS_SWIFT_NAME(hints);

@property(nonatomic, readonly) FIRAuth *auth;

- (void)resolveSignInWithAssertion:(FIRMultiFactorAssertion *)assertion
                        completion:(nullable FIRAuthDataResultCallback)completion;

@end

NS_ASSUME_NONNULL_END
