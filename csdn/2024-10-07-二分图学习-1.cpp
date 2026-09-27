dfs(int p)

flag = true;
 if vis p == true then //p被染色了
    if color == father_color
      flag = false;
 else
    color p_son = 1 - color p
    -> dfs(p_son)
