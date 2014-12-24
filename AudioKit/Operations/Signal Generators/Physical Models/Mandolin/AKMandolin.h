//
//  AKMandolin.h
//  AudioKit
//
//  Auto-generated on 12/24/14.
//  Copyright (c) 2014 Aurelius Prochazka. All rights reserved.
//

#import "AKAudio.h"
#import "AKParameter+Operation.h"

/** An emulation of a mandolin.

 A mandolin emulation with amplitude, frequency, tuning, gain and mandolin size parameters.
 */

@interface AKMandolin : AKAudio
/// Instantiates the mandolin with all values
/// @param frequency Frequency of note played. Updated at Control-rate. [Default Value: 220]
/// @param amplitude Amplitude of note. Updated at Control-rate. [Default Value: 1]
/// @param bodySize The size of the body of the mandolin. Range 0 (small) to 1 (large). Updated at Control-rate. [Default Value: 0.5]
/// @param pairedStringDetuning The proportional detuning between the two strings. Suggested range 0.9 to 1. Updated at Control-rate. [Default Value: 1]
/// @param pluckPosition The pluck position, in range 0 to 1. Updated at Control-rate. [Default Value: 0.4]
/// @param loopGain The loop gain of the model, in the range 0.97 to 1. Updated at Control-rate. [Default Value: 0.99]
- (instancetype)initWithFrequency:(AKParameter *)frequency
                        amplitude:(AKParameter *)amplitude
                         bodySize:(AKParameter *)bodySize
             pairedStringDetuning:(AKParameter *)pairedStringDetuning
                    pluckPosition:(AKParameter *)pluckPosition
                         loopGain:(AKParameter *)loopGain;

/// Instantiates the mandolin with default values
- (instancetype)init;

/// Instantiates the mandolin with default values
+ (instancetype)audio;


/// Frequency of note played. [Default Value: 220]
@property AKParameter *frequency;

/// Set an optional frequency
/// @param frequency Frequency of note played. Updated at Control-rate. [Default Value: 220]
- (void)setOptionalFrequency:(AKParameter *)frequency;

/// Amplitude of note. [Default Value: 1]
@property AKParameter *amplitude;

/// Set an optional amplitude
/// @param amplitude Amplitude of note. Updated at Control-rate. [Default Value: 1]
- (void)setOptionalAmplitude:(AKParameter *)amplitude;

/// The size of the body of the mandolin. Range 0 (small) to 1 (large). [Default Value: 0.5]
@property AKParameter *bodySize;

/// Set an optional body size
/// @param bodySize The size of the body of the mandolin. Range 0 (small) to 1 (large). Updated at Control-rate. [Default Value: 0.5]
- (void)setOptionalBodySize:(AKParameter *)bodySize;

/// The proportional detuning between the two strings. Suggested range 0.9 to 1. [Default Value: 1]
@property AKParameter *pairedStringDetuning;

/// Set an optional paired string detuning
/// @param pairedStringDetuning The proportional detuning between the two strings. Suggested range 0.9 to 1. Updated at Control-rate. [Default Value: 1]
- (void)setOptionalPairedStringDetuning:(AKParameter *)pairedStringDetuning;

/// The pluck position, in range 0 to 1. [Default Value: 0.4]
@property AKParameter *pluckPosition;

/// Set an optional pluck position
/// @param pluckPosition The pluck position, in range 0 to 1. Updated at Control-rate. [Default Value: 0.4]
- (void)setOptionalPluckPosition:(AKParameter *)pluckPosition;

/// The loop gain of the model, in the range 0.97 to 1. [Default Value: 0.99]
@property AKParameter *loopGain;

/// Set an optional loop gain
/// @param loopGain The loop gain of the model, in the range 0.97 to 1. Updated at Control-rate. [Default Value: 0.99]
- (void)setOptionalLoopGain:(AKParameter *)loopGain;



@end
