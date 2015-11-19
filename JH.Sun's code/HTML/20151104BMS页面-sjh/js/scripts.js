$(document).ready(function() {
  $('[data-toggle=offcanvas]').click(function() {
    $('.row-offcanvas').toggleClass('active');
  });
});

 require.config({
          paths:{
                echarts:'dist'
          }
       });
       require(
               [
                    'echarts',
                    'echarts/chart/line',
                    'echarts/chart/bar'
               ],
               function(ec){
                   var myChart=ec.init(document.getElementById('chartStay'));
                   myChart.setOption({
                        title : {
                            text:'十月电量耗损情况',
                            subtext:'20日-27日'
                        },
                       tooltip : {
                           trigger:'axis'
                       },
                       legend : {
                           data:['损耗量','剩余量']
                       },
                       toolbox : {
                           show : true,
                           feature:{
                                dataView:{show:true,readOnly:false},
                                magicType:{show:true,type:['line','bar']},
                                restore:{show:true},
                                saveAsImage:{show:true}
                           }
                       },
                       calculable:true,
                       xAxis:[
                           {
                               type:'category',
                               data:['20日','21日','22日','23日','24日','25日','26日']
                           }
                       ],
                       yAxis:[
                           {
                               type:'value',
                               splitArea:{show:true}
                           }
                       ],
                       series:[
                           {
                               name:'损耗量',
                               type:'line',
                               data:[1,2,1.5,1,2.5,2,1],
                               markPoint:{
                                   data:[
                                       {type:'max',name:'最大值'},
                                       {type:'min',name:'最小值'}
                                   ]
                               },
                               markLine :{
                                   data:[{type:'average',name:'平均值'}]
                               }
                           },
                           {
                               name:'剩余量',
                               type:'line',
                               data:[14,13,13.5,14,12.5,13,14],
                               markPoint:{
                                   data:[
                                       {type:'max',name:'最大值'},
                                       {type:'min',name:'最小值'}
                                   ]
                               },
                               markLine :{
                                   data:[{type:'average',name:'平均值'}]
                               }
                           }
                       ]
                   });
               }
       );