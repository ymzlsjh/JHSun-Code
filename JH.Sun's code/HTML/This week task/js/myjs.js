window.onload=function(){
    var oUl= document.getElementById('func-ul');
    var aArray= oUl.getElementsByTagName("a");
    var i=0;
    $("#func-ul a").each(function(){
        $(this).click(function(){
                var oDiv=document.getElementsByClassName('func-con');
                for(i=0;i<oDiv.length;i++){
                    oDiv[i].style.display='none';
                }
                var idName=$(this).attr('href');
                var oDivShow=document.getElementById(idName);
                oDivShow.style.display='block';
            });
        });
};
