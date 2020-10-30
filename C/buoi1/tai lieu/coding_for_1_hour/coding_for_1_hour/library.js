function them_header() {
	$('#main').append(`<!-- top nav -->
						<div class="navbar navbar-blue navbar-static-top">  
							<div class="navbar-header">
							  <button class="navbar-toggle" type="button" data-toggle="collapse" data-target=".navbar-collapse">
								<span class="sr-only">Toggle</span>
								<span class="icon-bar"></span>
								<span class="icon-bar"></span>
								<span class="icon-bar"></span>
							  </button>
							  <a href="http://usebootstrap.com/theme/facebook" class="navbar-brand logo">A</a>
							</div>
							<nav class="collapse navbar-collapse" role="navigation">
							<form class="navbar-form navbar-left">
								<div class="input-group input-group-sm" style="max-width:360px;">
								  <input class="form-control" placeholder="Search" name="srch-term" id="srch-term" type="text">
								  <div class="input-group-btn">
									<button class="btn btn-default" type="submit"><i class="glyphicon glyphicon-search"></i></button>
								  </div>
								</div>
							</form>
							<ul class="nav navbar-nav">
							  <li>
								<a href="#"><i class="glyphicon glyphicon-home"></i> Home</a>
							  </li>
							  <li>
								<a href="#postModal" id="postButton" role="button" data-toggle="modal" style="display: none;"><i class="glyphicon glyphicon-plus"></i> Post</a>
							  </li>
							  <li>
								<a href="#"> Aprotrain Aptech 1 Hour</a>
							  </li>
							</ul>
							<ul class="nav navbar-nav navbar-right">
							  <li class="dropdown">
								<a href="#" class="dropdown-toggle" data-toggle="dropdown"><i class="glyphicon glyphicon-user"></i></a>
								<ul class="dropdown-menu">
								  <li><a href="#">Xem Thông Tin</a></li>
								  <li><a href="#">Thoát</a></li>
								</ul>
							  </li>
							</ul>
							</nav>
						</div>
						<!-- /top nav -->`)
}

function them_footer() {
	$('#main').append(`<div class="padding">
							<div class="full col-sm-9" id="container">
							  
								<!-- content -->                      
								<div class="row">
								  
								 <!-- main col left --> 
								 <div class="col-sm-3" id="menu_left">
								  </div>
								  
								  <!-- main col right -->
								  <div class="col-sm-6">
								  	<div class="well" id="them_bai_viet" style="display: none;"> 
										   <form class="form-horizontal" role="form">
											<h4>What's New</h4>
											 <div class="form-group" style="padding:14px;">
											  <textarea class="form-control" placeholder="Update your status" id="postStatus"></textarea>
											</div>
											<button class="btn btn-primary pull-right" type="button" onclick="postStatusFunc()">Post</button><ul class="list-inline"><li><a href=""><i class="glyphicon glyphicon-upload"></i></a></li><li><a href=""><i class="glyphicon glyphicon-map-marker"></i></a></li></ul>
										  </form>
									  </div>
									<div id="main_body"></div>
								  </div>

								  <div class="col-sm-3" id="menu_right">
								  </div>
							   </div><!--/row-->
							<br/><br/><br/><br/><br/>
							  
							</div><!-- /col-9 -->
						</div><!-- /padding -->`)
}

function hien_thi_nut_bai_viet() {
	$('#postButton').show()
	$('#them_bai_viet').show()
}

var index = 0
var g_fullname = 'Aprotrain Aptech'
var g_avatar = 'https://res.cloudinary.com/ziczacgroup/image/upload/v1587623413/qhwncq3wtjkrsyke6ayw.png'

function them_bai_viet_chinh(fullname, avatar, content, hinhanh=null, like = 10) {
	g_fullname = fullname
	g_avatar = avatar

	hinhanhContent = ''
	if(hinhanh != null) {
		hinhanhContent = `<div class="panel-thumbnail"><img src="${hinhanh}" class="img-responsive"></div>`
	}

	$('#main_body').prepend(`<div class="panel panel-default" id="content_${++index}">
										 <div class="panel-heading"><a href="#" class="pull-right">Xem</a> <h4><img src="${avatar}" class="img-circle pull-left" style="max-width: 42px; max-height: 42px; margin-top: -10px !important; margin-right: 10px !important;">${fullname}</h4></div>
										  ${hinhanhContent}
										  <div class="panel-body">
											<div class="clearfix"></div>
											<p>${content}</p>
											<hr style="display: none;" id="hr_${index}">
											<p id="comment_${index}"></p>
											<hr>
											<div class="input-group">
											  <div class="input-group-btn">
											  <button type="button" onclick="tangLike(this)" value="${like}" class="btn btn-default">+${like}</button><button class="btn btn-default" type="button" onclick="addComment(${index})"><i class="glyphicon glyphicon-share"></i></button>
											  </div>
											  <input id="input_${index}" onenter class="form-control" placeholder="Add a comment.." type="text">
											</div>
											
										  </div>
									   </div>`)
}

function postStatusFunc() {
	them_bai_viet_chinh(g_fullname, g_avatar, $('#postStatus').val(), null, 1)
	$('#postStatus').val('')
}

function themBaiViet() {
	them_bai_viet_chinh(g_fullname, g_avatar, $('#sharePost').val(), null, 1)
	$('#sharePost').val('')
}

function them_bai_viet_trai(fullname, avatar, content, hinhanh=null, like = 10) {
	g_fullname = fullname
	g_avatar = avatar

	hinhanhContent = ''
	if(hinhanh != null) {
		hinhanhContent = `<div class="panel-thumbnail"><img src="${hinhanh}" class="img-responsive"></div>`
	}

	$('#menu_left').prepend(`<div class="panel panel-default" id="content_${++index}">
										 <div class="panel-heading"><a href="#" class="pull-right">Xem</a> <h4><img src="${avatar}" class="img-circle pull-left" style="max-width: 42px; max-height: 42px; margin-top: -10px !important; margin-right: 10px !important;">${fullname}</h4></div>
										  ${hinhanhContent}
										  <div class="panel-body">
											<div class="clearfix"></div>
											${content}
											<hr style="display: none;" id="hr_${index}">
											<p id="comment_${index}"></p>
											<hr>
											<div class="input-group">
											  <div class="input-group-btn">
											  <button type="button" onclick="tangLike(this)" value="${like}" class="btn btn-default">+${like}</button><button class="btn btn-default" type="button" onclick="addComment(${index})"><i class="glyphicon glyphicon-share"></i></button>
											  </div>
											  <input id="input_${index}" class="form-control" placeholder="Add a comment.." type="text">
											</div>
										  </div>
									  </div>`)
}

function them_bai_viet_phai(fullname, avatar, content, hinhanh=null, like = 10) {
	g_fullname = fullname
	g_avatar = avatar

	hinhanhContent = ''
	if(hinhanh != null) {
		hinhanhContent = `<div class="panel-thumbnail"><img src="${hinhanh}" class="img-responsive"></div>`
	}

	$('#menu_right').prepend(`<div class="panel panel-default" id="content_${++index}">
										 <div class="panel-heading"><a href="#" class="pull-right">Xem</a> <h4><img src="${avatar}" class="img-circle pull-left" style="max-width: 42px; max-height: 42px; margin-top: -10px !important; margin-right: 10px !important;">${fullname}</h4></div>
										  ${hinhanhContent}
										  <div class="panel-body">
											<div class="clearfix"></div>
											${content}
											<hr style="display: none;" id="hr_${index}">
											<p id="comment_${index}"></p>
											<hr>
											<div class="input-group">
											  <div class="input-group-btn">
											  <button type="button" onclick="tangLike(this)" value="${like}" class="btn btn-default">+${like}</button><button class="btn btn-default" type="button" onclick="addComment(${index})"><i class="glyphicon glyphicon-share"></i></button>
											  </div>
											  <input id="input_${index}" class="form-control" placeholder="Add a comment.." type="text">
											</div>
										  </div>
									  </div>`)
}

function addComment(_index) {
	if($('#input_'+_index).val() == '') {
		return;
	}
	$('#hr_'+_index).show()
	$('#comment_'+_index).append($('#input_'+_index).val()+'<br/>')
	$('#input_'+_index).val('')
}

function tangLike(that) {
	$(that).val(parseInt($(that).val()) + 1)
	$(that).html('+'+$(that).val())
}

function them_chat() {
	$('body').append(`<script>!function(s,u,b,i,z){var r,m;s[i]||(s._sbzaccid=z,s[i]=function(){s[i].q.push(arguments)},s[i].q=[],s[i]("setAccount",z),r=function(e){return e<=6?5:r(e-1)+r(e-3)},(m=function(e){var t,n,c;5<e||s._subiz_init_2094850928430||(t="https://",t+=0===e?"widget."+i+".xyz":1===e?"storage.googleapis.com":"sbz-"+r(10+e)+".com",t+="/sbz/app.js?accid="+z,n=u.createElement(b),c=u.getElementsByTagName(b)[0],n.async=1,n.src=t,c.parentNode.insertBefore(n,c),setTimeout(m,2e3,e+1))})(0))}(window,document,"script","subiz","acqpeyxnjmvbdavhzcwm");</script>`)
}

function sua_mau_chu(id, color) {
	$(id).css('color', color)
}

function sua_mau_nen(id, color) {
	if(color.startsWith('http')) {
		$(id).css('background-image', 'url("'+color+'")')
		$(id).css('background-size', 'cover')
		$(id).css('background-repeat', 'none-repeat')
	} else {
		$(id).css('background-color', color)
	}
}