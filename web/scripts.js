
function showLibrary(libraryName) {
    // Ẩn tất cả các thư viện
    var libraries = document.getElementsByClassName('library');
    for (var i = 0; i < libraries.length; i++) {
        libraries[i].style.display = "none";
    }

    // Hiển thị thư viện được chọn
    document.getElementById(libraryName).style.display = "block";
}
document.getElementById("checkbox").addEventListener("change", function(event) {
    if (event.target.checked) {
        document.body.classList.remove("light-mode");
    } else {
        document.body.classList.add("light-mode");
    }
});
