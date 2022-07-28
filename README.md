# Material-Node

I've based my material node on Component Mask. Where I could replicate and rename my node to Spectrum. I followed VectorNoise in the common.ush file hoping to find how to do shader calls, which I found out.

I added code similar to VectorNoise in MaterialExpressions.cpp, MaterialCompiler.h, and HLSLMaterialTranslator.cpp in order to do the shader call.

In common.ush I implemented the spectral functions given in the description of the assigment and following VectorNoise once again I replicated its code to match my material node and in a switch statement I called the spectral functions.

Once in UE, I replicated the picture given in the assignment, and in a discord post was mentioned that the Zucconi functions were not displaying the right color, so the professor told us to raise the color values to the 2.2 power to mimic the colors in the browser.

To get the multiplying part done, I've added an extra multiply node before my Spectrum node and attached it to both inputs A and B in order to get the right colors in all of the spectrums.

Also, I implemented the UENUM tooltips for all of the options, and right below the name of my node, I added the name of each option when it's changed.
