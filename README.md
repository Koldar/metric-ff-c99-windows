Introduction
============

This repository contains Metric Fast Forward code, made compliant with modern c99 compilers.
No changes have been made into the planner whatsoever.

This version is windows compliant and has been successfully tested with Visual Studio Community Edition 2019.

I'm not the author of the planner itself. see the planner homepage https://fai.cs.uni-saarland.de/hoffmann/ff.html for further information. Use this porting at your own discretion.

Installation
============

To create the executable in `build` directory, execute in the project root:

```
make
```

To show a brief help of the planner, use:

```
./ff
```

From Original README
====================

This directory contains the C implementation of Metric-FF, as it was
used in the 3rd international planning competition. Build the planner
by typing

make

Which produces an executable named

ff

Usage should be self-explanatory. Running ff without any parameters
prints out a brief help information about the parameters that are
applicable, which basically come down to specifying the domain and
problem files.

Have fun,

Joerg Hoffmann

