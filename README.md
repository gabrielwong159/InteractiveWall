# Interactive Wall
## About
The `Interactive Wall` is a project developed via the collaboration between SUTD student clubs SUTDio and Makerspace Club. The wall was created via parametric design of triangular modules made of folded polycarbonate, which were assembled to form a `3m x 1m` display.

<div align="center">
    <img src="https://i.imgur.com/jzBaXqr.png" alt="Front render">
    <img src="https://i.imgur.com/AkvNvUa.png" alt="Back render">
</div>

Behind the wall are 14 `WS2812b` addressable LED strips, with a total of approximately 808 LEDs. Each LED can be individually controlled, to produce an interactive or aesthetic display.

The Interactive Wall was my first project in SUTD, having started on it while entering my second month in the school. **While I did not play a part in the conception and construction of the wall**, I was given the opportunity to work on the software.

## Details
The wall was divided into 14 rows of 19-20 columns each, with each "cell" being the individual segments. Each segment then contains 2-5 LEDs. The goal was to allow the programmer to assign the correct LED indices to each cell, such that the wall may be controlled by cell instead of by single LEDs.

Once this was achieved, we created several simple patterns for display. Subsequently, an equalizer-like functionality was achieved by allowing the lights on the wall to react to music. This was done by applying Fast Fourier Transformation on input audio, and displaying lights corresponding to the intensity for 21 frequency bins.

<div align="center">
	<img src="images/interactive_wall.gif" alt="Wall on display at Maker Faire SG 2016">
	<p>Wall on display at Maker Faire SG 2016</p>
</div>

Finally, the code for controlling the wall was abstracted and packaged as an Arduino library to allow subsequent programmers to program the wall more easily. The library would only require users to provide the row, column, and RGB values.

The wall was put on display during Maker Faire Singapore 2016, SUTD Learning Celebration Carnival 2016, the [WEEK7 Music Festival](https://www.facebook.com/events/241555446238666/), as well as other school events.

[Youtube video of the sound reactive LED wall](https://www.youtube.com/watch?v=JNHftu8IFnc)  
[Code for the FFT](https://github.com/tasercake/ProcessingFFT)

## Acknowledgement
**Hoo Jian Li**  
Jian Li was the project lead who brought me onto this project.  
Check out [his portfolio](https://jianli-hoo.myportfolio.com/interactive-wall-1) describing the project in greater detail, as well as his other projects.

**Krishna**  
Krishna developed the FFT code on Processing to allow sound reactivity for the Interactive Wall. The code is shown on his [GitHub repository](https://github.com/tasercake).

**Teo Kai Xiang**  
Kai Xiang worked with me in the initial stages of the project to help build the basic functionality of the cell-based LED controls.
