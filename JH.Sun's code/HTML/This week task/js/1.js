function leo(n){
                    var str="sideTabBarChild2"+n;
                    var osideTabBarChild2=document.getElementById(str);
                    var i=1;
                    if(osideTabBarChild2.style.display=='none'){
                        for(i=1;i<5;i++){
                            document.getElementById("sideTabBarChild2"+i).style.display='none';
                        }
                        osideTabBarChild2.style.display='block';
                    }else{
                        osideTabBarChild2.style.display='none';
                    }
                }
            