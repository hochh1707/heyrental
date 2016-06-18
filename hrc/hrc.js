(function($){
	$(document).ready(function(){
		url = $(location).attr('href');
		rdType = (url.substring(url.length-1,url.length));

		if(rdType == 2 || rdType == 3){
			$(".views-field-title").text("Send rent due " + rdType);
		}else{
			rdType = 1;
		}

		$(".views-field-title").click(function(){
			$(this).attr('style', 'background-color: #f0f0f0 !important');
			leaseNid = $(this).parent().attr('id');
			rentDueURL = 'http://' + window.location.hostname + '/hrc/rd/' + rdType + '/' + $(this).parent().attr('id');
			//alert(rentDueURL);
			$.get	(	rentDueURL,
						function(msgResult) {buttonColor(msgResult,leaseNid);}
					);
					
		});
	});
	
	function buttonColor(msgResult,leaseNid){
		if(msgResult.substring(0,7) == 'message'){
			$('#'+leaseNid).find('.views-field-title').css('background-color','blue');
		}else{
			$('#'+leaseNid).find('.views-field-title').css('background-color','black');
		}
	}
}(jQuery));	

