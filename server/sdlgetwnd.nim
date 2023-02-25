import nimpy
import sdl2

proc get_img(hwnd, width, height: int): int {.exportpy.} =
  var h = new int
  h[] = hwnd
  let window = sdl2.createWindowFrom(cast[ptr int](h))
  let renderer = sdl2.getRenderer(window)

  var pixels = alloc(width*height*3)

  discard sdl2.readPixels(renderer, nil, 0, pixels, 0)

  return cast[int](pixels)

echo get_img(461864, 854, 480)
