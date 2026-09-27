if(val[i]>0){  //相等关系
   merge(val[i],i);merge(val[i]+n,i+n);
}if(val[i]<0){ //不等关系
   merge(-val[i],i+n);merge(-val[i]+n,i);
}
