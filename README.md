# Overview

When I was about 15, I decided I wanted to be a music producer. It was a massive learning curve, I knew next to nothing about anything, from DAWs to music theory, but I wanted to learn and so little by little I've gotten better. Since then, I've continued working bit by bit to improve, and now that I'm older, I've been wanting to find ways to supplement income using my music experience. Like hundreds of thousands of other musicians in the same situation, I've discovered that programming can be an amazing way to do this. Since the modern musician or producer needs access to high quality audio effects and virtual synthesizers, a great way to become a larger part of the music community is to create those yourself.

That was my initial goal with this. Because of my experience, I've always been interested in audio engineering and now that I'm at a point in my college career where I know enough, I wanted to get started into learning how to code those audio effects and virtual synthesizers myself.

All that being said, this program is nothing more than a 'hello world' into the world of music and programming. The intent of this program is to be nothing more than a simple Gain slider that can be put onto an audio track to increase or decrease the volume. And it does that! I'm so excited to have been able to get everything running, it feels like a major step forward in my life and career and I'm excited to share that.

For information on how this was made, I made a youtube video below explaining and included more technical details below.

[Software Demo Video](https://youtu.be/b1daWYX_YOY)

# Development Environment

For this program, I wrote everything using C++ and the essential framework for audio effect and VST programming, Juce and programmed it using Apple's Xcode IDE. These together made the process much, much easier when it came to the documentation and resources available online. For testing, once the VST3 file was made, it was tested using Ableton Live 10, a popular digital audio workshop (DAW) used by millions around the world.

# Useful Websites

- [JUCE Documentation](https://docs.juce.com/master/index.html)

- [The Audio Programmer on Youtube](https://www.youtube.com/watch?v=Bw_OkHNpj1M&t=2763s)

# Future Work

While this initial program is much simpler than what could really be useful for a musician, it's an excellent first step. To continue improving this, I'll be improving several things.

- First, there needs to have additional work done to make this automatable. Currently, there's no configuration option when opening it in Ableton, which makes it so the only use is increasing or decreasing volume, while removing the option to sidechain manually.
- Second, visually, I'd like to improve this. Right now, it just has a black background but that's not pretty. I have a lot of ideas for future VSTs I'd like to create, and so I'd like to learn how to make it pretty now and practice for then.

