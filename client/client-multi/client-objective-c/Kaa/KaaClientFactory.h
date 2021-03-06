/*
 *  Copyright 2014-2016 CyberVision, Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#import "Kaa.h"

/**
 * Used to create new Kaa client instances.
 */
@interface KaaClientFactory : NSObject

/**
 * Creates new Kaa client with specified platform context and state delegate.
 * 
 * @param context Kaa platform specific context for client init
 * @param delegate notifier for changing client state
 * @param isAutogeneratedKeys check whether to generate public/private key pair automatically.
 *                            'NO' - use existing pre-generated public/private key pair.
 *                            'YES' - generate public/private key pair if necessary (default behaviour).
 */
+ (id<KaaClient>)clientWithContext:(id<KaaClientPlatformContext>)context stateDelegate:(id<KaaClientStateDelegate>)delegate;

+ (id<KaaClient>)clientWithContext:(id<KaaClientPlatformContext>)context stateDelegate:(id<KaaClientStateDelegate>)delegate autoGeneratedKeys:(BOOL)isAutogeneratedKeys;

/**
 * Creates new Kaa client with specified platform context.
 */
+ (id<KaaClient>)clientWithContext:(id<KaaClientPlatformContext>)context;

/**
 * Creates new Kaa client with default platform context and specified client state delegate.
 */
+ (id<KaaClient>)clientWithStateDelegate:(id<KaaClientStateDelegate>)delegate;

/**
 * Creates new Kaa client based on default platform context.
 */
+ (id<KaaClient>)client;

@end
