//
//  TSRecordingToolbarView.h
//  talktala
//
//  Created by Oana Ban on 16/04/15.
//  Copyright (c) 2015 Groop Internet Platform inc. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  \brief Custom View used for bottom recording toolbar
 */

@interface TSRecordingToolbarView : UIView

@property (weak, nonatomic) IBOutlet UIImageView *leftRedMicImageView;

/**
 * Update UI elements with recording time
 * @param passed seconds
 * @return nothing
 */
- (void)didPassedSeconds:(int)sec;

/**
 * Used for delete animation
 * @return nothing
 */
- (void)startDeleteAnimation;

/**
 * Preppers the UI state for the next Recording
 * @return nothing
 */
- (void)resetUIState;

@end