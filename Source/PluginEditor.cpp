/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
GainAudioProcessorEditor::GainAudioProcessorEditor (GainAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{

    // Set sliders range and initial value.
    gainSlider.setSliderStyle(juce::Slider::SliderStyle::LinearVertical);
    gainSlider.setRange(-60.0f, 20.0f, 0.01);
//    gainSlider.setValue(-20.0f);
    
    // Let's the parent component know that this gain slider is a child component of the editor.
    addAndMakeVisible(gainSlider);
    
    // Add the editor as a listener to the slider.
    gainSlider.addListener(this);
    
    // Sets the location and properties of the text box.
    
    gainSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, true, 50, 20);
    setSize (200, 300);
}

GainAudioProcessorEditor::~GainAudioProcessorEditor()
{
    
}

//==============================================================================
void GainAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll(juce::Colours::black);
}

void GainAudioProcessorEditor::resized()
{
    // Sets location of slider inside of the editor in the VST.
    gainSlider.setBounds(getWidth() / 2 - 50, getHeight() / 2 - 75, 100, 150);
}


// What does this do?
void GainAudioProcessorEditor::sliderValueChanged(juce::Slider *slider)
{
    if (slider == &gainSlider)
    {
        audioProcessor.mGain = gainSlider.getValue();
    }
};
