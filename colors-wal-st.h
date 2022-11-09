const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#090914", /* black   */
  [1] = "#753541", /* red     */
  [2] = "#654049", /* green   */
  [3] = "#953243", /* yellow  */
  [4] = "#944544", /* blue    */
  [5] = "#AB4C47", /* magenta */
  [6] = "#AD6159", /* cyan    */
  [7] = "#d9979a", /* white   */

  /* 8 bright colors */
  [8]  = "#97696b",  /* black   */
  [9]  = "#753541",  /* red     */
  [10] = "#654049", /* green   */
  [11] = "#953243", /* yellow  */
  [12] = "#944544", /* blue    */
  [13] = "#AB4C47", /* magenta */
  [14] = "#AD6159", /* cyan    */
  [15] = "#d9979a", /* white   */

  /* special colors */
  [256] = "#090914", /* background */
  [257] = "#d9979a", /* foreground */
  [258] = "#d9979a",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
