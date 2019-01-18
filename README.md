An obligatory README for publishing. Of course.

# Termio.h
### Console control for conio lovers
-----

## What?
Just a little library to make setting terminal attributes easier to read. I mapped some conio.h functions to the equivalent ANSI escape codes so they would work again!

## API documentation
#### `clrscr()`
Clears the screen.
  
#### `gotoxy(x, y)`
Teleports the cursor to the specified location.

| Variable | Type | Description |
|----------|------|-------------|
|x|number (starts at 1)|Horizontal position|
|y|number (starts at 1)|Vertical position|
  
#### `textbackground(color)` / `setBkgColor(color)`
Sets the background color.

| Variable | Type | Description |
|----------|------|-------------|
|color     |number|Color (from [this table](https://en.wikipedia.org/wiki/ANSI_escape_code#8-bit))|
  
#### `textcolor(color)` / `setTxtColor(color)`
Sets the background color.

| Variable | Type | Description |
|----------|------|-------------|
|color     |number|Color (from [this table](https://en.wikipedia.org/wiki/ANSI_escape_code#8-bit))|
