const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#080F37", /* black   */
  [1] = "#2F4775", /* red     */
  [2] = "#A24952", /* green   */
  [3] = "#E85D5A", /* yellow  */
  [4] = "#295890", /* blue    */
  [5] = "#5A6E9E", /* magenta */
  [6] = "#007CC3", /* cyan    */
  [7] = "#afbbcc", /* white   */

  /* 8 bright colors */
  [8]  = "#7a828e",  /* black   */
  [9]  = "#2F4775",  /* red     */
  [10] = "#A24952", /* green   */
  [11] = "#E85D5A", /* yellow  */
  [12] = "#295890", /* blue    */
  [13] = "#5A6E9E", /* magenta */
  [14] = "#007CC3", /* cyan    */
  [15] = "#afbbcc", /* white   */

  /* special colors */
  [256] = "#080F37", /* background */
  [257] = "#afbbcc", /* foreground */
  [258] = "#afbbcc",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
