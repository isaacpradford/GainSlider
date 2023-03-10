/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class GainAudioProcessorEditor  : public juce::AudioProcessorEditor,
                                  public juce::Slider::Listener
{
public:
    GainAudioProcessorEditor (GainAudioProcessor&);
    ~GainAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;
    
    void sliderValueChanged (juce::Slider* slider) override;

private:

    // Creates the slider object
    juce::Slider gainSlider;
    
    GainAudioProcessor& audioProcessor;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GainAudioProcessorEditor)
};
