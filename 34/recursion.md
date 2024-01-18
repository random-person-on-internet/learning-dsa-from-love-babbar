<h3>kitabi bhasha</h3>
<p>function calls itself directly or indirectly</p>
<p>example : </p>
<br>
<p>int fact(int n){</p>
<p>    if(n<1){</p>
<p>        return -1;</p>
<p>    }</p>
<p>    else if(n == 0 || n == 1){</p>
<p>        return 1;</p>
<p>    }</p>
<p>    else{</p>
<p>        return n * fact(n-1);</p>
<p>    }</p>
<p>}</p>
<br>
<h3>insaani bhasha : </h3>
<p>use it when soln of big input depends on same operations on smaller input</p>
<h3>3 imp components : </h3>
<p>1) base case</p>
<p>2) recursive relation</p>
<p>3) processing</p>
<br>
<h3>2 types of recursions</h3>
<p>Type 1 : Tail recursion</p>
<p>Recursive relation at end below base case and processing</p>
<br>
<p>Type 2 : Head recursion</p>
<p>Recursive relation before processing above base case</p>
<p>eg : printing number</p>
<br>