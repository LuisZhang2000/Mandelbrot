# Mandelbrot

To view your Mandelbrot set, you can compile your solution together with server.c with the following command in dcc.

dcc -o server server.c mandelbrot.c pixelColor.c

You can then run the server program which will give you an address you can use to view your Mandelbrot set. The URL that you see for your Mandelbrot may change and will not be the same as anyone else's. When you start the server, you should see something like the following.

./server

[SERVER] Starting mandelbrot server 3.00

[SERVER] Serving fractals since 2011

[SERVER] Access this server at http://weber.cse.unsw.edu.au:12345/

[SERVER] Waiting for requests...

[SERVER] Served 0 requests
