/*
 Copyright 2015 OpenMarket Ltd

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <MatrixKit/MatrixKit.h>

/**
 `VectorDesignValues` class manages the Vector design parameters
 */
@interface VectorDesignValues : NSObject

#pragma mark - Vector Colors

#define VECTOR_GREEN_COLOR [UIColor colorWithRed:(98.0/256.0) green:(206.0/256.0) blue:(156.0/256.0) alpha:1.0]

#define VECTOR_LIGHT_GRAY_COLOR [UIColor colorWithRed:(242.0 / 256.0) green:(242.0 / 256.0) blue:(242.0 / 256.0) alpha:1.0]

#define VECTOR_SILVER_COLOR [UIColor colorWithRed:(199.0 / 256.0) green:(199.0 / 256.0) blue:(204.0 / 256.0) alpha:1.0]


#pragma mark - Vector Text Colors

#define VECTOR_TEXT_BLACK_COLOR [UIColor colorWithRed:(60.0 / 256.0) green:(60.0 / 256.0) blue:(60.0 / 256.0) alpha:1.0]

#define VECTOR_TEXT_GRAY_COLOR [UIColor colorWithRed:(157.0 / 256.0) green:(157.0 / 256.0) blue:(157.0 / 256.0) alpha:1.0]

// to update the navigation bar buttons color
// [[AppDelegate theDelegate] recentsNavigationController].navigationBar.tintColor = [UIColor greenColor];

@end
