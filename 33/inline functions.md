<p>used to reduce function calls overhead</p><br>
<p>for each func, it creates copies of variables which wastes memory</p><br>
<h3>NOTE: memory hit is MINIMAL but still exists and we fix it cuz we can</h3>
<br>
<p>int a = 5, b = 3;</p><br>
<p>if(a>b){</p><br>
<p>     cout<<a;</p><br>
<p>}</p><br>
<br>
<p>we can do it in 1 line using ternary operator : </p><br>
<br>
<p>ans = (a>b)? a : b;</p><br>
<p>but what is we have to use it again and again?</p><br>
<p>inline int getMax(int &a, int &b) {</p><br>
<p>    return (a>b) ? a : b;</p><br>
<p>}</p><br>
<br>
<p>funtion body should be of 1 line</p><br>
<p>if body = 1 line, compiler will make it inline</p><br>
<p>if more than 1 line, compiler may or may not</p><br>
<p>if >3 lines, compiles will say "bhaag jaa yahase</p><br>
<h3>How does it work?</h3>
<p>compiler replaces func name when called with func body</p><br>
<p>fayda : better readebility, no extra memory usage</p><br>