

$(function () {
	load_product_List()
})


var input_quantity_count = []
var product_Add =[]
var product_List =[
{"thumnail": "caingot.png", "title": "Caingot", "price": "1000"},
{"thumnail": "cam.jpg", "title": "Cam", "price": "2000"},
{"thumnail": "dauhalan.jpg", "title": "dauhalan", "price": "3000"},
{"thumnail": "duahau.jpg", "title": "duahau", "price": "4000"},
{"thumnail": "nho.jpg", "title": "nho", "price": "5000"},
{"thumnail": "xoaikho.png", "title": "xoaikho", "price": "6000"},
]




function load_product_List(){
	for (i=0; i < product_List.length; i++) {
		$("#load_total_sanpham").append(`
			<div class="sanpham">
			<img src=${product_List[i].thumnail}>
			<p>${product_List[i].title}</p>
			<p>${product_List[i].price}</p>
			<button onclick="add_product(${i})">ADD</button>
			</div>
			`)
	}
}


function add_product(index){
	if (product_Add[index] == undefined) {

		product_Add[index] = {
			"thumnail": product_List[index].thumnail, "title": product_List[index].title, "price": product_List[index].price, "quantity": "1", 
		};
        input_quantity_count[index] = index;
		} else{
			product_Add[index].quantity++;
		}
	console.log(product_Add);
count = 0



	$("#product_added_table").html("")

	for (i=0; i< product_Add.length; i++) {
		if(product_Add[i]==undefined) {
			continue;
		} else{
				$("#product_added_table").append(`
			<tr>
			<th scope="col">${++count}</th>
			<th scope="col">${product_Add[i].thumnail}</th>
			<th scope="col">${product_Add[i].title}</th>
			<th scope="col">${product_Add[i].price}</th>
			<th scope="col"><input type="number" name="" id="${input_quantity_count[i]}"></th>
			<th scope="col">${product_Add[i].price * product_Add[i].quantity}</th>
			</tr>
			`)

				$("#input_quantity_count[i]").val(product_Add[i].quantity)
		}
	
	}
}







