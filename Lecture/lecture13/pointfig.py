# -*- coding: utf-8 -*-
"""
Created on Tue Apr 08 01:28:44 2014

@author: hannah
"""

import os 

from matplotlib import figure
from matplotlib.backends.backend_agg import FigureCanvasAgg as FigureCanvas
from matplotlib import pyplot as plt
import numpy as np

g = -9.8
plt.xkcd()


S=500

ux = lambda t: np.exp(.01*t)*np.cos(t)
uy = lambda t: np.exp(.01*t)*np.sin(t)
t = np.arange(1,200,1)
x = [ux(ti) for ti in t]
y = [uy(ti) for ti in t]
xm = max(x)
ym = max(y)
for i, (xi, yi) in enumerate(zip(x,y)):
    fig = figure.Figure()
    canvas = FigureCanvas(fig)
    ax = fig.add_subplot(1, 1, 1)
    ax.spines['right'].set_color('none')
    ax.spines['top'].set_color('none')
    ax.spines['left'].set_color('none')
    ax.spines['bottom'].set_color('none')
    ax.set_xticks([])
    ax.set_yticks([])
    ax.set_xlim((-xm,xm))    
    ax.set_ylim((-ym,ym))
    ax.grid(True)    
    ax.axhline(0, color='k')
    ax.axvline(0, color='k')
    ax.plot(x[:i+1], y[:i+1], ':', color='k', linewidth=3)
    ax.plot(np.negative(x[:i+1]), np.negative(y[:i+1]), '--', color='k', linewidth=3)
    ax.scatter(xi,yi, s=500, color='yellow', edgecolor='k', zorder=100)
    ax.scatter(-xi, -yi, s=500, color='blue', edgecolor='k', zorder=100)
    fig.savefig(os.path.join("animate2", "traj{:03d}.png".format(i)))

