jQuery(document).ready(function () {
    var category_names_bul = document.querySelector('.category_name_Blüten div div a font font');
    if (  jQuery(category_names_bul).text('Oils') || jQuery(category_names_bul).text('Bulk')) {
        var inputs = document.querySelector('.plus');
        var span = document.createElement('span');
        inputs.append(span);
        jQuery(span).text('Kg');
        // add class to span
        jQuery(span).addClass('measure_unit');
    }
	else {
		console.log("ok");
	}
});